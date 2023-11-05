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
wire        inst_req;
wire        inst_wr;
wire [ 1:0] inst_size;
wire [ 3:0] inst_wstrb;
wire [31:0] inst_addr;
wire [31:0] inst_wdata;
wire        inst_addr_ok;
wire        inst_data_ok;
wire [31:0] inst_rdata;
// data sram interface
wire        data_req;
wire        data_wr;
wire [ 1:0] data_size;
wire [ 3:0] data_wstrb;
wire [31:0] data_addr;
wire [31:0] data_wdata;
wire        data_addr_ok;
wire        data_data_ok;
wire [31:0] data_rdata;

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
wire        has_int       ;
wire [31:0] fs_csr_eentry ;
wire [31:0] fs_csr_era    ;



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
    .ws_pc          (ws_csr_era     ),
    .csr_eentry     (fs_csr_eentry  ),
    .csr_era        (fs_csr_era     ),
    //inst sram interface
    .inst_req       (inst_req    ),
    .inst_wr        (inst_wr     ),
    .inst_size      (inst_size   ),
    .inst_addr      (inst_addr   ),
    .inst_wstrb     (inst_wstrb  ),
    .inst_wdata     (inst_wdata  ),
    .inst_addr_ok   (inst_addr_ok),
    .inst_data_ok   (inst_data_ok),
    .inst_rdata     (inst_rdata  )
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
    //data sram interface
    .data_req       (data_req    ),
    .data_wr        (data_wr     ),
    .data_size      (data_size   ),
    .data_addr      (data_addr   ),
    .data_wstrb     (data_wstrb  ),
    .data_wdata     (data_wdata  ),
    .data_addr_ok   (data_addr_ok)
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
    .excp_flush     (excp_flush     ),
    .ertn_flush     (ertn_flush     ),
    .refetch_flush  (refetch_flush  ),
    .csr_wr_en      (csr_wr_en      ),
    .wr_csr_addr    (csr_wr_addr    ),
    .wr_csr_data    (csr_wr_data    ),
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
    //interrupt
    .interrupt   (8'b0           ),
    .has_int     (has_int        ),
    //to fs 
    .eentry_out  (fs_csr_eentry  ),
    .era_out     (fs_csr_era     )
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

    .inst_req     (inst_req     ),
    .inst_wr      (inst_wr      ),
    .inst_size    (inst_size    ),
    .inst_addr    (inst_addr    ),
    .inst_wstrb   (inst_wstrb   ),
    .inst_wdata   (inst_wdata   ),
    .inst_addr_ok (inst_addr_ok ),
    .inst_data_ok (inst_data_ok ),
    .inst_rdata   (inst_rdata   ),

    .data_req     (data_req     ),
    .data_wr      (data_wr      ),
    .data_size    (data_size    ),
    .data_addr    (data_addr    ),
    .data_wstrb   (data_wstrb   ),
    .data_wdata   (data_wdata   ),
    .data_addr_ok (data_addr_ok ),
    .data_data_ok (data_data_ok ),
    .data_rdata   (data_rdata   )
);

endmodule
