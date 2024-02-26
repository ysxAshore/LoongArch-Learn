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

    //访dataRAM端口
    output wire        data_sram_en,
    output wire [ 3:0] data_sram_we,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata
);
  //exe_reg
  reg exe_valid;
  wire exe_ready_go;
  reg [`ID_TO_EXE_WD-1:0] exe_data;

  assign exe_ready_go = 1'b1;
  assign exe_allowin = ~exe_valid | exe_ready_go & mem_allowin;
  assign exe_to_mem_valid = exe_valid & exe_ready_go;
  always @(posedge clk) begin
    if (~resetn) begin
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
  wire exe_regW;
  wire exe_memW;
  wire [4:0] exe_regWAddr;
  wire [31:0] regDataB;
  wire [31:0] DataA;
  wire [31:0] DataB;
  wire [31:0] exe_pc;
  assign {alu_op, res_from_mem, exe_regW, exe_memW, exe_regWAddr, regDataB, DataA, DataB, exe_pc} = exe_data;

  //alu
  wire [31:0] exe_aluResult;
  alu u_alu (
      .alu_op    (alu_op),
      .alu_src1  (DataA),
      .alu_src2  (DataB),
      .alu_result(exe_aluResult)
  );

  //访存接口
  assign data_sram_en = exe_valid & (exe_memW | res_from_mem);
  assign data_sram_we = {4{exe_memW}};
  assign data_sram_addr = exe_aluResult;
  assign data_sram_wdata = regDataB;

  //封包exe组合逻辑传递给mem_reg的数据
  assign exe_to_mem_bus = {exe_regW, exe_regWAddr, res_from_mem, exe_aluResult, exe_pc};

  //封包exe传递给id的RAW相关判断
  assign exe_to_id_bus = {exe_valid, exe_regW, exe_regWAddr, exe_aluResult};

endmodule
