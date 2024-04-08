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

    //访dataRAM端口
    output wire        data_sram_req,
    output wire        data_sram_wr,
    output wire [ 3:0] data_sram_wstrb,
    output wire [ 1:0] data_sram_size,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata,
    input  wire        data_sram_addr_ok
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
  wire exe_memW;
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
  wire [5:0] excp_num_temp;
  wire [1:0] rdcnt_REC;
  wire [31:0] exe_pc;

  assign {alu_op, res_from_mem, exe_regW_temp, exe_memW, exe_regWAddr, forwardDataB, DataA, DataB, div_signed, mul_signed, div, aluMD_resSelect, 
          memINS_rec, load_sign, csr_num, csr_instRec, exe_ertn, exe_excp_temp, excp_num_temp, rdcnt_REC, exe_pc} = exe_data;

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
      .resetn    (resetn),
      .mul_signed(mul_signed),
      .x         (DataA),
      .y         (DataB),
      .result    (exe_mulResult)
  );

  //div
  wire [31:0] s;
  wire [31:0] r;
  wire complete_delay;
  div u_div (
      .div_clk       (clk),
      .resetn        (resetn),
      .div           (div),
      .div_signed    (div_signed),
      .x             (DataA),
      .y             (DataB),
      .s             (s),
      .r             (r),
      .complete_delay(complete_delay)
  );

  assign exe_ready_go = ~(div & ~complete_delay) & ~((exe_memW | res_from_mem) & ~(data_sram_req & data_sram_addr_ok)) | mem_to_exe_flush_excp_ertn | exe_excp;//如果当前exe阶段组合逻辑正在计算div且complete_delay未高有效，那么阻塞exe

  //ALE异常
  wire ALE_EXCP;
  wire exe_regW;
  wire exe_excp;
  wire [5:0] excp_num;

  assign ALE_EXCP = memINS_rec == 2'b11 ? exe_aluResult[1:0] != 2'b0 :
                    memINS_rec == 2'b10 ? exe_aluResult[0] != 1'b0 : 1'b0;
  assign exe_regW = exe_regW_temp & ~ALE_EXCP;
  assign exe_excp = exe_excp_temp | ALE_EXCP;
  assign excp_num = {excp_num_temp[5:2], ALE_EXCP, excp_num_temp[0]};

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
  assign data_sram_addr = exe_aluResult;
  assign data_sram_wdata = {32{memINS_rec == 2'b01}} & {4{forwardDataB[7:0]}} |
                           {32{memINS_rec == 2'b10}} & {2{forwardDataB[15:0]}}|
                           {32{memINS_rec == 2'b11}} & forwardDataB;

  //选择最后exe计算数据
  wire [31:0] exe_finalResult;
  assign exe_finalResult = {32{aluMD_resSelect == 3'b000}} & exe_aluResult       |
                           {32{aluMD_resSelect == 3'b001}} & exe_mulResult[31:0] |
                           {32{aluMD_resSelect == 3'b010}} & exe_mulResult[63:32]|
                           {32{aluMD_resSelect == 3'b011}} & s                   |
                           {32{aluMD_resSelect == 3'b100}} & r;

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
    exe_pc
  };

  //封包exe传递给id的RAW相关判断
  wire exist_csrR = csr_instRec != 2'b0 | rdcnt_REC != 2'b0;
  assign exe_to_id_bus = {
    exe_valid, res_from_mem, exe_regW, exe_valid ? exe_regWAddr : 5'b0, exe_finalResult, exist_csrR
  };

endmodule
