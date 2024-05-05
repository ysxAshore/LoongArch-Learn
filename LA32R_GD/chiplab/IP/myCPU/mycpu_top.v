`timescale 1ns / 1ps
`include "mycpu.h"
`include "csr.vh"

module core_top #(
	parameter TLBNUM = 32
)(  //端口设置AXI从方主方
    input wire aclk,
    input wire aresetn,
    input wire [7:0] intrpt,

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
    input           break_point,
    input           infor_flag,
    input  [ 4:0]   reg_num,
    output          ws_valid,
    output [31:0]   rf_rdata,

    //debug
    output wire [31:0] debug0_wb_pc,
    output wire [ 3:0] debug0_wb_rf_wen,
    output wire [ 4:0] debug0_wb_rf_wnum,
    output wire [31:0] debug0_wb_rf_wdata,
    output wire [31:0] debug0_wb_inst
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

  wire inst_mat;
  wire has_int;
  wire icache_tlb_excp_cancel_req;

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
      .inst_sram_data_ok(inst_sram_data_ok),
      .inst_mat         (inst_mat),
      .has_int          (has_int),
      .icache_tlb_excp_cancel_req(icache_tlb_excp_cancel_req)
  );

  wire mem_to_id_flush_excp_ertn;
  wire    [31:0]  regs[31:0];
  wire [1:0] cur_plv;

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
      .has_int                  (has_int),
      .infor_flag               (infor_flag),
      .reg_num                  (reg_num),
      .csr_plv                  (cur_plv),
      .debug_rf_rdata1          (rf_rdata)
      `ifdef DIFFTEST_EN
      ,.rf_to_diff           (regs                )
      `endif
  );

  wire mem_to_exe_flush_excp_ertn;
  wire data_mat;
  wire icacop_en;
  wire dcacop_en;
  wire [1:0]cacop_mode;
  wire icacop_ok;
  wire dcacop_ok;
  wire dcache_tlb_excp_cancel_req;

  exe_stage u_exe_stage(
    .clk                        (aclk                        ),
    .resetn                     (aresetn                     ),
    .exe_allowin                (exe_allowin                ),
    .id_to_exe_valid            (id_to_exe_valid            ),
    .id_to_exe_bus              (id_to_exe_bus              ),
    .mem_allowin                (mem_allowin                ),
    .exe_to_mem_valid           (exe_to_mem_valid           ),
    .exe_to_mem_bus             (exe_to_mem_bus             ),
    .exe_to_id_bus              (exe_to_id_bus              ),
    .mem_to_exe_flush_excp_ertn (mem_to_exe_flush_excp_ertn ),
    .csr_to_exe_bus             (csr_to_exe_bus             ),
    .exe_to_tlb_bus             (exe_to_tlb_bus             ),
    .tlb_to_exe_bus             (tlb_to_exe_bus             ),
    .data_sram_req              (data_sram_req              ),
    .data_sram_wr               (data_sram_wr               ),
    .data_sram_wstrb            (data_sram_wstrb            ),
    .data_sram_size             (data_sram_size             ),
    .data_sram_addr             (data_sram_addr             ),
    .data_sram_wdata            (data_sram_wdata            ),
    .data_sram_addr_ok          (data_sram_addr_ok          ),
    .data_mat                   (data_mat                   ),
    .icacop_en                  (icacop_en                  ),
    .dcacop_en                  (dcacop_en                  ),
    .cacop_mode                 (cacop_mode                 ),
    .icacop_ok                  (icacop_ok      ),
    .dcacop_ok                  (dcacop_ok)
  );
  
  wire excp_flush;
  wire ertn_flush;
  wire [5:0]ecode;
  wire tlbfill_en;
  wire [4:0]rand_index;
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
      .mem_to_tlb_bus            (mem_to_tlb_bus),
      .ws_valid_diff      (ws_valid_diff     ),
      .ws_cnt_inst_diff   (cnt_inst_diff     ),
      .ws_timer_64_diff   (timer_64_diff     ),
      .ws_inst_ld_en_diff (inst_ld_en_diff   ),
      .ws_ld_paddr_diff   (ld_paddr_diff     ),
      .ws_ld_vaddr_diff   (ld_vaddr_diff     ),
      .ws_inst_st_en_diff (inst_st_en_diff   ),
      .ws_st_paddr_diff   (st_paddr_diff     ),
      .ws_st_vaddr_diff   (st_vaddr_diff     ),
      .ws_st_data_diff    (st_data_diff      ),
      .ws_csr_rstat_en_diff (csr_rstat_en_diff    ),
      .ws_csr_data_diff   (csr_data_diff     ),
      .tlbfill_en         (tlbfill_en),
      .ecode              (ecode),
      .excp_flush                (excp_flush),
      .ertn_flush                (ertn_flush),
      .rand_index         (rand_index),
      .dcache_tlb_excp_cancel_req(dcache_tlb_excp_cancel_req)
  );

  wb_stage u_wb_stage (
      .clk              (aclk),
      .resetn           (aresetn),
      .wb_allowin       (wb_allowin),
      .mem_to_wb_valid  (mem_to_wb_valid),
      .mem_to_wb_bus    (mem_to_wb_bus),
      .wb_to_id_bus     (wb_to_id_bus),
      .break_point      (break_point),
      .debug_ws_valid   (ws_valid),
      .debug_wb_pc      (debug0_wb_pc),
      .debug_wb_rf_wen  (debug0_wb_rf_wen),
      .debug_wb_rf_wnum (debug0_wb_rf_wnum),
      .debug_wb_rf_wdata(debug0_wb_rf_wdata),
      .debug_wb_inst    (debug0_wb_inst)
  );

  wire [13:0] csrRAdd;
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
  wire llbitWen;
  wire llbitWData;

  assign {csrRAdd, csrWen, csrWAdd, csrWData, excp, ertn, era, subcode, code, excpAboutAddr, badv_addr, asid_in, vppn_in, tlbelo0_in, tlbelo1_in, index_in, ps_in, e_in, tlb_srch_wen, tlb_rd_wen,tlb_addr_excp,tlbr_wen,llbitWen,llbitWData} = mem_to_csr_bus;

  wire [18:0] vppn_out;
  wire [9:0] asid_out;
  wire crmd_da;
  wire crmd_pg;
  wire [2:0] dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg;
  wire dmw0_plv0, dmw0_plv3, dmw1_plv0, dmw1_plv3;
  wire crmd_datm;
  wire dmw0_mat,dmw1_mat;
  wire llbit_out;
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
    cur_plv,
    crmd_datm,
    dmw0_mat,
    dmw1_mat,
    llbit_out
  };

  wire [31:0] csrRData;
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
  wire crmd_datf;
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
    cur_plv,
    dmw0_mat,
    dmw1_mat,
    crmd_datf
  };

  wire    [31:0]  csr_crmd_diff_0     ;
  wire    [31:0]  csr_prmd_diff_0     ;
  wire    [31:0]  csr_ectl_diff_0     ;
  wire    [31:0]  csr_estat_diff_0    ;
  wire    [31:0]  csr_era_diff_0      ;
  wire    [31:0]  csr_badv_diff_0     ;
  wire	[31:0]  csr_eentry_diff_0   ;
  wire 	[31:0]  csr_tlbidx_diff_0   ;
  wire 	[31:0]  csr_tlbehi_diff_0   ;
  wire 	[31:0]  csr_tlbelo0_diff_0  ;
  wire 	[31:0]  csr_tlbelo1_diff_0  ;
  wire 	[31:0]  csr_asid_diff_0     ;
  wire 	[31:0]  csr_save0_diff_0    ;
  wire 	[31:0]  csr_save1_diff_0    ;
  wire 	[31:0]  csr_save2_diff_0    ;
  wire 	[31:0]  csr_save3_diff_0    ;
  wire 	[31:0]  csr_tid_diff_0      ;
  wire 	[31:0]  csr_tcfg_diff_0     ;
  wire 	[31:0]  csr_tval_diff_0     ;
  wire 	[31:0]  csr_ticlr_diff_0    ;
  wire 	[31:0]  csr_llbctl_diff_0   ;
  wire 	[31:0]  csr_tlbrentry_diff_0;
  wire 	[31:0]  csr_dmw0_diff_0     ;
  wire 	[31:0]  csr_dmw1_diff_0     ;
  wire 	[31:0]  csr_pgdl_diff_0     ;
  wire 	[31:0]  csr_pgdh_diff_0     ;

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
      .interrupt     (intrpt),
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
      .llbitWen      (llbitWen),
      .llbitWData    (llbitWData),
      .llbit_out     (llbit_out),
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
      .dmw1_plv3     (dmw1_plv3),
      .dmw0_mat      (dmw0_mat),
      .dmw1_mat      (dmw1_mat),
      .crmd_datf     (crmd_datf),
      .crmd_datm     (crmd_datm),
      //difftest
      .csr_crmd_diff      (csr_crmd_diff_0    ),
      .csr_prmd_diff      (csr_prmd_diff_0    ),
      .csr_ectl_diff      (csr_ectl_diff_0    ),
      .csr_estat_diff     (csr_estat_diff_0   ),
      .csr_era_diff       (csr_era_diff_0     ),
      .csr_badv_diff      (csr_badv_diff_0    ),
      .csr_eentry_diff    (csr_eentry_diff_0  ),
      .csr_tlbidx_diff    (csr_tlbidx_diff_0  ),
      .csr_tlbehi_diff    (csr_tlbehi_diff_0  ),
      .csr_tlbelo0_diff   (csr_tlbelo0_diff_0 ),
      .csr_tlbelo1_diff   (csr_tlbelo1_diff_0 ),
      .csr_asid_diff      (csr_asid_diff_0    ),
      .csr_save0_diff     (csr_save0_diff_0   ),
      .csr_save1_diff     (csr_save1_diff_0   ),
      .csr_save2_diff     (csr_save2_diff_0   ),
      .csr_save3_diff     (csr_save3_diff_0   ),
      .csr_tid_diff       (csr_tid_diff_0     ),
      .csr_tcfg_diff      (csr_tcfg_diff_0    ),
      .csr_tval_diff      (csr_tval_diff_0    ),
      .csr_ticlr_diff     (csr_ticlr_diff_0   ),
      .csr_llbctl_diff    (csr_llbctl_diff_0  ),
      .csr_tlbrentry_diff (csr_tlbrentry_diff_0),
      .csr_dmw0_diff      (csr_dmw0_diff_0    ),
      .csr_dmw1_diff      (csr_dmw1_diff_0    ),
      .csr_pgdl_diff      (csr_pgdl_diff_0    ),
      .csr_pgdh_diff      (csr_pgdh_diff_0    )
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
    r_v1
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

  wire inst_rd_req;
  wire [2:0] inst_rd_type;
  wire [31:0] inst_rd_addr;
  wire inst_rd_rdy;
  wire inst_ret_last;
  wire [31:0] inst_ret_data;
  wire inst_ret_valid;

  icache i_cache(
    .clk       (aclk      ),
    .resetn    (aresetn    ),
    .valid     (inst_sram_req     ),
    .op        (inst_sram_wr        ),
    .index     (inst_sram_addr[11:4]     ),
    .tag       (inst_sram_addr[31:12]       ),
    .offset    (inst_sram_addr[3:0]    ),
    .wstrb     (inst_sram_wstrb     ),
    .wdata     (inst_sram_wdata     ),
    .uncache   (~inst_mat   ),
    .size      ({1'b0,inst_sram_size}      ),
    .addr_ok   (inst_sram_addr_ok  ),
    .data_ok   (inst_sram_data_ok  ),
    .rdata     (inst_sram_rdata     ),
    .icacop_en (icacop_en),
    .icacop_mode(cacop_mode),
    .icacop_tag(data_sram_addr[31:12]),
    .icacop_index(data_sram_addr[11:4]),
    .icacop_offset(data_sram_addr[3:0]),
    .icacop_ok(icacop_ok),
    .rd_req    (inst_rd_req    ),
    .rd_type   (inst_rd_type   ),
    .rd_addr   (inst_rd_addr   ),
    .rd_rdy    (inst_rd_rdy    ),
    .ret_valid (inst_ret_valid ),
    .ret_last  (inst_ret_last  ),
    .ret_data  (inst_ret_data  ),
    .wr_req    (   ),
    .wr_type   (   ),
    .wr_addr   (   ),
    .wr_wstrb  (   ),
    .wr_data   (   ),
    .wr_rdy    (1'b1),
    .icache_tlb_excp_cancel_req(icache_tlb_excp_cancel_req)
  );

  wire data_rd_req;
  wire [2:0] data_rd_type;
  wire [31:0] data_rd_addr;
  wire data_rd_rdy;
  wire data_ret_last;
  wire [31:0] data_ret_data;
  wire data_ret_valid;
  wire data_wr_req;
  wire [2:0] data_wr_type;
  wire [31:0] data_wr_addr;
  wire [3:0] data_wr_wstrb;
  wire [127:0] data_wr_data;
  wire data_wr_rdy;

  dcache d_cache(
    .clk       (aclk       ),
    .resetn    (aresetn    ),
    .valid     (data_sram_req     ),
    .op        (data_sram_wr        ),
    .index     (data_sram_addr[11:4]     ),
    .tag       (data_sram_addr[31:12]       ),
    .offset    (data_sram_addr[3:0]    ),
    .wstrb     (data_sram_wstrb     ),
    .wdata     (data_sram_wdata     ),
    .uncache   (~data_mat   ),
    .size      ({1'b0,data_sram_size}      ),
    .addr_ok   (data_sram_addr_ok   ),
    .data_ok   (data_sram_data_ok   ),
    .rdata     (data_sram_rdata     ),
    .dcacop_en (dcacop_en),
    .dcacop_mode(cacop_mode),
    .dcacop_ok (dcacop_ok),
    .rd_req    (data_rd_req   ),
    .rd_type   (data_rd_type   ),
    .rd_addr   (data_rd_addr   ),
    .rd_rdy    (data_rd_rdy    ),
    .ret_valid (data_ret_valid ),
    .ret_last  (data_ret_last  ),
    .ret_data  (data_ret_data  ),
    .wr_req    (data_wr_req    ),
    .wr_type   (data_wr_type   ),
    .wr_addr   (data_wr_addr   ),
    .wr_wstrb  (data_wr_wstrb  ),
    .wr_data   (data_wr_data   ),
    .wr_rdy    (data_wr_rdy    ),
    .dcache_tlb_excp_cancel_req(dcache_tlb_excp_cancel_req)
  );
  

  //axi
  axi_bridge u_axi_bridge(
    .clk            (aclk            ),
    .aresetn        (aresetn        ),
    .arid           (arid           ),
    .araddr         (araddr         ),
    .arlen          (arlen          ),
    .arsize         (arsize         ),
    .arburst        (arburst        ),
    .arlock         (arlock         ),
    .arcache        (arcache        ),
    .arprot         (arprot         ),
    .arvalid        (arvalid        ),
    .arready        (arready        ),
    .rid            (rid            ),
    .rdata          (rdata          ),
    .rresp          (rresp          ),
    .rlast          (rlast          ),
    .rvalid         (rvalid         ),
    .rready         (rready         ),
    .awid           (awid           ),
    .awaddr         (awaddr         ),
    .awlen          (awlen          ),
    .awsize         (awsize         ),
    .awburst        (awburst        ),
    .awlock         (awlock         ),
    .awcache        (awcache        ),
    .awprot         (awprot         ),
    .awvalid        (awvalid        ),
    .awready        (awready        ),
    .wid            (wid            ),
    .wdata          (wdata          ),
    .wstrb          (wstrb          ),
    .wlast          (wlast          ),
    .wvalid         (wvalid         ),
    .wready         (wready         ),
    .bid            (bid            ),
    .bresp          (bresp          ),
    .bvalid         (bvalid         ),
    .bready         (bready         ),
    .inst_rd_req    (inst_rd_req    ),
    .inst_rd_type   (inst_rd_type   ),
    .inst_rd_addr   (inst_rd_addr   ),
    .inst_rd_rdy    (inst_rd_rdy    ),
    .inst_ret_last  (inst_ret_last  ),
    .inst_ret_data  (inst_ret_data  ),
    .inst_ret_valid (inst_ret_valid ),
    .data_rd_req    (data_rd_req    ),
    .data_rd_type   (data_rd_type   ),
    .data_rd_addr   (data_rd_addr   ),
    .data_rd_rdy    (data_rd_rdy    ),
    .data_ret_last  (data_ret_last  ),
    .data_ret_data  (data_ret_data  ),
    .data_ret_valid (data_ret_valid ),
    .data_wr_req    (data_wr_req    ),
    .data_wr_type   (data_wr_type   ),
    .data_wr_addr   (data_wr_addr   ),
    .data_wr_wstrb  (data_wr_wstrb  ),
    .data_wr_data   (data_wr_data   ),
    .data_wr_rdy    (data_wr_rdy    )
  );

`ifdef DIFFTEST_EN
wire            ws_valid_diff       ;
wire            cnt_inst_diff       ;
wire    [63:0]  timer_64_diff       ;
wire    [ 7:0]  inst_ld_en_diff     ;
wire    [31:0]  ld_paddr_diff       ;
wire    [31:0]  ld_vaddr_diff       ;
wire    [ 7:0]  inst_st_en_diff     ;
wire    [31:0]  st_paddr_diff       ;
wire    [31:0]  st_vaddr_diff       ;
wire    [31:0]  st_data_diff        ;
wire            csr_rstat_en_diff   ;
wire    [31:0]  csr_data_diff       ;

