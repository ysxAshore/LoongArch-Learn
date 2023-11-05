`include "mycpu.h"

module wb_stage(
    input  wire                          clk           ,
    input  wire                          reset         ,
    //allowin
    output wire                          ws_allowin    ,
    //from ms
    input  wire                          ms_to_ws_valid,
    input  wire [`MS_TO_WS_BUS_WD -1:0]  ms_to_ws_bus  ,
    //to rf: for write back
    output wire [`WS_TO_RF_BUS_WD -1:0]  ws_to_rf_bus  ,
    //to ds
    output  wire [`WS_TO_DS_FORWARD_BUS - 1:0] ws_to_ds_forward_bus,
    //excp
    output wire [31:0] csr_era                          ,
    output wire [ 8:0] csr_esubcode                     ,
    output wire [ 5:0] csr_ecode                        ,
    output wire        va_error                         ,
    output wire [31:0] bad_va                           ,
    output wire        excp_tlbrefill                   ,
    output wire        excp_tlb                         ,
    output wire [18:0] excp_tlb_vppn                    ,
    output wire        excp_flush                       ,
    output wire        ertn_flush                       ,
    output wire        refetch_flush                    ,
    //csr wr
    output wire        csr_wr_en                        ,
    output wire [13:0] wr_csr_addr                      ,
    output wire [31:0] wr_csr_data                      ,
    //tlb inst
    output wire        tlbfill_en                       ,
    output wire        tlbwr_en                         ,
    output wire        tlbrd_en                         ,
    output wire        invtlb_en                        ,
    output wire [ 9:0] invtlb_asid                      ,
    output wire [18:0] invtlb_vpn                       ,
    output wire [ 4:0] invtlb_op                        ,
    output wire        tlbsrch_en                       ,
    output wire        tlbsrch_found                    ,
    output wire [ 3:0] tlbsrch_index                    ,
    //trace debug interface
    output wire [31:0] debug_wb_pc     ,
    output wire [ 3:0] debug_wb_rf_we  ,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata
);

reg         ws_valid;
wire        ws_ready_go;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

