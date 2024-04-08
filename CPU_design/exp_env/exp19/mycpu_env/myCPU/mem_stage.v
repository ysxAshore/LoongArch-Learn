`timescale 1ns / 1ps
`include "mycpu.h"

module mem_stage (
    input wire clk,
    input wire resetn,

    //与上一级流水线通讯的流水线控制信号
    output wire mem_allowin,
    input wire exe_to_mem_valid,
    input wire [`EXE_TO_MEM_WD-1:0] exe_to_mem_bus,

    //与下一级流水线通讯的流水线控制信号
    input wire wb_allowin,
    output wire mem_to_wb_valid,
    output wire [`MEM_TO_WB_WD-1:0] mem_to_wb_bus,

    //传递给id阶段的RAW相关判断
    output wire [`MEM_TO_ID_WD-1:0] mem_to_id_bus,

    //传递给CSR阶段的信号
    output wire [`MEM_TO_CSR_WD-1:0] mem_to_csr_bus,

    //dataRAM读数据
    input wire [31:0] data_sram_rdata,
    input wire data_sram_data_ok,

    //CSR传递过来的信号 csrRData、tid_out、timer_64_out
    input wire [`CSR_TO_MEM_WD-1:0] csr_to_mem_bus,

    //传递给EXE的刷新信号
    output wire mem_to_exe_flush_excp_ertn,

    //传递给ID的刷新信号
    output wire mem_to_id_flush_excp_ertn,

    //传递给IF的preIF
    output wire [`MEM_TO_IF_WD-1:0] mem_to_if_bus,

    //接收TLB传输过来的信号
    input wire [`TLB_TO_MEM_WD-1:0] tlb_to_mem_bus,

    //传输给TLB的信号
    output wire [`MEM_TO_TLB_WD-1:0] mem_to_tlb_bus


);

  // mem_reg
  reg mem_valid;
  wire mem_ready_go;
  reg [`EXE_TO_MEM_WD-1:0] mem_data;
  wire flush_excp_ertn;

  assign mem_ready_go = ~((mem_memW | res_from_mem) & ~data_sram_data_ok);
  assign mem_allowin = ~mem_valid | mem_ready_go & wb_allowin;
  assign mem_to_wb_valid = mem_ready_go & mem_valid;
  always @(posedge clk) begin
    if (~resetn | flush_excp_ertn) begin
      mem_valid <= 1'b0;
    end else if (mem_allowin) begin
      mem_valid <= exe_to_mem_valid;
    end
    if (mem_allowin & exe_to_mem_valid) begin
      mem_data <= exe_to_mem_bus;
    end
  end

  //拆解mem_reg数据
  wire mem_memW;
  wire mem_regW;
  wire [4:0] mem_regWAddr;
  wire res_from_mem;
  wire [31:0] mem_aluResult;
  wire [1:0] memINS_rec;
  wire load_sign;
  wire [31:0] DataA;
  wire [31:0] DataB;
  wire [13:0] csr_num;
  wire [1:0] csr_instRec;
  wire mem_excp;
  wire mem_ertn;
  wire [13:0] excp_num;
  wire [1:0] rdcnt_REC;
  wire [2:0] tlb_ins_rec;
  wire [31:0] mem_pc;

  assign {mem_memW,mem_regW, mem_regWAddr, res_from_mem, mem_aluResult, memINS_rec, load_sign, DataA, DataB, 
          csr_num, csr_instRec, mem_excp, mem_ertn, excp_num, rdcnt_REC, tlb_ins_rec, mem_pc} = mem_data;

  //拆解CSR传递过来的数据
  wire [31:0] csrRData;
  wire [31:0] tid_out;
  wire [63:0] timer_64_out;
  wire [18:0] vppn;
  wire [9:0] asid;
  wire [$clog2(`TLB_NUM)-1:0] tlb_index;
  wire e;
  wire [5:0] ps;
  wire g;
  wire [19:0] ppn0;
  wire [1:0] plv0;
  wire [1:0] mat0;
  wire d0;
  wire v0;
  wire [19:0] ppn1;
  wire [1:0] plv1;
  wire [1:0] mat1;
  wire d1;
  wire v1;

  assign {csrRData, tid_out, timer_64_out, vppn, asid, tlb_index, e, ps, g, ppn0, plv0, mat0, d0, v0, ppn1, plv1, mat1, d1, v1} = csr_to_mem_bus;

  //拆解TLB传递过来的数据
  wire r_e;
  wire [18:0] r_vppn;
  wire [5:0] r_ps;
  wire [9:0] r_asid;
  wire r_g;
  wire [19:0] r_ppn0;
  wire [1:0] r_plv0;
  wire [1:0] r_mat0;
  wire r_d0;
  wire r_v0;
  wire [19:0] r_ppn1;
  wire [1:0] r_plv1;
  wire [1:0] r_mat1;
  wire r_d1;
  wire r_v1;
  wire [$clog2(`TLB_NUM)-1:0] s1_findex;
  wire s1_found;

  assign {r_e, r_vppn, r_ps, r_asid, r_g, r_ppn0, r_plv0, r_mat0, r_d0, r_v0, r_ppn1, r_plv1, r_mat1, r_d1, r_v1, s1_findex,s1_found} = tlb_to_mem_bus;

  //获得访存数据
  wire [31:0] mem_memReadData;
  wire [ 7:0] byteReadData = ({8{mem_aluResult[1:0]==2'b00}} & data_sram_rdata[ 7: 0]) |
                            ({8{mem_aluResult[1:0]==2'b01}} & data_sram_rdata[15: 8]) |
                            ({8{mem_aluResult[1:0]==2'b10}} & data_sram_rdata[23:16]) |
                            ({8{mem_aluResult[1:0]==2'b11}} & data_sram_rdata[31:24]) ;
  wire [15:0] halfReadData = ({16{mem_aluResult[1:0]==2'b00}} & data_sram_rdata[15: 0]) |
                             ({16{mem_aluResult[1:0]==2'b10}} & data_sram_rdata[31:16]) ;

  assign mem_memReadData = {32{memINS_rec == 2'b01}} & {{24{load_sign & byteReadData[7]}},byteReadData} |
                           {32{memINS_rec == 2'b10}} & {{16{load_sign & halfReadData[15]}},halfReadData} |
                           {32{memINS_rec == 2'b11}} & data_sram_rdata;

  //处理csr指令
  wire [13:0] csrRAdd;
  wire csrWen;
  wire excpAboutAddr;
  wire tlbr_wen;
  wire tlb_addr_excp;
  wire [13:0] csrWAdd;
  wire [31:0] csrWData;
  wire [8:0] subcode;
  wire [5:0] code;
  wire [31:0] era;
  wire [31:0] badv_addr;

  assign csrRAdd = csr_num;
  assign csrWen = (csr_instRec == 2'b10 | csr_instRec == 2'b11) & mem_valid;
  assign csrWAdd = csr_num;
  assign csrWData = csr_instRec == 2'b10 ? DataB : 
                    csr_instRec == 2'b11 ? DataB & DataA | ~DataA & csrRData : 32'b0;
  assign excpAboutAddr = excp_num[13] | excp_num[12] | excp_num[11] | excp_num[10] | excp_num[6] | excp_num[5] | excp_num[4] | excp_num[3] | excp_num[2] | excp_num[1];
  assign tlbr_wen = excp_num[12] | excp_num[5];
  assign tlb_addr_excp = excp_num[12] | excp_num[11] | excp_num[10] | excp_num[5] | excp_num[4] | excp_num[3] | excp_num[2] | excp_num[1];
  assign badv_addr = excp_num[13] | excp_num[12] | excp_num[11] | excp_num[10] ? mem_pc : mem_aluResult;
  assign subcode = 9'b0;
  assign code = excp_num[13] ? 6'h08 :  //ADEF
      excp_num[12] ? 6'h3f :  //preif tlbr
      excp_num[11] ? 6'h03 :  //preif pif
      excp_num[10] ? 6'h07 :  //preif ppi
      excp_num[9] ? 6'h0b :  //id syscall
      excp_num[8] ? 6'h0c :  //id brk
      excp_num[7] ? 6'h0d :  //id ine
      excp_num[6] ? 6'h09 :  //exe ale
      excp_num[5] ? 6'h3f :  //exe tlbr
      excp_num[4] ? 6'h01 :  //exe pil
      excp_num[3] ? 6'h02 :  //exe pis
      excp_num[2] ? 6'h07 :  //exe ppi
      excp_num[1] ? 6'h04 :  //exe pme
      6'h0;
  assign era = mem_pc;

  //写reg数据
  wire [31:0] mem_regWData = rdcnt_REC == 2'b01 ? tid_out :
                             rdcnt_REC == 2'b10 ? timer_64_out[31:0] :
                             rdcnt_REC == 2'b11 ? timer_64_out[63:32]:
                             res_from_mem ? mem_memReadData : 
                             csr_instRec == 2'b0 ? mem_aluResult : csrRData;

  //refetch pc
  wire [31:0] refetch_pc = mem_pc + 32'h4;
  wire refetch = mem_valid & (tlb_ins_rec != 3'b0 | (csr_instRec == 2'b10 | csr_instRec == 2'b11) & (csr_num == 14'h0 | csr_num == 14'h10 | csr_num == 14'h11 | csr_num== 14'h12 | csr_num == 14'h13 | csr_num == 14'h18 | csr_num == 14'h19 | csr_num == 14'h1a));

  //TLB WR FILL
  wire we = tlb_ins_rec == 3'b011 | tlb_ins_rec == 3'b100;
  wire [$clog2(`TLB_NUM)-1:0] w_index = tlb_index;
  wire w_e = e;
  wire [18:0] w_vppn = vppn;
  wire [5:0] w_ps = ps;
  wire [9:0] w_asid = asid;
  wire w_g = g;
  wire [19:0] w_ppn0 = ppn0;
  wire [1:0] w_plv0 = plv0;
  wire [1:0] w_mat0 = mat0;
  wire w_d0 = d0;
  wire w_v0 = v0;
  wire [19:0] w_ppn1 = ppn1;
  wire [1:0] w_plv1 = plv1;
  wire [1:0] w_mat1 = mat1;
  wire w_d1 = d1;
  wire w_v1 = v1;

  //TLB R
  wire [$clog2(`TLB_NUM)-1:0] r_index = tlb_index;

  //TLB RD SRCH得到的数据处理
  wire [31:0] tlbelo0_in = r_e ? {r_ppn0, 1'b0, r_g, r_mat0, r_plv0, r_d0, r_v0} : 32'b0;
  wire [31:0] tlbelo1_in = r_e ? {r_ppn1, 1'b1, r_g, r_mat1, r_plv1, r_d1, r_v1} : 32'b0;
  wire [9:0] asid_in = r_e ? r_asid : 10'b0;
  wire [18:0] vppn_in = r_e ? r_vppn : 19'b0;
  wire [5:0] ps_in = r_e ? r_ps : 6'b0;

  wire [$clog2(`TLB_NUM)-1:0] index_in = s1_findex;  //只有SRCH更新index
  wire e_in = tlb_ins_rec == 3'b001 ? s1_found : r_e;

  //触发异常、ertn则刷新ID、EXE，并置preIF的next为新值
  assign flush_excp_ertn = (mem_excp | mem_ertn | refetch) & mem_valid;
  assign mem_to_id_flush_excp_ertn = flush_excp_ertn;
  assign mem_to_exe_flush_excp_ertn = flush_excp_ertn;
  assign mem_to_if_bus = {
    refetch_pc,
    mem_valid & tlbr_wen,
    mem_valid & refetch,
    mem_valid & mem_excp,
    mem_valid & mem_ertn
  };

  //封包传递给wb_reg数据
  assign mem_to_wb_bus = {mem_regW, mem_valid ? mem_regWAddr : 5'b0, mem_regWData, mem_pc};

  //封包传递给CSR的数据
  assign mem_to_csr_bus = {
    csrRAdd,
    csrWen & mem_valid,
    csrWAdd,
    csrWData,
    mem_excp & mem_valid,
    mem_ertn & mem_valid,
    era,
    subcode,
    code,
    excpAboutAddr & mem_valid,
    badv_addr,
    asid_in,
    vppn_in,
    tlbelo0_in,
    tlbelo1_in,
    index_in,
    ps_in,
    e_in,
    tlb_ins_rec == 3'b001 & mem_valid,
    tlb_ins_rec == 3'b010 & mem_valid,  //只写一次,
    tlb_addr_excp,
    tlbr_wen
  };

  //封包传递给id阶段的数据
  assign mem_to_id_bus = {
    mem_ready_go, mem_to_wb_valid, mem_regW, mem_regWAddr, mem_regWData, mem_pc
  };

  //封包传递给TLB的数据
  assign mem_to_tlb_bus = {
    r_index,
    we,
    w_index,
    w_e,
    w_vppn,
    w_ps,
    w_asid,
    w_g,
    w_ppn0,
    w_plv0,
    w_mat0,
    w_d0,
    w_v0,
    w_ppn1,
    w_plv1,
    w_mat1,
    w_d1,
    w_v1
  };

endmodule