wire inst_valid_diff = ws_valid_diff;
reg             cmt_valid           ;
reg             cmt_cnt_inst        ;
reg     [63:0]  cmt_timer_64        ;
reg     [ 7:0]  cmt_inst_ld_en      ;
reg     [31:0]  cmt_ld_paddr        ;
reg     [31:0]  cmt_ld_vaddr        ;
reg     [ 7:0]  cmt_inst_st_en      ;
reg     [31:0]  cmt_st_paddr        ;
reg     [31:0]  cmt_st_vaddr        ;
reg     [31:0]  cmt_st_data         ;
reg             cmt_csr_rstat_en    ;
reg     [31:0]  cmt_csr_data        ;

reg             cmt_wen             ;
reg     [ 7:0]  cmt_wdest           ;
reg     [31:0]  cmt_wdata           ;
reg     [31:0]  cmt_pc              ;
reg     [31:0]  cmt_inst            ;

reg             cmt_excp_flush      ;
reg             cmt_ertn            ;
reg     [5:0]   cmt_csr_ecode       ;
reg             cmt_tlbfill_en      ;
reg     [4:0]   cmt_rand_index      ;

// to difftest debug
reg             trap                ;
reg     [ 7:0]  trap_code           ;
reg     [63:0]  cycleCnt            ;
reg     [63:0]  instrCnt            ;

