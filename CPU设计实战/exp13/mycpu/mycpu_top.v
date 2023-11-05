`include "mycpu.h"

module mycpu_top(
    input  wire        clk,
    input  wire        resetn,
    // inst sram interface
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
reg         reset;
always @(posedge clk) reset <= ~resetn;

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
    .clk            (clk            ),
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
    .inst_sram_en   (inst_sram_en   ),
    .inst_sram_wen  (inst_sram_wen  ),
    .inst_sram_addr (inst_sram_addr ),
    .inst_sram_wdata(inst_sram_wdata),
    .inst_sram_rdata(inst_sram_rdata)
);
// ID stage
id_stage id_stage(
    .clk            (clk            ),
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
    .clk            (clk            ),
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
    .data_sram_en   (data_sram_en   ),
    .data_sram_we   (data_sram_we   ),
    .data_sram_addr (data_sram_addr ),
    .data_sram_wdata(data_sram_wdata)
);

div u_div(
    .div_clk         (clk            ),
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
    .mul_clk         (clk            ),
    .reset           (reset          ),
    .mul_signed      (es_mul_div_sign),
    .x               (es_rj_value    ),
    .y               (es_rkd_value   ),
    .result          (mul_result     )
);

// MEM stage
mem_stage mem_stage(
    .clk            (clk            ),
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
    .data_sram_rdata(data_sram_rdata)
);
// WB stage
wb_stage wb_stage(
    .clk            (clk            ),
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
    .clk         (clk            ),
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

endmodule
