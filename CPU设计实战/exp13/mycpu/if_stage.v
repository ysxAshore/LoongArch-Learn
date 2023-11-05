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
    output wire        inst_sram_en   ,
    output wire [ 3:0] inst_sram_wen  ,
    output wire [31:0] inst_sram_addr ,
    output wire [31:0] inst_sram_wdata,
    input  wire [31:0] inst_sram_rdata
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;
wire        pfs_excp;
wire [ 0:0] pfs_excp_num;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

wire         br_taken_cancel;
wire         br_taken;
wire [ 31:0] br_target;
assign {br_taken_cancel, br_taken, br_target} = br_bus;

wire [31:0] fs_inst;
reg  [31:0] fs_pc;
reg         fs_excp;
reg  [ 0:0] fs_excp_num;
assign fs_to_ds_bus = {fs_excp    ,
                       fs_excp_num,
                       fs_inst    ,
                       fs_pc      };

// pre-IF stage
wire [31:0] seq_pc;
wire [31:0] nextpc;
assign to_fs_valid  = ~reset;
assign seq_pc       = fs_pc + 3'h4;
assign nextpc       = excp_flush                   ? csr_eentry :
                      ertn_flush                   ? csr_era    :
                      refetch_flush                ? ws_pc + 3'h4 :
                      br_taken                     ? br_target  : 
                                                     seq_pc; 

wire pfs_excp_adef = (nextpc[0] || nextpc[1]);

assign pfs_excp = pfs_excp_adef;
assign pfs_excp_num = {pfs_excp_adef};

// IF stage
assign fs_ready_go    = 1'b1;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin || flush_sign;
assign fs_to_ds_valid =  fs_valid && fs_ready_go;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
    else if (br_taken_cancel || flush_sign) begin
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
end

assign inst_sram_en    = to_fs_valid && fs_allowin;
assign inst_sram_wen   = 4'h0;
assign inst_sram_addr  = nextpc;
assign inst_sram_wdata = 32'b0;

assign fs_inst         = inst_sram_rdata;

endmodule
