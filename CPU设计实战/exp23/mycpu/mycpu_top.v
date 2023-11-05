`include "mycpu.h"

module mycpu_top(
    input  wire        aclk,
    input  wire        aresetn,
    
    output wire [ 3:0] arid,
    output wire [31:0] araddr,
    output wire [ 7:0] arlen,
    output wire [ 2:0] arsize,
    output wire [ 1:0] arburst,
    output wire [ 1:0] arlock,
    output wire [ 3:0] arcache,
    output wire [ 2:0] arprot,
    output wire        arvalid,
    input  wire        arready,

    input  wire [ 3:0] rid,
    input  wire [31:0] rdata,
    input  wire [ 1:0] rresp,
    input  wire        rlast,
    input  wire        rvalid,
    output wire        rready,

    output wire [ 3:0] awid,
    output wire [31:0] awaddr,
    output wire [ 7:0] awlen,
    output wire [ 2:0] awsize,
    output wire [ 1:0] awburst,
    output wire [ 1:0] awlock,
    output wire [ 3:0] awcache,
    output wire [ 2:0] awprot,
    output wire        awvalid,
    input  wire        awready,

    output wire [ 3:0] wid,
    output wire [31:0] wdata,
    output wire [ 3:0] wstrb,
    output wire        wlast,
    output wire        wvalid,
    input  wire        wready,

    input  wire [ 3:0] bid,
    input  wire [ 1:0] bresp,
    input  wire        bvalid,
    output wire        bready,

    // trace debug interface
    output wire [31:0] debug_wb_pc,
    output wire [ 3:0] debug_wb_rf_we,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata
);
reg         reset;
always @(posedge aclk) reset <= ~aresetn;

// inst sram interface
wire         inst_valid;
wire         inst_op;
wire [ 2:0]  inst_size;
wire [ 7:0]  inst_index;
wire [19:0]  inst_tag;
wire [ 3:0]  inst_offset;
wire [ 3:0]  inst_wstrb;
wire [31:0]  inst_wdata;
wire         inst_addr_ok;  
wire         inst_data_ok;  
wire [31:0]  inst_rdata;    
wire         inst_uncache;
// data sram interface
wire         data_valid;
wire         data_op;
wire [ 2:0]  data_size;
wire [ 7:0]  data_index;
wire [19:0]  data_tag;
wire [ 3:0]  data_offset;
wire [ 3:0]  data_wstrb;
wire [31:0]  data_wdata;
wire         data_addr_ok;  
wire         data_data_ok;  
wire [31:0]  data_rdata; 
wire         data_uncache;
   
wire         inst_rd_req;   
wire [ 2:0]  inst_rd_type;  
wire [31:0]  inst_rd_addr;  
wire         inst_rd_rdy;   
wire         inst_ret_valid;
wire         inst_ret_last; 
wire [31:0]  inst_ret_data; 
wire         inst_wr_req;   
wire [ 2:0]  inst_wr_type;  
wire [31:0]  inst_wr_addr;  
wire [ 3:0]  inst_wr_wstrb; 
wire [127:0] inst_wr_data;  
wire         inst_wr_rdy;  
   
wire         data_rd_req;   
wire [ 2:0]  data_rd_type;  
wire [31:0]  data_rd_addr;  
wire         data_rd_rdy;   
wire         data_ret_valid;
wire         data_ret_last; 
wire [31:0]  data_ret_data; 
wire         data_wr_req;   
wire [ 2:0]  data_wr_type;  
wire [31:0]  data_wr_addr;  
wire [ 3:0]  data_wr_wstrb; 
wire [127:0] data_wr_data;  
wire         data_wr_rdy; 

wire         ds_allowin;
wire         es_allowin;
wire         ms_allowin;
wire         ws_allowin;
wire         fs_to_ds_valid;
wire         ds_to_es_valid;
wire         es_to_ms_valid;
wire         ms_to_ws_valid;
wire [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus;
wire [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus;
wire [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus;
wire [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus;
wire [`WS_TO_RF_BUS_WD -1:0] ws_to_rf_bus;
wire [`BR_BUS_WD       -1:0] br_bus;
wire [`ES_TO_DS_FORWARD_BUS - 1:0] es_to_ds_forward_bus;
wire [`MS_TO_DS_FORWARD_BUS - 1:0] ms_to_ds_forward_bus;
wire [`WS_TO_DS_FORWARD_BUS - 1:0] ws_to_ds_forward_bus;

