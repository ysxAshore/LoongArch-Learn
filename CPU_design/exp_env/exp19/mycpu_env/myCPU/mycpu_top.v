`timescale 1ns / 1ps
`include "mycpu.h"
`include "csr.vh"

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
  wire [`CSR_TO_EXE_WD-1:0] csr_to_exe_bus;
  wire [`EXE_TO_TLB_WD-1:0] exe_to_tlb_bus;
  wire [`TLB_TO_MEM_WD-1:0] tlb_to_mem_bus;
  wire [`MEM_TO_TLB_WD-1:0] mem_to_tlb_bus;
  wire [ `TLB_TO_IF_WD-1:0] tlb_to_if_bus;
  wire [ `IF_TO_TLB_WD-1:0] if_to_tlb_bus;
  wire [ `TLB_TO_IF_WD-1:0] tlb_to_exe_bus;

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
      .if_to_tlb_bus    (if_to_tlb_bus),
      .tlb_to_if_bus    (tlb_to_if_bus),
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
      .csr_to_exe_bus            (csr_to_exe_bus),
      .exe_to_tlb_bus            (exe_to_tlb_bus),
      .tlb_to_exe_bus            (tlb_to_exe_bus),
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
      .mem_to_if_bus             (mem_to_if_bus),
      .tlb_to_mem_bus            (tlb_to_mem_bus),
      .mem_to_tlb_bus            (mem_to_tlb_bus)
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
  wire [9:0] asid_in;
  wire [18:0] vppn_in;
  wire [31:0] tlbelo0_in;
  wire [31:0] tlbelo1_in;
  wire [$clog2(`TLB_NUM)-1:0] index_in;
  wire [5:0] ps_in;
  wire e_in;
  wire tlb_rd_wen;
  wire tlb_srch_wen;
  wire tlb_addr_excp;
  wire tlbr_wen;

  assign {csrRAdd, csrWen, csrWAdd, csrWData, excp, ertn, era, subcode, code, excpAboutAddr, badv_addr, asid_in, vppn_in, tlbelo0_in, tlbelo1_in, index_in, ps_in, e_in, tlb_srch_wen, tlb_rd_wen,tlb_addr_excp,tlbr_wen} = mem_to_csr_bus;

  wire [18:0] vppn_out;
  wire [9:0] asid_out;
  wire crmd_da;
  wire crmd_pg;
  wire [2:0] dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg;
  wire dmw0_plv0, dmw0_plv3, dmw1_plv0, dmw1_plv3;
  wire [1:0] cur_plv;
  assign csr_to_exe_bus = {
    vppn_out,
    asid_out,
    crmd_da,
    crmd_pg,
    dmw0_vseg,
    dmw1_vseg,
    dmw0_pseg,
    dmw1_pseg,
    dmw0_plv0,
    dmw1_plv0,
    dmw0_plv3,
    dmw1_plv3,
    cur_plv
  };

  wire [31:0] tid_out;
  wire [63:0] timer_64_out;
  wire [$clog2(`TLB_NUM)-1:0] index_out;
  wire e_out;
  wire [5:0] ps_out;
  wire [31:0] tlbelo0_out;
  wire [31:0] tlbelo1_out;
  assign csr_to_mem_bus = {
    csrRData,
    tid_out,
    timer_64_out,
    vppn_out,
    asid_out,
    index_out,
    e_out,
    ps_out,
    tlbelo0_out[`TLB_G] & tlbelo1_out[`TLB_G],
    tlbelo0_out[`TLB_PPN],
    tlbelo0_out[`TLB_PLV],
    tlbelo0_out[`TLB_MAT],
    tlbelo0_out[`TLB_D],
    tlbelo0_out[`TLB_V],
    tlbelo1_out[`TLB_PPN],
    tlbelo1_out[`TLB_PLV],
    tlbelo1_out[`TLB_MAT],
    tlbelo1_out[`TLB_D],
    tlbelo1_out[`TLB_V]
  };

  wire [31:0] era_out;
  wire [31:0] eentry_out;
  wire [31:0] tlbenrty_out;
  assign csr_to_if_bus = {
    eentry_out,
    era_out,
    tlbenrty_out,
    asid_out,
    crmd_da,
    crmd_pg,
    dmw0_vseg,
    dmw1_vseg,
    dmw0_pseg,
    dmw1_pseg,
    dmw0_plv0,
    dmw1_plv0,
    dmw0_plv3,
    dmw1_plv3,
    cur_plv
  };

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
      .excp_tlbrefill(tlbr_wen),
      .ertn          (ertn),
      .era           (era),
      .subcode       (subcode),
      .code          (code),
      .badv_addr     (badv_addr),
      .excpAboutAddr (excpAboutAddr),
      .tlb_addr_excp (tlb_addr_excp),
      .eentry_out    (eentry_out),
      .tlbrentry_out (tlbenrty_out),
      .era_out       (era_out),
      .plv           (cur_plv),
      .asid_out      (asid_out),
      .asid_in       (asid_in),
      .vppn_out      (vppn_out),
      .vppn_in       (vppn_in),
      .tlbelo0_out   (tlbelo0_out),
      .tlbelo1_out   (tlbelo1_out),
      .tlbelo0_in    (tlbelo0_in),
      .tlbelo1_in    (tlbelo1_in),
      .index_out     (index_out),
      .ps_out        (ps_out),
      .e_out         (e_out),
      .index_in      (index_in),
      .ps_in         (ps_in),
      .e_in          (e_in),
      .tlb_srch_wen  (tlb_srch_wen),
      .tlb_rd_wen    (tlb_rd_wen),
      .crmd_da       (crmd_da),
      .crmd_pg       (crmd_pg),
      .dmw0_vseg     (dmw0_vseg),
      .dmw1_vseg     (dmw1_vseg),
      .dmw0_pseg     (dmw0_pseg),
      .dmw1_pseg     (dmw1_pseg),
      .dmw0_plv0     (dmw0_plv0),
      .dmw0_plv3     (dmw0_plv3),
      .dmw1_plv0     (dmw1_plv0),
      .dmw1_plv3     (dmw1_plv3)
  );


  //tlb
  wire [18:0] s1_vppn;
  wire [9:0] s1_asid;
  wire s1_va_bit12;
  wire invtlb_valid;
  wire [4:0] op;

  assign {s1_vppn, s1_asid, s1_va_bit12, invtlb_valid, op} = exe_to_tlb_bus;

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

  assign tlb_to_mem_bus = {
    r_e,
    r_vppn,
    r_ps,
    r_asid,
    r_g,
    r_ppn0,
    r_plv0,
    r_mat0,
    r_d0,
    r_v0,
    r_ppn1,
    r_plv1,
    r_mat1,
    r_d1,
    r_v1,
    s1_findex,
    s1_found
  };

  wire [$clog2(`TLB_NUM)-1:0] r_index;
  wire we;
  wire [$clog2(`TLB_NUM)-1:0] w_index;
  wire w_e;
  wire [18:0] w_vppn;
  wire [5:0] w_ps;
  wire [9:0] w_asid;
  wire w_g;
  wire [19:0] w_ppn0;
  wire [1:0] w_plv0;
  wire [1:0] w_mat0;
  wire w_d0;
  wire w_v0;
  wire [19:0] w_ppn1;
  wire [1:0] w_plv1;
  wire [1:0] w_mat1;
  wire w_d1;
  wire w_v1;

  assign {r_index,
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
    w_v1} = mem_to_tlb_bus;

  wire s0_found;
  wire [19:0] s0_ppn;
  wire [5:0] s0_ps;
  wire [1:0] s0_plv;
  wire [1:0] s0_mat;
  wire s0_d;
  wire s0_v;
  wire [$clog2(`TLB_NUM)-1:0] s0_findex;

  assign tlb_to_if_bus = {s0_found, s0_ppn, s0_ps, s0_plv, s0_mat, s0_d, s0_v, s0_findex};

  wire [18:0] s0_vppn;
  wire s0_va_12bit;
  wire [9:0] s0_asid;
  assign {s0_vppn, s0_asid, s0_va_12bit} = if_to_tlb_bus;

  wire [19:0] s1_ppn;
  wire [5:0] s1_ps;
  wire [1:0] s1_plv;
  wire [1:0] s1_mat;
  wire s1_d;
  wire s1_v;
  assign tlb_to_exe_bus = {s1_found, s1_ppn, s1_ps, s1_plv, s1_mat, s1_d, s1_v, s1_findex};

  tlb u_tlb (
      .clk         (aclk),
      .s0_vppn     (s0_vppn),
      .s0_va_bit12 (s0_va_12bit),
      .s0_asid     (s0_asid),
      .s0_found    (s0_found),
      .s0_ppn      (s0_ppn),
      .s0_ps       (s0_ps),
      .s0_plv      (s0_plv),
      .s0_mat      (s0_mat),
      .s0_d        (s0_d),
      .s0_v        (s0_v),
      .s0_findex   (s0_findex),
      .s1_vppn     (s1_vppn),
      .s1_va_bit12 (s1_va_bit12),
      .s1_asid     (s1_asid),
      .s1_found    (s1_found),
      .s1_ppn      (s1_ppn),
      .s1_ps       (s1_ps),
      .s1_plv      (s1_plv),
      .s1_mat      (s1_mat),
      .s1_d        (s1_d),
      .s1_v        (s1_v),
      .s1_findex   (s1_findex),
      .we          (we),
      .w_index     (w_index),
      .w_e         (w_e),
      .w_vppn      (w_vppn),
      .w_ps        (w_ps),
      .w_asid      (w_asid),
      .w_g         (w_g),
      .w_ppn0      (w_ppn0),
      .w_plv0      (w_plv0),
      .w_mat0      (w_mat0),
      .w_d0        (w_d0),
      .w_v0        (w_v0),
      .w_ppn1      (w_ppn1),
      .w_plv1      (w_plv1),
      .w_mat1      (w_mat1),
      .w_d1        (w_d1),
      .w_v1        (w_v1),
      .r_index     (r_index),
      .r_e         (r_e),
      .r_vppn      (r_vppn),
      .r_ps        (r_ps),
      .r_asid      (r_asid),
      .r_g         (r_g),
      .r_ppn0      (r_ppn0),
      .r_plv0      (r_plv0),
      .r_mat0      (r_mat0),
      .r_d0        (r_d0),
      .r_v0        (r_v0),
      .r_ppn1      (r_ppn1),
      .r_plv1      (r_plv1),
      .r_mat1      (r_mat1),
      .r_d1        (r_d1),
      .r_v1        (r_v1),
      .invtlb_valid(invtlb_valid),
      .op          (op)
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
