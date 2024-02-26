`timescale 1ns / 1ps
`include "mycpu.h"

//X->(X+1)的X_to_Y_valid、data、readygo
//(X+1)->X的allowin
module if_stage (
    input wire clk,
    input wire resetn,

    //与下一级传递通讯的流水线控制信号 
    input wire id_allowin,
    output wire if_to_id_valid,
    output wire [`IF_TO_ID_WD-1:0] if_to_id_bus,

    //id组合逻辑传递给if组合逻辑的一些用于生成nextpc的信号
    input wire [`ID_TO_IF_WD-1:0] id_to_if_bus,

    //CSR传递给preIF的信号
    input wire [`CSR_TO_IF_WD-1:0] csr_to_if_bus,

    //MEM传递给IF的信号
    input wire [`MEM_TO_IF_WD-1:0] mem_to_if_bus,


    //对接insRAM接口
    output wire        inst_sram_en,
    output wire [ 3:0] inst_sram_wen,
    output wire [31:0] inst_sram_addr,
    output wire [31:0] inst_sram_wdata,
    input  wire [31:0] inst_sram_rdata
);
  reg if_valid;  //表示if_reg内容是否有效
  wire if_ready_go;  //表示if组合逻辑内容是否处理完成，可以向id_reg传递

  wire if_allowin;  //控制preIF组合逻辑数据是否可以传递进if_reg
  wire preIf_to_if_valid;

  wire [31:0] seq_pc;  //序列下一个PC
  wire [31:0] nextpc;  //最终更新到PC寄存器的指令地址

  //拆解id组合逻辑传递给if组合逻辑的数据
  wire br_taken;
  wire br_taken_cancel;
  wire [31:0] br_target;
  assign {br_taken, br_target, br_taken_cancel} = id_to_if_bus;

  //拆解MEM传递过来的数据
  wire excp;
  wire ertn;
  assign {excp, ertn} = mem_to_if_bus;

  //拆解CSR传递过来的数据
  wire [31:0] era;
  wire [31:0] eentry_out;
  assign {eentry_out, era} = csr_to_if_bus;

  //组合传递给id_reg的数据
  wire [31:0] if_inst;
  reg  [31:0] if_pc;
  assign if_to_id_bus      = {if_pc, if_inst};

  // preIF
  assign preIf_to_if_valid = resetn;
  assign seq_pc            = if_pc + 32'h4;
  assign nextpc            = excp ? eentry_out : ertn ? era : br_taken ? br_target : seq_pc;

  // if_reg
  assign if_ready_go       = 1'b1;
  assign if_allowin        = ~if_valid | if_ready_go & id_allowin;
  assign if_to_id_valid    = if_valid & if_ready_go;
  always @(posedge clk) begin
    if (~resetn) begin
      if_valid <= 1'b0;
      if_pc <= 32'h1bff_fffc;
    end else if (if_allowin) begin
      if_valid <= preIf_to_if_valid;
    end else if (br_taken_cancel) begin  //if_valid & (~id_allowin | ~if_ready_go)
      if_valid <= 1'b0;
    end
    if (if_allowin & preIf_to_if_valid) begin
      if_pc <= nextpc;
    end
  end

  //赋值instRAM接口
  assign inst_sram_en    = preIf_to_if_valid & if_allowin;
  assign inst_sram_wen   = 4'h0;
  assign inst_sram_addr  = nextpc;
  assign inst_sram_wdata = 32'b0;

  assign if_inst         = inst_sram_rdata;
endmodule