wire         es_div_enable;
wire         es_mul_div_sign;
wire [31:0]  es_rj_value;
wire [31:0]  es_rkd_value;
wire         div_complete;
wire [31:0]  div_result;
wire [31:0]  mod_result;
wire [63:0]  mul_result;

wire        excp_flush;
wire        ertn_flush;
wire        refetch_flush;
wire        ms_excp;

wire [13:0] csr_rd_addr   ;
wire [31:0] csr_rd_data   ;
wire        csr_wr_en     ;
wire [13:0] csr_wr_addr   ;
wire [31:0] csr_wr_data   ;
wire [63:0] timer_64      ;
wire [31:0] csr_tid       ;

wire [31:0] ws_csr_era    ;
wire [ 8:0] ws_csr_esubcode;
wire [ 5:0] ws_csr_ecode  ;
wire        va_error      ;
wire [31:0] bad_va        ;
wire        excp_tlbrefill;
wire        excp_tlb      ;
wire [18:0] excp_tlb_vppn ;
wire        tlbsrch_en    ;
wire        tlbsrch_found ;
wire [ 3:0] tlbsrch_index ;
wire        has_int       ;
wire [31:0] fs_csr_eentry ;
wire [31:0] fs_csr_era    ;
wire [31:0] csr_tlbrentry ;

wire [ 1:0] csr_plv       ;
wire [18:0] csr_vppn      ; 
wire [ 9:0] csr_asid      ;
wire        csr_pg        ;
wire        csr_da        ;
wire [31:0] csr_dmw0      ;
wire [31:0] csr_dmw1      ;
wire [ 1:0] csr_datf      ;
wire [ 1:0] csr_datm      ;
wire [ 4:0] csr_rand_index;
wire [31:0] csr_tlbehi    ;
wire [31:0] csr_tlbelo0   ;
wire [31:0] csr_tlbelo1   ;
wire [31:0] csr_tlbidx    ;

wire [31:0] wr_tlbehi     ;
wire [31:0] wr_tlbelo0    ;
wire [31:0] wr_tlbelo1    ;
wire [31:0] wr_tlbidx     ;
wire [ 9:0] wr_asid       ;

wire        tlbfill_en    ;
wire        tlbwr_en      ;
wire        tlbrd_en      ;
wire        invtlb_en     ;
wire [ 9:0] invtlb_asid   ;
wire [18:0] invtlb_vpn    ;
wire [ 4:0] invtlb_op     ;

wire [31:0] data_vaddr        ;
wire        data_addr_trans_en;
wire        data_dmw0_en      ;
wire        data_dmw1_en      ;
wire [31:0] data_paddr        ;
wire        data_tlb_found    ;
wire [ 3:0] data_tlb_index    ;
wire        data_tlb_v        ;
wire        data_tlb_d        ;
wire [ 1:0] data_tlb_mat      ;
wire [ 1:0] data_tlb_plv      ;
wire [31:0] inst_vaddr        ;
wire        inst_addr_trans_en;
wire        inst_dmw0_en      ;
wire        inst_dmw1_en      ;
wire [31:0] inst_paddr        ;
wire        inst_tlb_found    ;
wire        inst_tlb_v        ;
wire        inst_tlb_d        ;
wire [ 1:0] inst_tlb_mat      ;
wire [ 1:0] inst_tlb_plv      ;

wire        icacop_op_en    ;
wire        dcacop_op_en    ;
wire [ 1:0] cacop_op_mode   ;

