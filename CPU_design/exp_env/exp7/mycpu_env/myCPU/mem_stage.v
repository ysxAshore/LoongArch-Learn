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

    input [31:0] data_sram_rdata
);

  // mem_reg
  reg mem_valid;
  wire mem_ready_go;
  reg [`EXE_TO_MEM_WD-1:0] mem_data;

  assign mem_ready_go = 1'b1;
  assign mem_allowin = ~mem_valid | mem_ready_go & wb_allowin;
  assign mem_to_wb_valid = mem_ready_go & mem_valid;
  always @(posedge clk) begin
    if (~resetn) begin
      mem_valid <= 1'b1;
    end else if (mem_allowin) begin
      mem_valid <= exe_to_mem_valid;
    end
    if (mem_allowin & exe_to_mem_valid) begin
      mem_data <= exe_to_mem_bus;
    end
  end

  //拆解mem_reg数据
  wire mem_regW;
  wire [4:0] mem_regWAddr;
  wire res_from_mem;
  wire [31:0] mem_aluResult;
  wire [31:0] mem_pc;

  assign {mem_regW, mem_regWAddr, res_from_mem, mem_aluResult, mem_pc} = mem_data;

  //获得访存数据
  wire [31:0] mem_memReadData;
  assign mem_memReadData = data_sram_rdata;

  //写reg数据
  wire [31:0] mem_regWData = res_from_mem ? mem_memReadData : mem_aluResult;

  //封包传递给wb_reg数据
  assign mem_to_wb_bus = {mem_regW, mem_regWAddr, mem_regWData, mem_pc};
endmodule
