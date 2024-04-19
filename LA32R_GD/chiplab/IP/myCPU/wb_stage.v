`timescale 1ns / 1ps
`include "mycpu.h"

module wb_stage (
    input wire clk,
    input wire resetn,

    //与上一级流水线通讯的流水线控制信号
    output wire wb_allowin,
    input wire mem_to_wb_valid,
    input wire [`MEM_TO_WB_WD-1:0] mem_to_wb_bus,

    //传递给id组合逻辑的数据
    output wire [`WB_TO_ID_WD-1:0] wb_to_id_bus,

    //debug trace 端口
    input wire break_point,
    output wire debug_ws_valid, 
    output wire [31:0] debug_wb_pc,
    output wire [ 3:0] debug_wb_rf_wen,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata,
    output wire [31:0] debug_wb_inst

);
  //wb_reg
  reg wb_valid;
  wire wb_ready_go;
  reg [`MEM_TO_WB_WD-1:0] wb_data;

  assign wb_ready_go = ~break_point;
  assign wb_allowin  = ~wb_valid | wb_ready_go;
  always @(posedge clk) begin
    if (~resetn) begin
      wb_valid <= 1'b0;
    end else if (wb_allowin) begin
      wb_valid <= mem_to_wb_valid;
    end
    if (wb_allowin & mem_to_wb_valid) begin
      wb_data <= mem_to_wb_bus;
    end
  end
  
  //拆解wb_reg数据
  wire wb_regW;
  wire [4:0] wb_regWAddr;
  wire [31:0] wb_regWData;
  wire [31:0] wb_pc;
  wire [31:0] wb_inst;

  assign {wb_regW, wb_regWAddr, wb_regWData, wb_pc,wb_inst} = wb_data;

  //封包传递给id组合逻辑的数据
  assign wb_to_id_bus = {wb_valid, wb_regW & wb_valid, wb_valid ? wb_regWAddr : 5'b0, wb_regWData, wb_pc};

  //对接debug trace
  assign debug_ws_valid = wb_valid;
  assign debug_wb_pc = wb_pc;
  assign debug_wb_rf_wen = {4{wb_regW}} & {4{wb_valid}};
  assign debug_wb_rf_wnum = wb_regWAddr;
  assign debug_wb_rf_wdata = wb_regWData;
  assign debug_wb_inst = wb_inst;


endmodule
