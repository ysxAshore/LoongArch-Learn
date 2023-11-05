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
    output wire        excp_flush                       ,
    output wire        ertn_flush                       ,
    output wire        refetch_flush                    ,
    //csr wr
    output wire        csr_wr_en                        ,
    output wire [13:0] wr_csr_addr                      ,
    output wire [31:0] wr_csr_data                      ,
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
wire [ 5:0] ws_excp_num;
wire        ws_ertn;
wire        ws_excp;
wire        ws_csr_we;
wire [13:0] ws_csr_waddr;
wire [31:0] ws_csr_wdata;
assign {ws_error_va    ,  //156:125
        ws_excp_num    ,  //124:119
        ws_ertn        ,  //118:118
        ws_excp        ,  //117:117
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

// excp
assign csr_era      = ws_pc;
assign {csr_ecode, 
        va_error,
        bad_va, 
        csr_esubcode} = ws_excp_num[ 0] ? {`ECODE_INT ,       1'b0, 32'b0      , 9'b0          } :
                        ws_excp_num[ 1] ? {`ECODE_ADEF, excp_flush, ws_pc      , `ESUBCODE_ADEF} :
                        ws_excp_num[ 2] ? {`ECODE_SYS ,       1'b0, 32'b0      , 9'b0          } :
                        ws_excp_num[ 3] ? {`ECODE_BRK ,       1'b0, 32'b0      , 9'b0          } :
                        ws_excp_num[ 4] ? {`ECODE_INE ,       1'b0, 32'b0      , 9'b0          } :
                        ws_excp_num[ 5] ? {`ECODE_ALE , excp_flush, ws_error_va, 9'b0          } :
                        47'b0;
assign excp_flush   = ws_excp && ws_valid;
assign ertn_flush   = ws_ertn && ws_valid;
assign refetch_flush= ws_csr_we && ws_valid && !ws_excp;
assign csr_wr_en    = ws_csr_we && ws_valid && !ws_excp;
assign wr_csr_addr  = ws_csr_waddr;
assign wr_csr_data  = ws_csr_wdata; 

// debug info generate
assign debug_wb_pc       = ws_pc;
assign debug_wb_rf_we    = {4{rf_we}};
assign debug_wb_rf_wnum  = ws_dest;
assign debug_wb_rf_wdata = ws_final_result;

endmodule
