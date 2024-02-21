`timescale 1ns / 1ps
`include "mycpu.h"

module mycpu_top (
    input  wire        clk,
    input  wire        resetn,
    // inst  wiresram interface
    output wire        inst_sram_en,
    output wire [ 3:0] inst_sram_we,
    output wire [31:0] inst_sram_addr,
    output wire [31:0] inst_sram_wdata,
    input  wire [31:0] inst_sram_rdata,
    // data sram interface
    output wire        data_sram_en,
    output wire [ 3:0] data_sram_we,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata,
    input  wire [31:0] data_sram_rdata,
    // trace debug interface
    output wire [31:0] debug_wb_pc,
    output wire [ 3:0] debug_wb_rf_we,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata
);
  wire id_allowin;
  wire exe_allowin;
  wire mem_allowin;
  wire wb_allowin;
  wire if_to_id_valid;
  wire id_to_exe_valid;
  wire exe_to_mem_valid;
  wire mem_to_wb_valid;

  wire [`IF_TO_ID_WD-1:0] if_to_id_bus;
  wire [`ID_TO_IF_WD-1:0] id_to_if_bus;
  wire [`ID_TO_EXE_WD-1:0] id_to_exe_bus;
  wire [`EXE_TO_MEM_WD-1:0] exe_to_mem_bus;
  wire [`MEM_TO_WB_WD-1:0] mem_to_wb_bus;
  wire [`WB_TO_ID_WD-1:0] wb_to_id_bus;

  if_stage u_if_stage (
      .clk            (clk),
      .resetn         (resetn),
      .id_allowin     (id_allowin),
      .if_to_id_valid (if_to_id_valid),
      .if_to_id_bus   (if_to_id_bus),
      .id_to_if_bus   (id_to_if_bus),
      .inst_sram_en   (inst_sram_en),
      .inst_sram_wen  (inst_sram_wen),
      .inst_sram_addr (inst_sram_addr),
      .inst_sram_wdata(inst_sram_wdata),
      .inst_sram_rdata(inst_sram_rdata)
  );
  id_stage u_id_stage (
      .clk            (clk),
      .resetn         (resetn),
      .id_allowin     (id_allowin),
      .if_to_id_valid (if_to_id_valid),
      .if_to_id_bus   (if_to_id_bus),
      .exe_allowin    (exe_allowin),
      .id_to_exe_valid(id_to_exe_valid),
      .id_to_exe_bus  (id_to_exe_bus),
      .id_to_if_bus   (id_to_if_bus),
      .wb_to_id_bus   (wb_to_id_bus)
  );
  exe_stage u_exe_stage (
      .clk             (clk),
      .resetn          (resetn),
      .exe_allowin     (exe_allowin),
      .id_to_exe_valid (id_to_exe_valid),
      .id_to_exe_bus   (id_to_exe_bus),
      .mem_allowin     (mem_allowin),
      .exe_to_mem_valid(exe_to_mem_valid),
      .exe_to_mem_bus  (exe_to_mem_bus),
      .data_sram_en    (data_sram_en),
      .data_sram_we    (data_sram_we),
      .data_sram_addr  (data_sram_addr),
      .data_sram_wdata (data_sram_wdata)
  );
  mem_stage u_mem_stage (
      .clk             (clk),
      .resetn          (resetn),
      .mem_allowin     (mem_allowin),
      .exe_to_mem_valid(exe_to_mem_valid),
      .exe_to_mem_bus  (exe_to_mem_bus),
      .wb_allowin      (wb_allowin),
      .mem_to_wb_valid (mem_to_wb_valid),
      .mem_to_wb_bus   (mem_to_wb_bus),
      .data_sram_rdata (data_sram_rdata)
  );
  wb_stage u_wb_stage (
      .clk              (clk),
      .resetn           (resetn),
      .wb_allowin       (wb_allowin),
      .mem_to_wb_valid  (mem_to_wb_valid),
      .mem_to_wb_bus    (mem_to_wb_bus),
      .wb_to_id_bus     (wb_to_id_bus),
      .debug_wb_pc      (debug_wb_pc),
      .debug_wb_rf_wen  (debug_wb_rf_wen),
      .debug_wb_rf_wnum (debug_wb_rf_wnum),
      .debug_wb_rf_wdata(debug_wb_rf_wdata)
  );

endmodule