reg [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus_r;
wire [31:0] ws_error_va;
wire        ws_gr_we;
wire [ 4:0] ws_dest;
wire [31:0] ws_final_result;
wire [31:0] ws_pc;
wire [13:0] ws_excp_num;
wire        ws_ertn;
wire        ws_excp;
wire        ws_csr_we;
wire [13:0] ws_csr_waddr;
wire [31:0] ws_csr_wdata;
wire        ws_inst_tlbrd  ;
wire        ws_inst_tlbwr  ;
wire        ws_inst_tlbfill;
wire        ws_inst_invtlb ;
wire [ 9:0] ws_invtlb_asid;
wire [18:0] ws_invtlb_vpn;
wire        ws_inst_tlbsrch;
wire        data_tlb_found;
wire [ 3:0] data_tlb_index;
assign {ws_error_va    ,  //203:172
        ws_excp_num    ,  //171:158
        ws_ertn        ,  //157:157
        ws_excp        ,  //156:156
        ws_inst_tlbrd  ,  //155:155
        ws_inst_tlbwr  ,  //154:154
        ws_inst_tlbfill,  //153:153
        ws_inst_invtlb ,  //152:152
        ws_invtlb_asid ,  //151:142
        ws_invtlb_vpn  ,  //141:123
        ws_inst_tlbsrch,  //122:122
        data_tlb_found ,  //121:121
        data_tlb_index ,  //120:117
        ws_csr_we      ,  //116:116
        ws_csr_waddr   ,  //115:102
        ws_csr_wdata   ,  //101:70
        ws_gr_we       ,  //69:69
        ws_dest        ,  //68:64
        ws_final_result,  //63:32
        ws_pc             //31:0
       } = ms_to_ws_bus_r;

wire        rf_we;
wire [4 :0] rf_waddr;
wire [31:0] rf_wdata;
assign ws_to_rf_bus = {rf_we   ,  //37:37
                       rf_waddr,  //36:32
                       rf_wdata   //31:0
                      };

assign ws_ready_go = 1'b1;
assign ws_allowin  = !ws_valid || ws_ready_go;
always @(posedge clk) begin
    if (reset) begin
        ws_valid <= 1'b0;
    end
    else if (flush_sign) begin
        ws_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        ws_valid <= ms_to_ws_valid;
    end

    if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end

assign rf_we    = ws_gr_we && ws_valid && !ws_excp;
assign rf_waddr = ws_dest;
assign rf_wdata = ws_final_result;

assign ws_to_ds_forward_bus = {ws_valid && ws_gr_we, ws_dest, ws_final_result};

// tlb inst
assign {tlbsrch_en ,
        tlbwr_en   , 
        tlbfill_en , 
        tlbrd_en   ,
        invtlb_en } = {ws_inst_tlbsrch,
                       ws_inst_tlbwr  , 
                       ws_inst_tlbfill, 
                       ws_inst_tlbrd  ,
                       ws_inst_invtlb } & {5{ws_valid && !ws_excp}};
assign invtlb_op    = ws_dest;
assign invtlb_asid  = ws_invtlb_asid;
assign invtlb_vpn   = ws_invtlb_vpn;
assign tlbsrch_found = data_tlb_found;
assign tlbsrch_index = data_tlb_index;

// excp
assign csr_era      = ws_pc;
assign {csr_ecode, 
        va_error,
        bad_va, 
        csr_esubcode,
        excp_tlbrefill,
        excp_tlb, 
        excp_tlb_vppn}= ws_excp_num[ 0] ? {`ECODE_INT ,       1'b0, 32'b0      , 9'b0          ,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 1] ? {`ECODE_ADEF, excp_flush, ws_pc      , `ESUBCODE_ADEF,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 2] ? {`ECODE_TLBR, excp_flush, ws_pc      , 9'b0          , excp_flush, excp_flush,       ws_pc[31:13]} :
                        ws_excp_num[ 3] ? {`ECODE_PIF , excp_flush, ws_pc      , 9'b0          ,       1'b0, excp_flush,       ws_pc[31:13]} :
                        ws_excp_num[ 4] ? {`ECODE_PPI , excp_flush, ws_pc      , 9'b0          ,       1'b0, excp_flush,       ws_pc[31:13]} :
                        ws_excp_num[ 5] ? {`ECODE_SYS ,       1'b0, 32'b0      , 9'b0          ,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 6] ? {`ECODE_BRK ,       1'b0, 32'b0      , 9'b0          ,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 7] ? {`ECODE_INE ,       1'b0, 32'b0      , 9'b0          ,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 8] ? {`ECODE_ALE , excp_flush, ws_error_va, 9'b0          ,       1'b0,       1'b0,              19'b0} :
                        ws_excp_num[ 9] ? {`ECODE_TLBR, excp_flush, ws_error_va, 9'b0          , excp_flush, excp_flush, ws_error_va[31:13]} :
                        ws_excp_num[10] ? {`ECODE_PME , excp_flush, ws_error_va, 9'b0          ,       1'b0, excp_flush, ws_error_va[31:13]} :
                        ws_excp_num[11] ? {`ECODE_PPI , excp_flush, ws_error_va, 9'b0          ,       1'b0, excp_flush, ws_error_va[31:13]} :
                        ws_excp_num[12] ? {`ECODE_PIS , excp_flush, ws_error_va, 9'b0          ,       1'b0, excp_flush, ws_error_va[31:13]} :
                        ws_excp_num[13] ? {`ECODE_PIL , excp_flush, ws_error_va, 9'b0          ,       1'b0, excp_flush, ws_error_va[31:13]} :
                        69'b0;

assign excp_flush   = ws_excp && ws_valid;
assign ertn_flush   = ws_ertn && ws_valid;
assign refetch_flush= (ws_csr_we        ||
                       ws_inst_tlbsrch  ||
                       ws_inst_tlbwr    ||
                       ws_inst_tlbfill  ||
                       ws_inst_tlbrd    ||
                       ws_inst_invtlb) && ws_valid && !ws_excp;

assign csr_wr_en    = ws_csr_we && ws_valid && !ws_excp;
assign wr_csr_addr  = ws_csr_waddr;
assign wr_csr_data  = ws_csr_wdata; 

// debug info generate
assign debug_wb_pc       = ws_pc;
assign debug_wb_rf_we    = {4{rf_we}};
assign debug_wb_rf_wnum  = ws_dest;
assign debug_wb_rf_wdata = ws_final_result;

endmodule