always @(posedge aclk) begin
    if (~aresetn) begin
        {cmt_valid, cmt_cnt_inst, cmt_timer_64, cmt_inst_ld_en, cmt_ld_paddr, cmt_ld_vaddr, cmt_inst_st_en, cmt_st_paddr, cmt_st_vaddr, cmt_st_data, cmt_csr_rstat_en, cmt_csr_data} <= 0;
        {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst} <= 0;
        {trap, trap_code, cycleCnt, instrCnt} <= 0;
    end else if (~trap) begin
        cmt_valid       <= inst_valid_diff          ;
        cmt_cnt_inst    <= cnt_inst_diff            ;
        cmt_timer_64    <= timer_64_diff            ;
        cmt_inst_ld_en  <= inst_ld_en_diff          ;
        cmt_ld_paddr    <= ld_paddr_diff            ;
        cmt_ld_vaddr    <= ld_vaddr_diff            ;
        cmt_inst_st_en  <= inst_st_en_diff          ;
        cmt_st_paddr    <= st_paddr_diff            ;
        cmt_st_vaddr    <= st_vaddr_diff            ;
        cmt_st_data     <= st_data_diff             ;
        cmt_csr_rstat_en<= csr_rstat_en_diff        ;
        cmt_csr_data    <= csr_data_diff            ;

        cmt_wen     <=  mem_to_wb_bus[101]            ;
        cmt_wdest   <=  {3'd0, mem_to_wb_bus[100:96]}   ;
        cmt_wdata   <=  mem_to_wb_bus[95:64]          ;
        cmt_pc      <=  mem_to_wb_bus[63:32]                ;
        cmt_inst    <=  mem_to_wb_bus[31:0]              ;

        cmt_excp_flush  <= excp_flush               ;
        cmt_ertn        <= ertn_flush               ;
        cmt_csr_ecode   <= ecode             ;
        cmt_tlbfill_en  <= tlbfill_en               ;
        cmt_rand_index  <= rand_index               ;

        trap            <= 0                        ;
        trap_code       <= regs[10][7:0]            ;
        cycleCnt        <= cycleCnt + 1             ;
        instrCnt        <= instrCnt + inst_valid_diff;
    end
end

DifftestInstrCommit DifftestInstrCommit(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_valid      ),
    .pc                 (cmt_pc         ),
    .instr              (cmt_inst       ),
    .skip               (0              ),
    .is_TLBFILL         (cmt_tlbfill_en ),
    .TLBFILL_index      (cmt_rand_index ),
    .is_CNTinst         (cmt_cnt_inst   ),
    .timer_64_value     (cmt_timer_64   ),
    .wen                (cmt_wen        ),
    .wdest              (cmt_wdest      ),
    .wdata              (cmt_wdata      ),
    .csr_rstat          (cmt_csr_rstat_en),
    .csr_data           (cmt_csr_data   )
);

