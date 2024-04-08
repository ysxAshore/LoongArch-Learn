`timescale 1ns / 1ps
`include "mycpu.h"

module mycpu_top (  //端口设置AXI从方主方
    input wire aclk,
    input wire aresetn,

    //ar
    output wire [3:0] arid,
    output wire [31:0] araddr,
    output wire [7:0] arlen,
    output wire [2:0] arsize,
    output wire [1:0] arburst,
    output wire [1:0] arlock,
    output wire [3:0] arcache,
    output wire [2:0] arprot,
    output wire arvalid,
    input wire arready,

    //r
    input wire [3:0] rid,
    input wire [31:0] rdata,
    input wire [1:0] rresp,
    input wire rlast,
    input wire rvalid,
    output wire rready,

    //aw
    output wire [3:0] awid,
    output wire [31:0] awaddr,
    output wire [7:0] awlen,
    output wire [2:0] awsize,
    output wire [1:0] awburst,
    output wire [1:0] awlock,
    output wire [3:0] awcache,
    output wire [2:0] awprot,
    output wire awvalid,
    input wire awready,

    //w
    output wire [3:0] wid,
    output wire [31:0] wdata,
    output wire [3:0] wstrb,
    output wire wlast,
    output wire wvalid,
    input wire wready,

    //b
    input wire [3:0] bid,
    input wire [1:0] bresp,
    input wire bvalid,
    output wire bready,

    //debug
    output wire [31:0] debug_wb_pc,
    output wire [ 3:0] debug_wb_rf_we,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata
);
  wire                      id_allowin;
  wire                      exe_allowin;
  wire                      mem_allowin;
  wire                      wb_allowin;
  wire                      if_to_id_valid;
  wire                      id_to_exe_valid;
  wire                      exe_to_mem_valid;
  wire                      mem_to_wb_valid;

  wire [  `IF_TO_ID_WD-1:0] if_to_id_bus;
  wire [  `ID_TO_IF_WD-1:0] id_to_if_bus;
  wire [ `ID_TO_EXE_WD-1:0] id_to_exe_bus;
  wire [`EXE_TO_MEM_WD-1:0] exe_to_mem_bus;
  wire [ `MEM_TO_WB_WD-1:0] mem_to_wb_bus;
  wire [  `WB_TO_ID_WD-1:0] wb_to_id_bus;
  wire [ `EXE_TO_ID_WD-1:0] exe_to_id_bus;
  wire [ `MEM_TO_ID_WD-1:0] mem_to_id_bus;
  wire [`MEM_TO_CSR_WD-1:0] mem_to_csr_bus;
  wire [`CSR_TO_MEM_WD-1:0] csr_to_mem_bus;
  wire [ `CSR_TO_IF_WD-1:0] csr_to_if_bus;
  wire [ `MEM_TO_IF_WD-1:0] mem_to_if_bus;

  //类SRAM
  wire                      inst_sram_req;
  wire                      inst_sram_wr;
  wire [               3:0] inst_sram_wstrb;
  wire [               1:0] inst_sram_size;
  wire [              31:0] inst_sram_addr;
  wire [              31:0] inst_sram_wdata;
  wire [              31:0] inst_sram_rdata;
  wire                      inst_sram_addr_ok;
  wire                      inst_sram_data_ok;
  wire                      data_sram_req;
  wire                      data_sram_wr;
  wire [               3:0] data_sram_wstrb;
  wire [               1:0] data_sram_size;
  wire [              31:0] data_sram_addr;
  wire [              31:0] data_sram_wdata;
  wire [              31:0] data_sram_rdata;
  wire                      data_sram_addr_ok;
  wire                      data_sram_data_ok;

  if_stage u_if_stage (
      .clk              (aclk),
      .resetn           (aresetn),
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
      .clk                      (aclk),
      .resetn                   (aresetn),
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
      .clk                       (aclk),
      .resetn                    (aresetn),
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
      .clk                       (aclk),
      .resetn                    (aresetn),
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
      .clk              (aclk),
      .resetn           (aresetn),
      .wb_allowin       (wb_allowin),
      .mem_to_wb_valid  (mem_to_wb_valid),
      .mem_to_wb_bus    (mem_to_wb_bus),
      .wb_to_id_bus     (wb_to_id_bus),
      .debug_wb_pc      (debug_wb_pc),
      .debug_wb_rf_wen  (debug_wb_rf_we),
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

  wire [7:0] interrupt = 8'b0;
  csr u_csr (
      .clk           (aclk),
      .resetn        (aresetn),
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

  //axi
  axi_bridge u_axi_bridge (
      .clk              (aclk),
      .aresetn          (aresetn),
      .arid             (arid),
      .araddr           (araddr),
      .arlen            (arlen),
      .arsize           (arsize),
      .arburst          (arburst),
      .arlock           (arlock),
      .arcache          (arcache),
      .arprot           (arprot),
      .arvalid          (arvalid),
      .arready          (arready),
      .rid              (rid),
      .rdata            (rdata),
      .rresp            (rresp),
      .rlast            (rlast),
      .rvalid           (rvalid),
      .rready           (rready),
      .awid             (awid),
      .awaddr           (awaddr),
      .awlen            (awlen),
      .awsize           (awsize),
      .awburst          (awburst),
      .awlock           (awlock),
      .awcache          (awcache),
      .awprot           (awprot),
      .awvalid          (awvalid),
      .awready          (awready),
      .wid              (wid),
      .wdata            (wdata),
      .wstrb            (wstrb),
      .wlast            (wlast),
      .wvalid           (wvalid),
      .wready           (wready),
      .bid              (bid),
      .bresp            (bresp),
      .bvalid           (bvalid),
      .bready           (bready),
      .inst_sram_req    (inst_sram_req),
      .inst_sram_wr     (inst_sram_wr),
      .inst_sram_size   (inst_sram_size),
      .inst_sram_wstrb  (inst_sram_wstrb),
      .inst_sram_addr   (inst_sram_addr),
      .inst_sram_wdata  (inst_sram_wdata),
      .inst_sram_addr_ok(inst_sram_addr_ok),
      .inst_sram_data_ok(inst_sram_data_ok),
      .inst_sram_rdata  (inst_sram_rdata),
      .data_sram_req    (data_sram_req),
      .data_sram_wr     (data_sram_wr),
      .data_sram_size   (data_sram_size),
      .data_sram_wstrb  (data_sram_wstrb),
      .data_sram_addr   (data_sram_addr),
      .data_sram_wdata  (data_sram_wdata),
      .data_sram_addr_ok(data_sram_addr_ok),
      .data_sram_data_ok(data_sram_data_ok),
      .data_sram_rdata  (data_sram_rdata)
  );


endmodule