// IF stage
if_stage if_stage(
    .clk            (aclk           ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //brbus
    .br_bus         (br_bus         ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    //excp
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .excp_tlbrefill (excp_tlbrefill ),
    .ws_pc          (ws_csr_era     ),
    .csr_eentry     (fs_csr_eentry  ),
    .csr_era        (fs_csr_era     ),
    .csr_tlbrentry  (csr_tlbrentry  ),
    //from csr
    .csr_pg         (csr_pg     ),
    .csr_da         (csr_da     ),
    .csr_dmw0       (csr_dmw0   ),
    .csr_dmw1       (csr_dmw1   ),
    .csr_plv        (csr_plv    ),
    .csr_datf       (csr_datf   ),
    //to addr trans
    .inst_vaddr        (inst_vaddr          ),
    .inst_addr_trans_en(inst_addr_trans_en  ),
    .dmw0_en           (inst_dmw0_en        ),
    .dmw1_en           (inst_dmw1_en        ),
    //tlb
    .inst_paddr        (inst_paddr      ),
    .inst_tlb_found    (inst_tlb_found  ),
    .inst_tlb_v        (inst_tlb_v      ),
    .inst_tlb_d        (inst_tlb_d      ),
    .inst_tlb_mat      (inst_tlb_mat    ),
    .inst_tlb_plv      (inst_tlb_plv    ),
    //cache ins
    .icacop_op_en         (icacop_op_en   ),
    .cacop_op_addr_index  (data_index     ),
    .cacop_op_addr_tag    (data_tag       ),
    .cacop_op_addr_offset (data_offset    ),
    //inst sram interface
    .inst_req       (inst_valid  ),
    .inst_wr        (inst_op     ),
    .inst_size      (inst_size   ),
    .inst_tag       (inst_tag    ),
    .inst_index     (inst_index  ),
    .inst_offset    (inst_offset ),
    .inst_wstrb     (inst_wstrb  ),
    .inst_wdata     (inst_wdata  ),
    .inst_addr_ok   (inst_addr_ok),
    .inst_data_ok   (inst_data_ok),
    .inst_rdata     (inst_rdata  ),
    .inst_uncache   (inst_uncache)
);
// ID stage
id_stage id_stage(
    .clk            (aclk           ),
    .reset          (reset          ),
    //allowin
    .es_allowin     (es_allowin     ),
    .ds_allowin     (ds_allowin     ),
    //from fs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    //forward
    .es_to_ds_forward_bus (es_to_ds_forward_bus),
    .ms_to_ds_forward_bus (ms_to_ds_forward_bus),
    .ws_to_ds_forward_bus (ws_to_ds_forward_bus),
    //to es
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    //to fs
    .br_bus         (br_bus         ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
    //excp
    .has_int        (has_int        ),
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .rd_csr_addr    (csr_rd_addr    ),
    .rd_csr_data    (csr_rd_data    ),
    .timer_64       (timer_64       ),
    .csr_tid        (csr_tid        )
);
// EXE stage
exe_stage exe_stage(
    .clk            (aclk           ),
    .reset          (reset          ),
    //allowin
    .ms_allowin     (ms_allowin     ),
    .es_allowin     (es_allowin     ),
    //from ds
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    //to ms
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    //to ds
    .es_to_ds_forward_bus (es_to_ds_forward_bus),
    //div_mul
    .es_div_enable        (es_div_enable       ),
    .es_mul_div_sign      (es_mul_div_sign     ),
    .es_rj_value          (es_rj_value         ),
    .es_rkd_value         (es_rkd_value        ),
    .div_complete         (div_complete        ),
    //excp
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .ms_excp        (ms_excp        ),
    //from csr 
    .csr_pg         (csr_pg         ),
    .csr_da         (csr_da         ),
    .csr_dmw0       (csr_dmw0       ),
    .csr_dmw1       (csr_dmw1       ),
    .csr_plv        (csr_plv        ),
    .csr_datm       (csr_datm       ),
    .csr_vppn       (csr_vppn       ),
    //to addr trans 
    .data_vaddr        (data_vaddr          ),
    .data_addr_trans_en(data_addr_trans_en  ),   
    .dmw0_en           (data_dmw0_en        ),
    .dmw1_en           (data_dmw1_en        ),  
    //tlb 
    .data_paddr     (data_paddr     ),
    .data_tlb_found (data_tlb_found ),
    .data_tlb_index (data_tlb_index ),
    .data_tlb_v     (data_tlb_v     ),
    .data_tlb_d     (data_tlb_d     ),
    .data_tlb_mat   (data_tlb_mat   ),
    .data_tlb_plv   (data_tlb_plv   ),
    .icacop_op_en   (icacop_op_en   ),
    .dcacop_op_en   (dcacop_op_en   ),
    .cacop_op_mode  (cacop_op_mode  ),
    .inst_addr_ok   (inst_addr_ok   ),
    //data sram interface
    .data_req       (data_valid  ),
    .data_wr        (data_op     ),
    .data_size      (data_size   ),
    .data_tag       (data_tag    ),
    .data_index     (data_index  ),
    .data_offset    (data_offset ),
    .data_wstrb     (data_wstrb  ),
    .data_wdata     (data_wdata  ),
    .data_addr_ok   (data_addr_ok),
    .data_uncache   (data_uncache)
);

div u_div(
    .div_clk         (aclk           ),
    .reset           (reset          ),
    .div             (es_div_enable  ),
    .div_signed      (es_mul_div_sign),
    .x               (es_rj_value    ),
    .y               (es_rkd_value   ),
    .s               (div_result     ),
    .r               (mod_result     ),
    .complete        (div_complete   )
);

mul u_mul(
    .mul_clk         (aclk           ),
    .reset           (reset          ),
    .mul_signed      (es_mul_div_sign),
    .x               (es_rj_value    ),
    .y               (es_rkd_value   ),
    .result          (mul_result     )
);

// MEM stage
mem_stage mem_stage(
    .clk            (aclk           ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    .ms_allowin     (ms_allowin     ),
    //from es
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    //to ws
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    //to ds
    .ms_to_ds_forward_bus (ms_to_ds_forward_bus),
    //div mul
    .div_result           (div_result          ),
    .mod_result           (mod_result          ),
    .mul_result           (mul_result          ),
    //excp
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .excp_out       (ms_excp        ),
    //from data sram
    .data_data_ok   (data_data_ok),
    .data_rdata     (data_rdata  )
);
// WB stage
wb_stage wb_stage(
    .clk            (aclk           ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    //from ms
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
    //to ds
    .ws_to_ds_forward_bus (ws_to_ds_forward_bus),
    //excp
    .csr_era        (ws_csr_era     ),
    .csr_esubcode   (ws_csr_esubcode),
    .csr_ecode      (ws_csr_ecode   ),
    .va_error       (va_error       ),
    .bad_va         (bad_va         ),
    .excp_tlbrefill (excp_tlbrefill ),
    .excp_tlb       (excp_tlb       ),
    .excp_tlb_vppn  (excp_tlb_vppn  ),
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .csr_wr_en      (csr_wr_en      ),
    .wr_csr_addr    (csr_wr_addr    ),
    .wr_csr_data    (csr_wr_data    ),
    //tlb inst
    .tlbsrch_en     (tlbsrch_en ),
    .tlbfill_en     (tlbfill_en ),
    .tlbwr_en       (tlbwr_en   ),
    .tlbrd_en       (tlbrd_en   ),
    .invtlb_en      (invtlb_en  ),
    .invtlb_asid    (invtlb_asid),
    .invtlb_vpn     (invtlb_vpn ),
    .invtlb_op      (invtlb_op  ),
    .tlbsrch_found(tlbsrch_found),
    .tlbsrch_index(tlbsrch_index),
    //trace debug interface
    .debug_wb_pc      (debug_wb_pc      ),
    .debug_wb_rf_we   (debug_wb_rf_we   ),
    .debug_wb_rf_wnum (debug_wb_rf_wnum ),
    .debug_wb_rf_wdata(debug_wb_rf_wdata)
);

csr u_csr(
    .clk         (aclk           ),
    .reset       (reset          ),
    //from to ds 
    .rd_addr     (csr_rd_addr    ),
    .rd_data     (csr_rd_data    ),
    //timer 64
    .timer_64_out(timer_64       ),
    .tid_out     (csr_tid        ),
    //from ws  
    .csr_wr_en   (csr_wr_en      ),
    .wr_addr     (csr_wr_addr    ),
    .wr_data     (csr_wr_data    ),
    .excp_flush  (excp_flush     ),
    .ertn_flush  (ertn_flush     ),
    .era_in      (ws_csr_era     ),
    .esubcode_in (ws_csr_esubcode),
    .ecode_in    (ws_csr_ecode   ),
    .va_error_in (va_error       ),
    .bad_va_in   (bad_va         ),
    .excp_tlbrefill (excp_tlbrefill ),
    .excp_tlb       (excp_tlb       ),
    .excp_tlb_vppn  (excp_tlb_vppn  ),
    .tlbsrch_en   (tlbsrch_en    ),
    .tlbsrch_found(tlbsrch_found ),
    .tlbsrch_index(tlbsrch_index ),
    //interrupt
    .interrupt   (8'b0           ),
    .has_int     (has_int        ),
    //to es
    .vppn_out     (csr_vppn      ),
    //to addr trans
    .asid_out     (csr_asid      ),
    .rand_index   (csr_rand_index),
    .tlbehi_out   (csr_tlbehi    ),
    .tlbelo0_out  (csr_tlbelo0   ),
    .tlbelo1_out  (csr_tlbelo1   ),
    .tlbidx_out   (csr_tlbidx    ),
    .pg_out       (csr_pg        ),
    .da_out       (csr_da        ),
    .dmw0_out     (csr_dmw0      ),
    .dmw1_out     (csr_dmw1      ),
    .datf_out     (csr_datf      ),
    .datm_out     (csr_datm      ),
    //from addr trans 
    .tlbrd_en     (tlbrd_en      ),
    .tlbehi_in    (wr_tlbehi     ),
    .tlbelo0_in   (wr_tlbelo0    ),
    .tlbelo1_in   (wr_tlbelo1    ),
    .tlbidx_in    (wr_tlbidx     ),
    .asid_in      (wr_asid       ),
    //general use
    .plv_out      (csr_plv       ),
    //to fs 
    .eentry_out  (fs_csr_eentry  ),
    .era_out     (fs_csr_era     ),
    .tlbrentry_out(csr_tlbrentry )
);

addr_trans u_addr_trans(
    .clk                  (aclk),
    .asid                 (csr_asid     ),
    .inst_addr_trans_en   (inst_addr_trans_en),
    .data_addr_trans_en   (data_addr_trans_en),
    .inst_vaddr           (inst_vaddr),
    .inst_dmw0_en         (inst_dmw0_en),
    .inst_dmw1_en         (inst_dmw1_en),
    .inst_paddr           (inst_paddr),
    .inst_tlb_found       (inst_tlb_found),
    .inst_tlb_v           (inst_tlb_v),
    .inst_tlb_d           (inst_tlb_d),
    .inst_tlb_mat         (inst_tlb_mat),
    .inst_tlb_plv         (inst_tlb_plv),
    .data_vaddr           (data_vaddr),
    .data_dmw0_en         (data_dmw0_en),
    .data_dmw1_en         (data_dmw1_en),
    .data_paddr           (data_paddr),
    .data_tlb_found       (data_tlb_found),
    .data_tlb_index       (data_tlb_index),
    .data_tlb_v           (data_tlb_v),
    .data_tlb_d           (data_tlb_d),
    .data_tlb_mat         (data_tlb_mat),
    .data_tlb_plv         (data_tlb_plv),

    .tlbfill_en           (tlbfill_en),
    .tlbwr_en             (tlbwr_en),
    .rand_index           (csr_rand_index),
    .tlbehi_in            (csr_tlbehi),
    .tlbelo0_in           (csr_tlbelo0),
    .tlbelo1_in           (csr_tlbelo1),
    .tlbidx_in            (csr_tlbidx),
    .tlbehi_out           (wr_tlbehi),
    .tlbelo0_out          (wr_tlbelo0),
    .tlbelo1_out          (wr_tlbelo1),
    .tlbidx_out           (wr_tlbidx),
    .asid_out             (wr_asid),
    .invtlb_en            (invtlb_en),
    .invtlb_asid          (invtlb_asid),
    .invtlb_vpn           (invtlb_vpn),
    .invtlb_op            (invtlb_op),
    .csr_dmw0             (csr_dmw0),
    .csr_dmw1             (csr_dmw1),
    .csr_da               (csr_da),
    .csr_pg               (csr_pg)
);

axi_bridge u_axi_brige(
    .clk    (aclk   ),
    .reset  (reset  ),

    .arid   (arid   ),
    .araddr (araddr ),
    .arlen  (arlen  ),
    .arsize (arsize ),
    .arburst(arburst),
    .arlock (arlock ),
    .arcache(arcache),
    .arprot (arprot ),
    .arvalid(arvalid),
    .arready(arready),

    .rid    (rid    ),
    .rdata  (rdata  ),
    .rresp  (rresp  ),
    .rlast  (rlast  ),
    .rvalid (rvalid ),
    .rready (rready ),

    .awid   (awid   ),
    .awaddr (awaddr ),
    .awlen  (awlen  ),
    .awsize (awsize ),
    .awburst(awburst),
    .awlock (awlock ),
    .awcache(awcache),
    .awprot (awprot ),
    .awvalid(awvalid),
    .awready(awready),

    .wid    (wid    ),
    .wdata  (wdata  ),
    .wstrb  (wstrb  ),
    .wlast  (wlast  ),
    .wvalid (wvalid ),
    .wready (wready ),

    .bid    (bid    ),
    .bresp  (bresp  ),
    .bvalid (bvalid ),
    .bready (bready ),

    .inst_rd_req    (inst_rd_req    ),  
    .inst_rd_type   (inst_rd_type   ), 
    .inst_rd_addr   (inst_rd_addr   ),
    .inst_rd_rdy    (inst_rd_rdy    ),
    .inst_ret_valid (inst_ret_valid ),
    .inst_ret_last  (inst_ret_last  ),
    .inst_ret_data  (inst_ret_data  ),
    .inst_wr_req    (inst_wr_req    ),
    .inst_wr_type   (inst_wr_type   ),
    .inst_wr_addr   (inst_wr_addr   ),
    .inst_wr_wstrb  (inst_wr_wstrb  ),
    .inst_wr_data   (inst_wr_data   ),
    .inst_wr_rdy    (inst_wr_rdy    ),

    .data_rd_req    (data_rd_req    ),  
    .data_rd_type   (data_rd_type   ), 
    .data_rd_addr   (data_rd_addr   ),
    .data_rd_rdy    (data_rd_rdy    ),
    .data_ret_valid (data_ret_valid ),
    .data_ret_last  (data_ret_last  ),
    .data_ret_data  (data_ret_data  ),
    .data_wr_req    (data_wr_req    ),
    .data_wr_type   (data_wr_type   ),
    .data_wr_addr   (data_wr_addr   ),
    .data_wr_wstrb  (data_wr_wstrb  ),
    .data_wr_data   (data_wr_data   ),
    .data_wr_rdy    (data_wr_rdy    )
);

cache icache( 
    .clk            (aclk           ),
    .reset          (reset          ),
    //to from cpu
    .valid          (inst_valid     ),
    .op             (inst_op        ),   
    .size           (inst_size      ),  
    .index          (inst_index     ),
    .tag            (inst_tag       ),
    .offset         (inst_offset    ),
    .wstrb          (inst_wstrb     ),
    .wdata          (inst_wdata     ),
    .addr_ok        (inst_addr_ok   ),
    .data_ok        (inst_data_ok   ),
    .rdata          (inst_rdata     ),
    .uncache_en     (inst_uncache   ),
    .cacop_op_en    (icacop_op_en   ),
    .cacop_op_mode  (cacop_op_mode  ),
    //to from axi 
    .rd_req         (inst_rd_req    ), 
    .rd_type        (inst_rd_type   ), 
    .rd_addr        (inst_rd_addr   ), 
    .rd_rdy         (inst_rd_rdy    ), 
    .ret_valid      (inst_ret_valid ),    
    .ret_last       (inst_ret_last  ), 
    .ret_data       (inst_ret_data  ), 
    .wr_req         (inst_wr_req    ), 
    .wr_type        (inst_wr_type   ), 
    .wr_addr        (inst_wr_addr   ), 
    .wr_wstrb       (inst_wr_wstrb  ), 
    .wr_data        (inst_wr_data   ), 
    .wr_rdy         (inst_wr_rdy    )
);

cache dcache( 
    .clk            (aclk           ),
    .reset          (reset          ),
    //to from cpu
    .valid          (data_valid     ),
    .op             (data_op        ),
    .size           (data_size      ),
    .index          (data_index     ),
    .tag            (data_tag       ),
    .offset         (data_offset    ),
    .wstrb          (data_wstrb     ),
    .wdata          (data_wdata     ),
    .addr_ok        (data_addr_ok   ),
    .data_ok        (data_data_ok   ),
    .rdata          (data_rdata     ),
    .uncache_en     (data_uncache   ),
    .cacop_op_en    (dcacop_op_en   ),
    .cacop_op_mode  (cacop_op_mode  ),
    //to from axi 
    .rd_req         (data_rd_req    ), 
    .rd_type        (data_rd_type   ), 
    .rd_addr        (data_rd_addr   ), 
    .rd_rdy         (data_rd_rdy    ), 
    .ret_valid      (data_ret_valid ),    
    .ret_last       (data_ret_last  ), 
    .ret_data       (data_ret_data  ), 
    .wr_req         (data_wr_req    ), 
    .wr_type        (data_wr_type   ), 
    .wr_addr        (data_wr_addr   ), 
    .wr_wstrb       (data_wr_wstrb  ), 
    .wr_data        (data_wr_data   ), 
    .wr_rdy         (data_wr_rdy    )
);

endmodule
