`include "mycpu.h"

module if_stage(
    input                          clk            ,
    input                          reset          ,
    //allwoin
    input                          ds_allowin     ,
    //brbus
    input  [`BR_BUS_WD       -1:0] br_bus         ,
    //to ds
    output                         fs_to_ds_valid ,
    output [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    // inst sram interface
    output        inst_sram_req  ,
	output        inst_sram_wr   ,
    output [ 3:0] inst_sram_wstrb,
	output [ 1:0] inst_sram_size ,
    output [31:0] inst_sram_addr ,
    output [31:0] inst_sram_wdata,
    input  [31:0] inst_sram_rdata,
	input         inst_sram_addr_ok,
	input         inst_sram_data_ok,
	input  [`MS_TO_FS_BUS_WD-1:0] ms_to_fs_bus
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [31:0] seq_pc;
wire [31:0] nextpc;

wire         br_branch;
wire         br_stall;
wire         br_taken;
wire [ 31:0] br_target;
assign {br_branch,br_stall,br_taken,br_target} = br_bus_r_valid? br_bus_r :
                                                                 br_bus   ;

reg fs_adef;
wire [31:0] fs_inst;
reg  [31:0] fs_pc;
assign fs_to_ds_bus = {fs_adef ,
                       fs_inst ,
                       fs_pc   };
wire fs_refetch;
wire fs_exl;
wire fs_ertn;
wire[31:0] fs_eentry;
wire[31:0] fs_era;
wire[31:0] fs_refetch_pc;
assign{fs_refetch,fs_refetch_pc,fs_exl,fs_ertn,fs_eentry,fs_era}=ms_to_fs_bus_r_valid? ms_to_fs_bus_r : 
                                                                 ms_to_fs_bus;
// pre-IF stage
wire pre_ready_go;
assign pre_ready_go=inst_sram_req & inst_sram_addr_ok || pre_adef;
assign to_fs_valid  = ~reset & pre_ready_go;
assign seq_pc       = fs_pc + 3'h4;
assign nextpc       =fs_exl   ? fs_eentry:
                     fs_ertn  ? fs_era:
					 fs_refetch? fs_refetch_pc:
                     br_taken && (fs_valid | bd_done) ? br_target : seq_pc; 

wire fs_reflush;
assign fs_reflush=ms_to_fs_bus[65]|ms_to_fs_bus[64]|ms_to_fs_bus[98];
wire fs_reflush_r;
assign fs_reflush_r=fs_exl | fs_ertn | fs_refetch;

wire pre_adef;
assign pre_adef=(nextpc[1:0]!=2'b0)? 1'b1:1'b0;

// IF stage
assign fs_ready_go    = (inst_sram_data_ok || inst_sram_rdata_r_valid) && ~abandon || fs_adef;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin || fs_reflush_r;
assign fs_to_ds_valid =  fs_valid && fs_ready_go;

always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
		
    if (reset) begin
        fs_pc <= 32'h1bfffffc;  //trick: to make nextpc be 0x1c000000 during reset 
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
		fs_adef<=pre_adef;
    end
end

//暂存指令
reg[31:0] inst_sram_rdata_r;
reg       inst_sram_rdata_r_valid;
always@(posedge clk)begin
  if(reset || fs_reflush)
    inst_sram_rdata_r_valid<=1'b0;
  else if(fs_valid && inst_sram_data_ok && ~ds_allowin)begin
    inst_sram_rdata_r<=inst_sram_rdata;
	inst_sram_rdata_r_valid<=1'b1;
	end 
  else if(ds_allowin)
    inst_sram_rdata_r_valid<=1'b0;
end

//清空流水线时清空返回的指令
reg abandon;
always@(posedge clk)begin
  if(reset)
    abandon<=1'b0;
  else if(fs_valid && ~fs_ready_go && fs_reflush)
    abandon<=1'b1;
  else if(inst_sram_data_ok)
    abandon<=1'b0;
end 

//暂存例外信息
reg[`MS_TO_FS_BUS_WD-1:0] ms_to_fs_bus_r;
reg ms_to_fs_bus_r_valid;
always@(posedge clk)begin
  if(reset)
    ms_to_fs_bus_r_valid<=1'b0;
  else if(~ms_to_fs_bus_r_valid && (ms_to_fs_bus[65] | ms_to_fs_bus[64] | ms_to_fs_bus[98]) && ~pre_ready_go)begin
    ms_to_fs_bus_r<=ms_to_fs_bus;
	ms_to_fs_bus_r_valid<=1'b1;
	end
  else if(ms_to_fs_bus_r_valid && pre_ready_go)
    ms_to_fs_bus_r_valid<=1'b0;
end

//暂存转移信息
reg[`BR_BUS_WD       -1:0] br_bus_r;
reg br_bus_r_valid;
reg bd_done;
always@(posedge clk)begin
  if(reset || fs_reflush)
    br_bus_r_valid<=1'b0;
  else if(br_bus[32] && ds_allowin && ~(fs_valid & pre_ready_go & fs_allowin))begin
    br_bus_r<=br_bus;
    br_bus_r_valid<=1'b1;
    end 
  else if(bd_done && pre_ready_go && fs_allowin)
    br_bus_r_valid<=1'b0;
end

always@(posedge clk)begin
  if(reset || fs_reflush)begin
    bd_done<=1'b0;
	end 
  else if(br_taken && ~bd_done &&(fs_valid ^ (pre_ready_go && fs_allowin)))begin
    bd_done<=1'b1;
	end 
  else if(bd_done && pre_ready_go && fs_allowin)begin
    bd_done<=1'b0;
	end 
end 
    
assign inst_sram_req   = fs_allowin && ~pre_adef && ~br_stall;
assign inst_sram_wr    = 1'b0;
assign inst_sram_wen   = 4'h0;
assign inst_sram_size  = 2'b10;
assign inst_sram_addr  = nextpc;
assign inst_sram_wdata = 32'b0;

assign fs_inst         = inst_sram_data_ok? inst_sram_rdata:inst_sram_rdata_r;

endmodule
 