DifftestExcpEvent DifftestExcpEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .excp_valid         (cmt_excp_flush ),
    .eret               (cmt_ertn       ),
    .intrNo             (csr_estat_diff_0[12:2]),
    .cause              (cmt_csr_ecode  ),
    .exceptionPC        (cmt_pc         ),
    .exceptionInst      (cmt_inst       )
);

DifftestTrapEvent DifftestTrapEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .valid              (trap           ),
    .code               (trap_code      ),
    .pc                 (cmt_pc         ),
    .cycleCnt           (cycleCnt       ),
    .instrCnt           (instrCnt       )
);

DifftestStoreEvent DifftestStoreEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_inst_st_en ),
    .storePAddr         (cmt_st_paddr   ),
    .storeVAddr         (cmt_st_vaddr   ),
    .storeData          (cmt_st_data    )
);

DifftestLoadEvent DifftestLoadEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_inst_ld_en ),
    .paddr              (cmt_ld_paddr   ),
    .vaddr              (cmt_ld_vaddr   )
);

DifftestCSRRegState DifftestCSRRegState(
    .clock              (aclk               ),
    .coreid             (0                  ),
    .crmd               (csr_crmd_diff_0    ),
    .prmd               (csr_prmd_diff_0    ),
    .euen               (0                  ),
    .ecfg               (csr_ectl_diff_0),
    .estat              (csr_estat_diff_0   ),
    .era                (csr_era_diff_0     ),
    .badv               (csr_badv_diff_0    ),
    .eentry             (csr_eentry_diff_0  ),
    .tlbidx             (csr_tlbidx_diff_0  ),
    .tlbehi             (csr_tlbehi_diff_0  ),
    .tlbelo0            (csr_tlbelo0_diff_0 ),
    .tlbelo1            (csr_tlbelo1_diff_0 ),
    .asid               (csr_asid_diff_0    ),
    .pgdl               (csr_pgdl_diff_0    ),
    .pgdh               (csr_pgdh_diff_0    ),
    .save0              (csr_save0_diff_0   ),
    .save1              (csr_save1_diff_0   ),
    .save2              (csr_save2_diff_0   ),
    .save3              (csr_save3_diff_0   ),
    .tid                (csr_tid_diff_0     ),
    .tcfg               (csr_tcfg_diff_0    ),
    .tval               (csr_tval_diff_0    ),
    .ticlr              (csr_ticlr_diff_0   ),
    .llbctl             (csr_llbctl_diff_0  ),
    .tlbrentry          (csr_tlbrentry_diff_0),
    .dmw0               (csr_dmw0_diff_0    ),
    .dmw1               (csr_dmw1_diff_0    )
);
DifftestGRegState DifftestGRegState(
    .clock              (aclk       ),
    .coreid             (0          ),
    .gpr_0              (0          ),
    .gpr_1              (regs[1]    ),
    .gpr_2              (regs[2]    ),
    .gpr_3              (regs[3]    ),
    .gpr_4              (regs[4]    ),
    .gpr_5              (regs[5]    ),
    .gpr_6              (regs[6]    ),
    .gpr_7              (regs[7]    ),
    .gpr_8              (regs[8]    ),
    .gpr_9              (regs[9]    ),
    .gpr_10             (regs[10]   ),
    .gpr_11             (regs[11]   ),
    .gpr_12             (regs[12]   ),
    .gpr_13             (regs[13]   ),
    .gpr_14             (regs[14]   ),
    .gpr_15             (regs[15]   ),
    .gpr_16             (regs[16]   ),
    .gpr_17             (regs[17]   ),
    .gpr_18             (regs[18]   ),
    .gpr_19             (regs[19]   ),
    .gpr_20             (regs[20]   ),
    .gpr_21             (regs[21]   ),
    .gpr_22             (regs[22]   ),
    .gpr_23             (regs[23]   ),
    .gpr_24             (regs[24]   ),
    .gpr_25             (regs[25]   ),
    .gpr_26             (regs[26]   ),
    .gpr_27             (regs[27]   ),
    .gpr_28             (regs[28]   ),
    .gpr_29             (regs[29]   ),
    .gpr_30             (regs[30]   ),
    .gpr_31             (regs[31]   )
);
`endif

endmodule
