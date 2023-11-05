`include "mycpu.h"

module if_stage(
    input  wire                         clk            ,
    input  wire                         reset          ,
    //allwoin
    input  wire                         ds_allowin     ,
    //brbus
    input  wire [`BR_BUS_WD       -1:0] br_bus         ,
    //to ds
    output wire                         fs_to_ds_valid ,
    output wire [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    //excp
    input  wire                         excp_flush       ,
    input  wire                         ertn_flush       ,
    input  wire                         refetch_flush    ,
    input  wire [31:0]                  ws_pc            ,
    input  wire [31:0]                  csr_eentry       ,
    input  wire [31:0]                  csr_era          ,
    // inst sram interface
    output wire        inst_req    ,
    output wire        inst_wr     ,
    output wire [ 1:0] inst_size   ,
    output wire [31:0] inst_addr   ,
    output wire [ 3:0] inst_wstrb  ,
    output wire [31:0] inst_wdata  ,
    input  wire        inst_addr_ok,
    input  wire        inst_data_ok,
    input  wire [31:0] inst_rdata  
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;
wire        pfs_readg_go;
wire        pfs_excp;
wire [ 0:0] pfs_excp_num;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

wire         br_stall;
wire         br_taken;
wire [ 31:0] br_target;
assign {br_stall, br_taken, br_target} = br_bus;

wire [31:0] fs_inst;
reg         fs_inst_valid;
reg  [31:0] fs_inst_r;
reg  [31:0] fs_pc;
reg         fs_excp;
reg  [ 0:0] fs_excp_num;
assign fs_to_ds_bus = {fs_excp    ,
                       fs_excp_num,
                       fs_inst    ,
                       fs_pc      };

// pre-IF stage
reg                  flush_valid;
reg [31:0] flush_target;

always @(posedge clk) begin
    if (reset) begin
        flush_valid <= 1'b0;
    end
    else if (inst_req && inst_addr_ok) begin
        flush_valid <= 1'b0;
    end
    else if (!(inst_req && inst_addr_ok)) begin
        if (excp_flush) begin
            flush_valid <= 1'b1;
            flush_target  <= csr_eentry;
        end
        else if (ertn_flush) begin
            flush_valid <= 1'b1;
            flush_target  <= csr_era;
        end
        else if (refetch_flush) begin
            flush_valid <= 1'b1;
            flush_target  <= ws_pc + 3'h4;
        end
        else if (br_taken && !br_stall) begin
            flush_valid <= 1'b1;
            flush_target  <= br_target;
        end
    end 
end

wire [31:0] seq_pc;
wire [31:0] nextpc;
assign to_fs_valid  = ~reset && pfs_readg_go;
assign pfs_readg_go = inst_req && inst_addr_ok || pfs_excp;
assign seq_pc       = fs_pc + 3'h4;
assign nextpc       = excp_flush                   ? csr_eentry :
                      ertn_flush                   ? csr_era    :
                      refetch_flush                ? ws_pc + 3'h4 :
                      flush_valid                  ? flush_target :
                      br_taken && !br_stall        ? br_target  : 
                                                     seq_pc; 

reg wait_data_ok;

assign inst_req    = fs_allowin && !wait_data_ok && !br_stall && !pfs_excp;
assign inst_wr     = 1'h0;
assign inst_size   = 2'h2;
assign inst_addr   = nextpc;
assign inst_wstrb  = 4'b0;
assign inst_wdata  = 32'b0;

wire pfs_excp_adef = (nextpc[0] || nextpc[1]);

assign pfs_excp = pfs_excp_adef;
assign pfs_excp_num = {pfs_excp_adef};


always @(posedge clk) begin
    if (reset) begin
        wait_data_ok <= 1'b0;
    end
    else if (fs_valid && !fs_ready_go && (flush_sign || br_taken && !br_stall)) begin
        wait_data_ok <= 1'b1;
    end
    else if (inst_data_ok && wait_data_ok) begin
        wait_data_ok <= 1'b0;
    end
end

// IF stage
assign fs_ready_go    = !wait_data_ok && inst_data_ok || fs_inst_valid || fs_excp;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin || flush_sign;
assign fs_to_ds_valid =  fs_valid && fs_ready_go;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
    else if (flush_sign || br_taken && !br_stall) begin
        fs_valid <= 1'b0;
    end

    if (reset) begin
        fs_pc <= 32'h1bfffffc;  //trick: to make nextpc be 0x1c000000 during reset 
        fs_excp      <= 1'b0;
        fs_excp_num  <= 1'b0;
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
        fs_excp      <= pfs_excp;
        fs_excp_num  <= pfs_excp_num;
    end

    if (reset) begin
        fs_inst_valid <= 1'b0;
    end
    else if (flush_sign || br_taken && !br_stall) begin
        fs_inst_valid <= 1'b0;
    end
    else if (ds_allowin) begin
        fs_inst_valid <= 1'b0;
    end
    else if (inst_data_ok && !ds_allowin) begin
        fs_inst_valid <= 1'b1;
        fs_inst_r <= inst_rdata;
    end
end

assign fs_inst = fs_inst_valid ? fs_inst_r : inst_rdata;

endmodule
