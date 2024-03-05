`timescale 1ns / 1ps
`include "mycpu.h"

module mycpu_top (
    input wire clk,
    input wire resetn,

    input [7:0] interrupt,

    // inst  wiresram interface
    output wire        inst_sram_req,
    output wire [ 3:0] inst_sram_wr,
    output wire [ 1:0] inst_sram_size,
    output wire [ 3:0] inst_sram_wstrb,
    output wire [31:0] inst_sram_addr,
    output wire [31:0] inst_sram_wdata,
    input  wire [31:0] inst_sram_rdata,
    input  wire        inst_sram_addr_ok,
    input  wire        inst_sram_data_ok,
    // data sram interface
    output wire        data_sram_req,
    output wire [ 3:0] data_sram_wr,
    output wire [ 1:0] data_sram_size,
    output wire [ 3:0] data_sram_wstrb,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata,
    input  wire [31:0] data_sram_rdata,
    input  wire        data_sram_addr_ok,
    input  wire        data_sram_data_ok,
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
  wire [`EXE_TO_ID_WD-1:0] exe_to_id_bus;
  wire [`MEM_TO_ID_WD-1:0] mem_to_id_bus;
  wire [`MEM_TO_CSR_WD-1:0] mem_to_csr_bus;
  wire [`CSR_TO_MEM_WD-1:0] csr_to_mem_bus;
  wire [`CSR_TO_IF_WD-1:0] csr_to_if_bus;
  wire [`MEM_TO_IF_WD-1:0] mem_to_if_bus;
  if_stage u_if_stage (
      .clk              (clk),
      .resetn           (resetn),
      .id_allowin       (id_allowin),
      .if_to_id_valid   (if_to_id_valid),
      .if_to_id_bus     (if_to_id_bus),
      .id_to_if_bus     (id_to_if_bus),
      .csr_to_if_bus    (csr_to_if_bus),
      .mem_to_if_bus    (mem_to_if_bus),
      .inst_sram_req    (inst_sram_req),
      .inst_sram_wr     (inst_sram_wr),
      .inst_sram_wstrb  (inst_sram_wstrb),
      .inst_sram_size   (inst_sram_size),
      .inst_sram_addr   (inst_sram_addr),
      .inst_sram_wdata  (inst_sram_wdata),
      .inst_sram_rdata  (inst_sram_rdata),
      .inst_sram_addr_ok(inst_sram_addr_ok),
      .inst_sram_data_ok(inst_sram_data_ok)
  );

  wire mem_to_id_flush_excp_ertn;
  wire has_int;

  id_stage u_id_stage (
      .clk                      (clk),
      .resetn                   (resetn),
      .id_allowin               (id_allowin),
      .if_to_id_valid           (if_to_id_valid),
      .if_to_id_bus             (if_to_id_bus),
      .exe_allowin              (exe_allowin),
      .id_to_exe_valid          (id_to_exe_valid),
      .id_to_exe_bus            (id_to_exe_bus),
      .id_to_if_bus             (id_to_if_bus),
      .exe_to_id_bus            (exe_to_id_bus),
      .mem_to_id_bus            (mem_to_id_bus),
      .wb_to_id_bus             (wb_to_id_bus),
      .mem_to_id_flush_excp_ertn(mem_to_id_flush_excp_ertn),
      .has_int                  (has_int)
  );

  wire mem_to_exe_flush_excp_ertn;
  exe_stage u_exe_stage (
      .clk                       (clk),
      .resetn                    (resetn),
      .exe_allowin               (exe_allowin),
      .id_to_exe_valid           (id_to_exe_valid),
      .id_to_exe_bus             (id_to_exe_bus),
      .mem_allowin               (mem_allowin),
      .exe_to_mem_valid          (exe_to_mem_valid),
      .exe_to_mem_bus            (exe_to_mem_bus),
      .exe_to_id_bus             (exe_to_id_bus),
      .mem_to_exe_flush_excp_ertn(mem_to_exe_flush_excp_ertn),
      .data_sram_req             (data_sram_req),
      .data_sram_wr              (data_sram_wr),
      .data_sram_wstrb           (data_sram_wstrb),
      .data_sram_size            (data_sram_size),
      .data_sram_addr            (data_sram_addr),
      .data_sram_wdata           (data_sram_wdata),
      .data_sram_addr_ok         (data_sram_addr_ok)
  );

  mem_stage u_mem_stage (
      .clk                       (clk),
      .resetn                    (resetn),
      .mem_allowin               (mem_allowin),
      .exe_to_mem_valid          (exe_to_mem_valid),
      .exe_to_mem_bus            (exe_to_mem_bus),
      .wb_allowin                (wb_allowin),
      .mem_to_wb_valid           (mem_to_wb_valid),
      .mem_to_wb_bus             (mem_to_wb_bus),
      .mem_to_id_bus             (mem_to_id_bus),
      .mem_to_csr_bus            (mem_to_csr_bus),
      .data_sram_rdata           (data_sram_rdata),
      .data_sram_data_ok         (data_sram_data_ok),
      .csr_to_mem_bus            (csr_to_mem_bus),
      .mem_to_exe_flush_excp_ertn(mem_to_exe_flush_excp_ertn),
      .mem_to_id_flush_excp_ertn (mem_to_id_flush_excp_ertn),
      .mem_to_if_bus             (mem_to_if_bus)
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

  wire [13:0] csrRAdd;
  wire [31:0] csrRData;
  wire csrWen;
  wire [13:0] csrWAdd;
  wire [31:0] csrWData;
  wire excp;
  wire ertn;
  wire [8:0] subcode;
  wire [5:0] code;
  wire [31:0] era;
  wire [31:0] badv_addr;
  wire excpAboutAddr;

  assign {csrRAdd, csrWen, csrWAdd, csrWData, excp, ertn, era, subcode, code, excpAboutAddr, badv_addr} = mem_to_csr_bus;

  wire [31:0] tid_out;
  wire [63:0] timer_64_out;
  assign csr_to_mem_bus = {csrRData, tid_out, timer_64_out};

  wire [31:0] era_out;
  wire [31:0] eentry_out;
  assign csr_to_if_bus = {eentry_out, era_out};

  csr u_csr (
      .clk           (clk),
      .resetn        (resetn),
      .csrRAdd       (csrRAdd),
      .csrRData      (csrRData),
      .csrWen        (csrWen),
      .csrWAdd       (csrWAdd),
      .csrWData      (csrWData),
      .tid_out       (tid_out),
      .timer_64_out  (timer_64_out),
      .interrupt     (interrupt),
      .has_int       (has_int),
      .excp          (excp),
      .excp_tlbrefill(excp_tlbrefill),
      .ertn          (ertn),
      .era           (era),
      .subcode       (subcode),
      .code          (code),
      .badv_addr     (badv_addr),
      .excpAboutAddr (excpAboutAddr),
      .llbitWData    (llbitWData),
      .llbitWen      (llbitWen),
      .eentry_out    (eentry_out),
      .tlbrentry_out (tlbrentry_out),
      .era_out       (era_out),
      .plv           (plv)
  );

endmodule
