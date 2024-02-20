module mycpu_top(
    input         aclk,
    input         aresetn,
    output [3 :0] arid  ,
    output [31:0] araddr ,
    output [7 :0] arlen  ,
    output [2 :0] arsize ,
    output [1 :0] arburst,
    output [1 :0] arlock ,
    output [3 :0] arcache,
    output [2 :0] arprot ,
    output        arvalid,
    input         arready,

    input [3 :0] rid    ,
    input [31:0] rdata  ,
    input [1 :0] rresp  ,
    input        rlast  ,
    input        rvalid ,
    output       rready ,

    output [3 :0] awid   ,
    output [31:0] awaddr ,
    output [7 :0] awlen  ,
    output [2 :0] awsize ,
    output [1 :0] awburst,
    output [1 :0] awlock ,
    output [3 :0] awcache,
    output [2 :0] awprot ,
    output        awvalid,
    input         awready,

    output [3 :0] wid    ,
    output [31:0] wdata  ,
    output [3 :0] wstrb  ,
    output        wlast  ,
    output        wvalid ,
    input         wready ,

    input [3 :0] bid    ,
    input [1 :0] bresp  ,
    input        bvalid ,
    output       bready ,
    // trace debug interface
    output [31:0] debug_wb_pc,
    output [ 3:0] debug_wb_rf_wen,
    output [ 4:0] debug_wb_rf_wnum,
    output [31:0] debug_wb_rf_wdata
);
reg         reset;
always @(posedge aclk) reset <= ~aresetn; 

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
wire [`MS_TO_FS_BUS_WD -1:0] ms_to_fs_bus;

wire [4:0] es_to_ds_dest;
wire [4:0] ms_to_ds_dest;
wire [4:0] ws_to_ds_dest;
wire [31:0] es_to_ds_value;
wire [31:0] ms_to_ds_value;
wire [31:0] ws_to_ds_value;
wire [13:0] es_to_ds_num;
wire load_op;
wire ms_to_ds_reflush;
wire ms_to_es_reflush;
wire has_int;
wire ms_to_ds_ready;

wire [18 :0] ms_to_es_vppn;
wire [ 9 :0] ms_to_es_asid;
wire [31 :0] ms_dmw0;
wire [31 :0] ms_dmw1;
wire [31 :0] ms_crmd;
wire [31 :0] ms_to_fs_asid;

// inst ram
wire inst_sram_req  ;
wire inst_sram_wr    ;
wire [1:0] inst_sram_size   ;
wire [3:0] inst_sram_wstrb  ;
wire [31:0] inst_sram_addr   ;
wire [31:0] inst_sram_wdata  ;
wire inst_sram_addr_ok;
wire inst_sram_data_ok;
wire [31:0] inst_sram_rdata  ;
wire [ 1:0] inst_mat;

// data ram
wire data_sram_req    ;
wire data_sram_wr     ;
wire  [1:0] data_sram_size   ;
wire  [3:0] data_sram_wstrb ;
wire  [31:0] data_sram_addr   ;
wire  [31:0] data_sram_wdata ;
wire data_sram_addr_ok;
wire data_sram_data_ok;
wire  [31:0] data_sram_rdata ;
wire  [ 1:0] data_mat;

//cache_to_axi
wire       inst_rd_req;
wire[ 2:0] inst_rd_type;
wire[31:0] inst_rd_addr;
wire       inst_ret_valid;
wire       inst_ret_last;
wire       inst_rd_rdy;
wire[31:0] inst_ret_data;
wire       data_rd_req;
wire[ 2:0] data_rd_type;
wire[31:0] data_rd_addr;
wire       data_ret_valid;
wire       data_ret_last;
wire       data_rd_rdy;
wire[31:0] data_ret_data;
wire       wr_req;
wire[ 2:0] wr_type;
wire[31:0] wr_addr;
wire[ 3:0] wr_wstrb;
wire[127:0]wr_data;
wire       wr_rdy;

//tlb
wire [18 :0] s0_vppn;
wire [ 9 :0] s0_asid;
wire         s0_va_bit12;
wire         s0_found;
wire [19 :0] s0_ppn;
wire [ 5 :0] s0_ps;
wire [ 1 :0] s0_plv;
wire [ 1 :0] s0_mat;
wire         s0_v;

wire [18 :0] s1_vppn;
wire [ 9 :0] s1_asid;
wire         s1_va_bit12;
wire         s1_found;
wire [ 3 :0] s1_index;
wire [19 :0] s1_ppn;
wire [ 5 :0] s1_ps;
wire [ 1 :0] s1_plv;
wire [ 1 :0] s1_mat;
wire         s1_d;
wire         s1_v;
wire         invtlb_valid;
wire [ 4 :0] invtlb_op;

wire         we; 
wire [ 3 :0] w_index;
wire         w_e;
wire [ 18:0] w_vppn;
wire [ 5 :0] w_ps;
wire [ 9 :0] w_asid;
wire         w_g;
wire [ 19:0] w_ppn0;
wire [ 1 :0] w_plv0;
wire [ 1 :0] w_mat0;
wire         w_d0;
wire         w_v0;
wire [ 19:0] w_ppn1;
wire [ 1 :0] w_plv1;
wire [ 1 :0] w_mat1;
wire         w_d1;
wire         w_v1;
  
wire [ 3 :0] r_index;
wire         r_e;
wire [ 18:0] r_vppn;
wire [ 5 :0] r_ps;
wire [ 9 :0] r_asid;
wire         r_g;
wire [ 19:0] r_ppn0;
wire [ 1 :0] r_plv0;
wire [ 1 :0] r_mat0;
wire         r_d0;
wire         r_v0;
wire [ 19:0] r_ppn1;
wire [ 1 :0] r_plv1;
wire [ 1 :0] r_mat1;
wire         r_d1;
wire         r_v1; 

wire         icacop_en;
wire         dcacop_en;
wire[1:0]    cacop_mode;
wire         icacop_ok;
wire         dcacop_ok;
wire         cacop_ok;

//sram_axi_bridge
axi_bridge u_axi_bridge(
    .clk      (aclk      ),
    .aresetn  (~reset     ),  

    .arid      (arid      ),
    .araddr    (araddr    ),
    .arlen     (arlen     ),
    .arsize    (arsize    ),
    .arburst   (arburst   ),
    .arlock    (arlock    ),
    .arcache   (arcache   ),
    .arprot    (arprot    ),
    .arvalid   (arvalid   ),
    .arready   (arready   ),
                
    .rid       (rid       ),
    .rdata     (rdata     ),
    .rresp     (rresp     ),
    .rlast     (rlast     ),
    .rvalid    (rvalid    ),
    .rready    (rready    ),
               
    .awid      (awid      ),
    .awaddr    (awaddr    ),
    .awlen     (awlen     ),
    .awsize    (awsize    ),
    .awburst   (awburst   ),
    .awlock    (awlock    ),
    .awcache   (awcache   ),
    .awprot    (awprot    ),
    .awvalid   (awvalid   ),
    .awready   (awready   ),
    
    .wid       (wid       ),
    .wdata     (wdata     ),
    .wstrb     (wstrb     ),
    .wlast     (wlast     ),
    .wvalid    (wvalid    ),
    .wready    (wready    ),
    
    .bid       (bid       ),
    .bresp     (bresp     ),
    .bvalid    (bvalid    ),
    .bready    (bready    ),

    .inst_rd_req   (inst_rd_req   ),
    .inst_rd_type  (inst_rd_type  ),
    .inst_rd_addr  (inst_rd_addr  ),
	.inst_ret_valid(inst_ret_valid),
	.inst_ret_last (inst_ret_last ),
	.inst_rd_rdy   (inst_rd_rdy   ),
    .inst_ret_data (inst_ret_data ),

    .data_rd_req   (data_rd_req   ),  
    .data_rd_type  (data_rd_type  ),
    .data_rd_addr  (data_rd_addr  ),
    .data_ret_valid(data_ret_valid),
	.data_ret_last (data_ret_last ),
    .data_rd_rdy   (data_rd_rdy   ),
    .data_ret_data (data_ret_data ),
	
	.wr_req        (wr_req        ),
	.wr_type       (wr_type       ),
	.wr_addr       (wr_addr       ),
	.wr_wstrb      (wr_wstrb      ),
    .wr_data       (wr_data       ),
	.wr_rdy        (wr_rdy        )
);

icache u_icache(
    .clk      (aclk),
    .reset    (reset),
    .valid    (inst_sram_req),
    .op       (inst_sram_wr),
    .uncache  (~inst_mat[0]),	
    .index    (inst_sram_addr[11:4]),
    .tag      (inst_sram_addr[31:12]),
    .offset   (inst_sram_addr[3:0]),
    .wstrb    (inst_sram_wstrb),
    .wdata    (inst_sram_wdata),
    .addr_ok  (inst_sram_addr_ok),
    .data_ok  (inst_sram_data_ok),
    .rdata    (inst_sram_rdata),
	
	.icacop_en    (icacop_en            ),
	.icacop_mode  (cacop_mode           ),
	.icacop_tag   (data_sram_addr[31:12]),
	.icacop_index (data_sram_addr[11:4] ),
	.icacop_offset(data_sram_addr[3:0]  ), 
	.icacop_ok    (icacop_ok             ),
	
    .rd_req   (inst_rd_req),
    .rd_type  (inst_rd_type),
    .rd_addr  (inst_rd_addr),
    .rd_rdy   (inst_rd_rdy),
    .ret_valid(inst_ret_valid),
    .ret_last (inst_ret_last),
    .ret_data (inst_ret_data),
    .wr_req   (),
    .wr_type  (),
    .wr_addr  (),
    .wr_wstrb (),
    .wr_data  (),
    .wr_rdy   ()

);

dcache u_dcache(
    .clk      (aclk),
    .reset    (reset),
    .valid    (data_sram_req),
    .op       (data_sram_wr),
    .uncache  (~data_mat[0]),
    .size     (data_sram_size),	
    .index    (data_sram_addr[11:4]),
    .tag      (data_sram_addr[31:12]),
    .offset   (data_sram_addr[3:0]),
    .wstrb    (data_sram_wstrb),
    .wdata    (data_sram_wdata),
    .addr_ok  (data_sram_addr_ok),
    .data_ok  (data_sram_data_ok),
    .rdata    (data_sram_rdata),
	
	.dcacop_en   (dcacop_en            ),
	.dcacop_mode (cacop_mode           ),
	.dcacop_ok   (dcacop_ok             ),
	
    .rd_req   (data_rd_req),
    .rd_type  (data_rd_type),
    .rd_addr  (data_rd_addr),
    .rd_rdy   (data_rd_rdy),
    .ret_valid(data_ret_valid),
    .ret_last (data_ret_last),
    .ret_data (data_ret_data),
    .wr_req   (wr_req        ),
	.wr_type  (wr_type       ),
	.wr_addr  (wr_addr       ),
	.wr_wstrb (wr_wstrb      ),
    .wr_data  (wr_data       ),
	.wr_rdy   (wr_rdy        )   
);

tlb #(.TLBNUM(16)) u_tlb(
    .clk(aclk),
	.s0_vppn(s0_vppn),
	.s0_asid(s0_asid),
	.s0_va_bit12(s0_va_bit12),
	.s0_found(s0_found),
	.s0_index(),
	.s0_ppn(s0_ppn),
	.s0_ps(s0_ps),
	.s0_plv(s0_plv),
	.s0_mat(s0_mat),
	.s0_d(),
	.s0_v(s0_v),
	
	.s1_vppn(s1_vppn),
	.s1_asid(s1_asid),
	.s1_va_bit12(s1_va_bit12),
	.s1_found(s1_found),
	.s1_index(s1_index),
	.s1_ppn(s1_ppn),
	.s1_ps(s1_ps),
	.s1_plv(s1_plv),
	.s1_mat(s1_mat),
	.s1_d(s1_d),
	.s1_v(s1_v),
	
	.invtlb_valid(invtlb_valid),
	.invtlb_op(invtlb_op),
	
	.we     (we     ),
	.w_index(w_index),
	.w_e    (w_e    ),
	.w_asid (w_asid ),
	.w_g    (w_g    ),
	.w_ps   (w_ps   ),
	.w_vppn (w_vppn ),
	.w_ppn0 (w_ppn0 ),
	.w_plv0 (w_plv0 ),
	.w_mat0 (w_mat0 ),
	.w_d0   (w_d0   ),
	.w_v0   (w_v0   ),
	.w_ppn1 (w_ppn1 ),
	.w_plv1 (w_plv1 ),
	.w_mat1 (w_mat1 ),
	.w_d1   (w_d1   ),
	.w_v1   (w_v1   ),
	
	.r_index(r_index),
	.r_e    (r_e    ),
	.r_asid (r_asid ),
	.r_g    (r_g    ),
	.r_ps   (r_ps   ),
	.r_vppn (r_vppn ),
	.r_ppn0 (r_ppn0 ),
	.r_plv0 (r_plv0 ),
	.r_mat0 (r_mat0 ),
	.r_d0   (r_d0   ),
	.r_v0   (r_v0   ),
	.r_ppn1 (r_ppn1 ),
	.r_plv1 (r_plv1 ),
	.r_mat1 (r_mat1 ),
	.r_d1   (r_d1   ),
	.r_v1   (r_v1   )
);	
	
	

// IF stage
if_stage if_stage(
    .clk            (aclk            ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //brbus
    .br_bus         (br_bus         ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    // inst sram interface
    .inst_sram_req  (inst_sram_req ),
	.inst_sram_wr   (inst_sram_wr  ),
    .inst_sram_wstrb(inst_sram_wstrb),
	.inst_sram_size (inst_sram_size),
    .inst_sram_addr (inst_sram_addr ),
    .inst_sram_wdata(inst_sram_wdata),
    .inst_sram_rdata(inst_sram_rdata),
	.inst_sram_addr_ok(inst_sram_addr_ok),
	.inst_sram_data_ok(inst_sram_data_ok),
	.ms_to_fs_bus   (ms_to_fs_bus   ),
	
	.ms_csr_dmw0(ms_dmw0),
	.ms_csr_dmw1(ms_dmw1),
	.ms_csr_crmd(ms_crmd),
	.ms_csr_asid(ms_to_fs_asid),
	
	.s0_vppn    (s0_vppn),
	.s0_asid    (s0_asid),
	.s0_va_bit12(s0_va_bit12),
	.s0_found   (s0_found),
	.s0_ppn     (s0_ppn),
	.s0_ps      (s0_ps),
	.s0_plv     (s0_plv),
	.s0_mat     (s0_mat),
	.s0_v       (s0_v),
	
	.mat        (inst_mat)
	
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
    //to es
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    //to fs
    .br_bus         (br_bus         ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
	.es_to_ds_dest  (es_to_ds_dest  ),
	.ms_to_ds_dest  (ms_to_ds_dest  ),
	.ws_to_ds_dest  (ws_to_ds_dest  ),
	.es_to_ds_value (es_to_ds_value ),
	.ms_to_ds_value (ms_to_ds_value ),
	.ws_to_ds_value (ws_to_ds_value ),
	.es_load_op     (load_op        ),
	.es_to_ds_num   (es_to_ds_num   ),
	.ms_to_ds_reflush(ms_to_ds_reflush),
	.has_int        (has_int),
	.ms_to_ds_ready(ms_to_ds_ready)
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
    // data sram interface
    .data_sram_req  (data_sram_req  ),
	.data_sram_wr   (data_sram_wr   ),
    .data_sram_wstrb(data_sram_wstrb),
    .data_sram_addr (data_sram_addr ),
	.data_sram_size (data_sram_size),
    .data_sram_wdata(data_sram_wdata),
	.data_sram_addr_ok(data_sram_addr_ok),
	.es_to_ds_dest  (es_to_ds_dest  ),
	.es_to_ds_value (es_to_ds_value ),
	.es_load_op     (load_op        ),
	.es_to_ds_num   (es_to_ds_num   ),
	.ms_to_es_reflush(ms_to_es_reflush),
	
	.ms_to_es_vppn  (ms_to_es_vppn  ),
	.ms_to_es_asid  (ms_to_es_asid  ),
	
	.ms_csr_dmw0    (ms_dmw0        ),
	.ms_csr_dmw1    (ms_dmw1        ),
	.ms_csr_crmd    (ms_crmd        ),
	
	.s1_vppn        (s1_vppn        ),
	.s1_asid        (s1_asid        ),
	.s1_va_bit12    (s1_va_bit12    ),
	.invtlb_valid   (invtlb_valid   ),
	.invtlb_op      (invtlb_op      ),
	.s1_found       (s1_found       ),
	.s1_ppn         (s1_ppn         ),
	.s1_ps          (s1_ps          ),
	.s1_plv         (s1_plv         ),
	.s1_mat         (s1_mat         ),
	.s1_d           (s1_d           ),
	.s1_v           (s1_v           ),
	
	.mat            (data_mat       ),
	
	.icacop_en      (icacop_en      ),
	.dcacop_en      (dcacop_en      ),
	.cacop_mode     (cacop_mode     ),
	.cacop_ok       (icacop_ok|dcacop_ok)
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
    //from data-sram
    .data_sram_rdata(data_sram_rdata),
	.data_sram_data_ok(data_sram_data_ok),
	.ms_to_ds_dest  (ms_to_ds_dest  ),
	.ms_to_ds_value (ms_to_ds_value ),
	.ms_to_ds_reflush(ms_to_ds_reflush),
	.ms_to_es_reflush(ms_to_es_reflush),
	.ms_to_fs_bus    (ms_to_fs_bus),
	.has_int         (has_int),
	.ms_to_ds_ready  (ms_to_ds_ready),
	
	.ms_to_es_vppn   (ms_to_es_vppn),
	.ms_to_es_asid   (ms_to_es_asid),
	
	.r_index(r_index),
	.r_e    (r_e    ),
	.r_asid (r_asid ),
	.r_g    (r_g    ),
	.r_ps   (r_ps   ),
	.r_vppn (r_vppn ),
	.r_ppn0 (r_ppn0 ),
	.r_plv0 (r_plv0 ),
	.r_mat0 (r_mat0 ),
	.r_d0   (r_d0   ),
	.r_v0   (r_v0   ),
	.r_ppn1 (r_ppn1 ),
	.r_plv1 (r_plv1 ),
	.r_mat1 (r_mat1 ),
	.r_d1   (r_d1   ),
	.r_v1   (r_v1   ),
	
	.we_tlb (we     ),
	.w_index(w_index),
	.w_e    (w_e    ),
	.w_asid (w_asid ),
	.w_g    (w_g    ),
	.w_ps   (w_ps   ),
	.w_vppn (w_vppn ),
	.w_ppn0 (w_ppn0 ),
	.w_plv0 (w_plv0 ),
	.w_mat0 (w_mat0 ),
	.w_d0   (w_d0   ),
	.w_v0   (w_v0   ),
	.w_ppn1 (w_ppn1 ),
	.w_plv1 (w_plv1 ),
	.w_mat1 (w_mat1 ),
	.w_d1   (w_d1   ),
	.w_v1   (w_v1   ),
	
	.s1_index(s1_index),
	.s1_found(s1_found),
	
	.csr_dmw0(ms_dmw0),
	.csr_dmw1(ms_dmw1),
	.csr_crmd(ms_crmd),
	.csr_asid(ms_to_fs_asid)
	
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
    //trace debug interface
    .debug_wb_pc      (debug_wb_pc      ),
    .debug_wb_rf_wen  (debug_wb_rf_wen  ),
    .debug_wb_rf_wnum (debug_wb_rf_wnum ),
    .debug_wb_rf_wdata(debug_wb_rf_wdata),
	.ws_to_ds_dest    (ws_to_ds_dest    ),
	.ws_to_ds_value   (ws_to_ds_value   )
);

endmodule
