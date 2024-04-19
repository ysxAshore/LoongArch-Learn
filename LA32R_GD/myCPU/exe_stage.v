`timescale 1ns / 1ps
`include "mycpu.h"

module exe_stage (
    input wire clk,
    input wire resetn,

    //与上一级流水线通讯的流水线控制信号
    output wire exe_allowin,
    input wire id_to_exe_valid,
    input wire [`ID_TO_EXE_WD-1:0] id_to_exe_bus,

    //与下一级流水线通讯的流水线控制信号
    input wire mem_allowin,
    output wire exe_to_mem_valid,
    output wire [`EXE_TO_MEM_WD-1:0] exe_to_mem_bus,

    //传递给ID阶段的RAW相关判断
    output wire [`EXE_TO_ID_WD-1:0] exe_to_id_bus,

    //MEM传递过来的异常/ERTN刷新信号
    input wire mem_to_exe_flush_excp_ertn,

    //CSR传递过来的TLB请求相关的信号,
    input wire [`CSR_TO_EXE_WD-1:0] csr_to_exe_bus,

    //传递给TLB的数据
    output wire [`EXE_TO_TLB_WD-1:0] exe_to_tlb_bus,

    //TLB传递过来的数据 和TLB->IF的位宽一致
    input wire [`TLB_TO_IF_WD-1:0] tlb_to_exe_bus,

    //访dataRAM端口
    output wire        data_sram_req,
    output wire        data_sram_wr,
    output wire [ 3:0] data_sram_wstrb,
    output wire [ 1:0] data_sram_size,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata,
    input  wire        data_sram_addr_ok,

    output data_mat,

    output        icacop_en,
    output        dcacop_en,
    output [ 1:0] cacop_mode,
    input         cacop_ok
);
  //exe_reg
  reg exe_valid;
  wire exe_ready_go;
  reg [`ID_TO_EXE_WD-1:0] exe_data;

  assign exe_allowin = ~exe_valid | exe_ready_go & mem_allowin;
  assign exe_to_mem_valid = exe_valid & exe_ready_go;
  always @(posedge clk) begin
    if (~resetn | mem_to_exe_flush_excp_ertn) begin
      exe_valid <= 1'b0;
    end else if (exe_allowin) begin
      exe_valid <= id_to_exe_valid;
    end
    if (exe_allowin & id_to_exe_valid) begin
      exe_data <= id_to_exe_bus;
    end
  end

  //解压缩id组合逻辑传递给exe_reg的信号
  wire [11:0] alu_op;
  wire res_from_mem;
  wire exe_regW_temp;
  wire exe_memW_temp;
  wire [4:0] exe_regWAddr;
  wire [31:0] DataA;
  wire [31:0] forwardDataB;
  wire [31:0] DataB;
  wire div_signed;
  wire mul_signed;
  wire div;
  wire [2:0] aluMD_resSelect;
  wire [1:0] memINS_rec;
  wire [13:0] csr_num;
  wire [1:0] csr_instRec;
  wire exe_ertn;
  wire exe_excp_temp;
  wire load_sign;
  wire [14:0] excp_num_temp;
  wire [1:0] rdcnt_REC;
  wire [4:0] code;
  wire [2:0] tlb_ins_rec;
  wire inst_cacop;
  wire inst_ll;
  wire inst_sc;
  wire [31:0] exe_pc;
  wire [31:0] exe_inst;
  wire [7:0] inst_ld_en;
  wire [7:0] inst_st_en_temp;
  wire inst_csr_rstat_en;
  wire inst_idle;

  assign {alu_op, res_from_mem, exe_regW_temp, exe_memW_temp, exe_regWAddr, forwardDataB, DataA, DataB, div_signed, mul_signed, div, aluMD_resSelect, 
          memINS_rec, load_sign, csr_num, csr_instRec, exe_ertn, exe_excp_temp, excp_num_temp, rdcnt_REC, tlb_ins_rec, code, inst_cacop, inst_ll,inst_sc,exe_pc,exe_inst,
          inst_ld_en,inst_st_en_temp,inst_csr_rstat_en,inst_idle} = exe_data;
  wire exe_memW = exe_memW_temp | inst_sc & llbit_out;

  //解压缩CSR传递过来的信号
  wire [18:0] vppn;
  wire [9:0] asid;
  wire crmd_da;
  wire crmd_pg;
  wire [2:0] dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg;
  wire dmw0_plv0, dmw0_plv3, dmw1_plv0, dmw1_plv3;
  wire [1:0] cur_plv;
  wire crmd_datm;
  wire dmw0_mat,dmw1_mat;
  wire llbit_out;

  assign {vppn, asid,crmd_da, crmd_pg, dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg, dmw0_plv0, dmw1_plv0, dmw0_plv3, dmw1_plv3, cur_plv,crmd_datm,dmw0_mat,dmw1_mat,llbit_out} = csr_to_exe_bus;

  //拆解TLB传递过来的数据
  wire s1_found;
  wire [19:0] s1_ppn;
  wire [5:0] s1_ps;
  wire [1:0] s1_plv;
  wire [1:0] s1_mat;
  wire s1_d;
  wire s1_v;
  wire [$clog2(`TLB_NUM)-1:0] s1_findex;
  assign {s1_found, s1_ppn, s1_ps, s1_plv, s1_mat, s1_d, s1_v, s1_findex} = tlb_to_exe_bus;

  //alu
  wire [31:0] exe_aluResult;
  alu u_alu (
      .alu_op    (alu_op),
      .alu_src1  (DataA),
      .alu_src2  (DataB),
      .alu_result(exe_aluResult)
  );

  //mul
  wire [63:0] exe_mulResult;
  mul u_mul (
      .mul_clk   (clk),
      .resetn    (resetn & ~mem_to_exe_flush_excp_ertn),
      .mul_signed(mul_signed),
      .x         (DataA),
      .y         (DataB),
      .result    (exe_mulResult)
  );

  //div
  wire [31:0] s;
  wire [31:0] r;
  wire complete_delay;
  wire divisor_is_zero_o;
  wire div_start_ready_o;
  reg div_finish_ready_i;
  always @(posedge clk) begin
    if (~resetn | mem_to_exe_flush_excp_ertn) begin
      div_finish_ready_i <= 1'b0;
    end else if (div & div_start_ready_o) begin
      div_finish_ready_i <= 1'b1;
    end else if (complete_delay) begin
      div_finish_ready_i <= 1'b0;
    end
  end


  // divider u_div (
  //     .div_clk       (clk),
  //     .resetn        (resetn & ~mem_to_exe_flush_excp_ertn),
  //     .div           (div),
  //     .div_signed    (div_signed),
  //     .x             (DataA),
  //     .y             (DataB),
  //     .s             (s),
  //     .r             (r),
  //     .complete_delay(complete_delay)
  // );
    int_div_radix_4_v1 u_int_div_radix_4_v1(
        .flush_i            (1'b0             ),
        .div_start_valid_i  (div & exe_valid),
        .div_start_ready_o  (div_start_ready_o),
        .signed_op_i        (div_signed),
        .dividend_i         (DataA),
        .divisor_i          (DataB),
        .div_finish_valid_o (complete_delay),
        .div_finish_ready_i (div_finish_ready_i),
        .quotient_o         (s),
        .remainder_o        (r),
        .divisor_is_zero_o  (divisor_is_zero_o),
        .clk                (clk              ),
        .rst_n              (resetn & ~mem_to_exe_flush_excp_ertn)
      );

  //ALE异常
  wire cacop_load;//cacop访存
  wire ALE_EXCP;
  wire TLBR;
  wire PIL;
  wire PIS;
  wire PPI;
  wire PME;
  wire exe_regW;
  wire exe_excp;
  wire [14:0] excp_num;

  assign ALE_EXCP = memINS_rec == 2'b11 ? exe_aluResult[1:0] != 2'b0 :
                    memINS_rec == 2'b10 ? exe_aluResult[0] != 1'b0 : 1'b0;
  //需要在exe_valid有效的前递下检查
  assign TLBR =  (exe_memW | res_from_mem | cacop_load) & crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0 & ~s1_found;
  assign PIL =   (res_from_mem | cacop_load) & crmd_da == 1'b0 &  crmd_pg == 1'b1 & dmw_select == 2'b0 & s1_found & ~s1_v;
  assign PIS =   (exe_memW) & crmd_da == 1'b0 &  crmd_pg == 1'b1 & dmw_select == 2'b0 & s1_found & ~s1_v;
  assign PPI =  (exe_memW | res_from_mem | cacop_load) & crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0  & s1_found & s1_v & cur_plv > s1_plv;
  assign PME = (exe_memW) & crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0 & s1_found & s1_v & cur_plv <= s1_plv & ~s1_d;

  assign exe_regW = exe_regW_temp & ~ALE_EXCP & ~TLBR & ~PIL & ~PIS & ~PPI & ~PME & ~mem_to_exe_flush_excp_ertn;
  assign exe_excp = exe_excp_temp | ALE_EXCP | TLBR | PIL | PIS | PPI | PME;
  assign excp_num = {excp_num_temp[14:7], ALE_EXCP, TLBR, PIL, PIS, PPI, PME, excp_num_temp[0]};

  //这里只做了code=0和code=1，但是指令可能会有code是2的时候，直接忽略
  assign exe_ready_go = ~(div & ~(complete_delay & div_finish_ready_i)) & ~((exe_memW | res_from_mem) & ~(data_sram_req & data_sram_addr_ok)) & ~((icacop_en | dcacop_en)  & ~cacop_ok) | mem_to_exe_flush_excp_ertn | exe_excp;//如果当前exe阶段组合逻辑正在计算div且complete_delay未高有效，那么阻塞exe

  //TLB SRCH INVTLB cacop模式2当作普通的load，所以也需要地址转换，只不过不用真的访存
  wire invtlb_valid = tlb_ins_rec == 3'b101 & exe_valid & ~mem_to_exe_flush_excp_ertn;
  wire [18:0] s1_vppn = {19{tlb_ins_rec == 3'b001}} & vppn |
                        {19{tlb_ins_rec == 3'b101}} & DataB[31:13]|
                        {19{exe_valid & (exe_memW | res_from_mem | cacop_load)}} & exe_aluResult[31:13];  //这里先不考虑访存，只考虑tlbsrch、invtlb的vppn、asid、也需要考虑12bit值，不然读不出来
  wire [9:0] s1_asid = {10{tlb_ins_rec == 3'b001}} & asid | {10{tlb_ins_rec == 3'b101}} & DataA[9:0] | {10{exe_valid & (exe_memW | res_from_mem | cacop_load)}} & asid;
  wire s1_va_bit12 = exe_aluResult[12];

  //tlb_addr
  wire [31:0] tlb_addr;
  assign tlb_addr = s1_ps == 6'h21 ? {s1_ppn[19:9],exe_aluResult[20:0]} : {s1_ppn[19:0],exe_aluResult[11:0]};

  //dmw_addr
  wire [31:0] dmw_addr;
  wire [ 1:0] dmw_select;  //2'b01表示命中DMW0 2'b10表示命中DMW1 

  assign dmw_select[0] = dmw0_vseg == exe_aluResult[31:29] & (dmw0_plv3 == 1'b1 & cur_plv == 2'b11 | dmw0_plv0 == 1'b1 & cur_plv == 2'b0);//只有对应等级的plv才能使用对应的窗口
  assign dmw_select[1] = dmw1_vseg == exe_aluResult[31:29] & (dmw1_plv3 == 1'b1 & cur_plv == 2'b11 | dmw1_plv0 == 1'b1 & cur_plv == 2'b0);

  assign dmw_addr = {32{dmw_select[0]}} & {dmw0_pseg, exe_aluResult[28:0]} | {32{dmw_select[1]}} & {dmw1_pseg,exe_aluResult[28:0]};

  //访存接口
  assign data_sram_req = exe_valid & (exe_memW | res_from_mem) & ~exe_excp & ~mem_to_exe_flush_excp_ertn & mem_allowin;
  assign data_sram_wr = exe_valid & ~exe_excp & ~mem_to_exe_flush_excp_ertn & exe_memW;
  //当EXE有标记excp/ertn、MEM级有标记excp/ertn、WB级有excp/ertn
  assign data_sram_wstrb = {4{exe_valid}} & {4{exe_memW}} & {4{~exe_excp}} & {4{~mem_to_exe_flush_excp_ertn}}
                      & (memINS_rec == 2'b01 ? 
                         ({4{exe_aluResult[1:0] == 2'b00}} & 4'b0001 |
                          {4{exe_aluResult[1:0] == 2'b01}} & 4'b0010 |
                          {4{exe_aluResult[1:0] == 2'b10}} & 4'b0100 |
                          {4{exe_aluResult[1:0] == 2'b11}} & 4'b1000 
                      ):(memINS_rec == 2'b10 ?
                         ({4{exe_aluResult[1:0] == 2'b00}} & 4'b0011 |
                          {4{exe_aluResult[1:0] == 2'b10}} & 4'b1100)
                      :(memINS_rec == 2'b11 ? 4'b1111 : 4'b0000)));
  assign data_sram_size = memINS_rec == 2'b11 ? 2'b10 : memINS_rec == 2'b10 ? 2'b01 : 2'b00;
  assign data_sram_addr = crmd_da == 1'b1 & crmd_pg == 1'b0 ? exe_aluResult :
                          dmw_select != 2'b0 ? dmw_addr :
                          tlb_addr;
  assign data_sram_wdata = {32{memINS_rec == 2'b01}} & {{32{exe_aluResult[1:0] == 2'b00}} & {24'b0,forwardDataB[7:0]} |
                                                        {32{exe_aluResult[1:0] == 2'b01}} & {16'b0,forwardDataB[7:0],8'b0} |
                                                        {32{exe_aluResult[1:0] == 2'b10}} & {8'b0,forwardDataB[7:0],16'b0} |
                                                        {32{exe_aluResult[1:0] == 2'b11}} & {forwardDataB[7:0],24'b0}} 
                           | {32{memINS_rec == 2'b10}} & {{32{exe_aluResult[1:0] == 2'b00}} & {16'b0,forwardDataB[15:0]} |
                                                          {32{exe_aluResult[1:0] == 2'b10}} & {forwardDataB[15:0],16'b0}}  
                           | {32{memINS_rec == 2'b11}} & forwardDataB;
  assign data_mat = crmd_da == 1'b1 & crmd_pg == 1'b0 ? crmd_datm :
                    dmw_select != 2'b0 ? (dmw_select[0] ? dmw0_mat : dmw1_mat) :
                    s1_mat[0];
  
  //选择最后exe计算数据
  wire [31:0] exe_finalResult;
  assign exe_finalResult = {32{aluMD_resSelect == 3'b000}} & exe_aluResult       |
                           {32{aluMD_resSelect == 3'b001}} & exe_mulResult[31:0] |
                           {32{aluMD_resSelect == 3'b010}} & exe_mulResult[63:32]|
                           {32{aluMD_resSelect == 3'b011}} & s                   |
                           {32{aluMD_resSelect == 3'b100}} & r;
  //cacop
  assign icacop_en = inst_cacop & code[2:0] == 3'h0 & exe_valid;
  assign dcacop_en = inst_cacop & code[2:0] == 3'h1 & exe_valid;
  assign cacop_mode = code[4:3];
  assign cacop_load = (code[4:3] == 2'b10) & (icacop_en | dcacop_en); //被视为1个load操作

  //difftest
  wire  [7:0] inst_st_en = {4'b0,inst_sc & llbit_out,inst_st_en_temp[2:0]};

  //封包exe组合逻辑传递给mem_reg的数据
  assign exe_to_mem_bus = {
    exe_memW,
    exe_regW,
    exe_regWAddr,
    res_from_mem,
    exe_finalResult,
    memINS_rec,
    load_sign,
    DataA,
    DataB,
    csr_num,
    csr_instRec,
    exe_excp,
    exe_ertn,
    excp_num,
    rdcnt_REC,
    tlb_ins_rec,
    icacop_en, 
    s1_found,
    s1_findex,
    inst_ll,
    inst_sc,
    exe_pc,
    exe_inst,
    data_sram_wdata,
    inst_ld_en,
    inst_st_en,
    inst_csr_rstat_en,
    llbit_out,
    data_sram_addr,
    inst_idle
  };

  //封包exe传递给id的RAW相关判断
  wire exist_csrR = csr_instRec != 2'b0 | rdcnt_REC != 2'b0;
  assign exe_to_id_bus = {
    exe_valid, res_from_mem, exe_regW, exe_valid ? exe_regWAddr : 5'b0, exe_finalResult, exist_csrR
  };

  //封包exe传递给tlb的数据
  assign exe_to_tlb_bus = {s1_vppn, s1_asid, s1_va_bit12, invtlb_valid, code};

endmodule
