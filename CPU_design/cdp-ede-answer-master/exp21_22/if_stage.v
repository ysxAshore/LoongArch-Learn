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
	input  [`MS_TO_FS_BUS_WD-1:0] ms_to_fs_bus,
	
	input  [31:0] ms_csr_dmw0,
	input  [31:0] ms_csr_dmw1,
	input  [31:0] ms_csr_crmd,
	input  [31:0] ms_csr_asid,
	
	output [18:0] s0_vppn,
	output [ 9:0] s0_asid,
	output        s0_va_bit12,
	input         s0_found,
	input  [19:0] s0_ppn,
    input  [ 5:0] s0_ps,
	input  [ 1:0] s0_plv,
	input  [ 1:0] s0_mat,
	input         s0_v ,
	
	output [ 1:0] mat     
	
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
															   
reg fs_tlbr;
reg fs_pif;
reg fs_ppi;
reg fs_adef;
wire [31:0] fs_inst;
reg  [31:0] fs_pc;
assign fs_to_ds_bus = {fs_tlbr ,
                       fs_pif  ,
					   fs_ppi  ,
                       fs_adef ,
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
assign pre_ready_go=inst_sram_req & inst_sram_addr_ok || pre_adef || pre_tlbr || pre_pif || pre_ppi;
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

//取指地址错例外?
wire pre_adef;
assign pre_adef=(nextpc[1:0]!=2'b0)||(ms_csr_crmd[4]==1'b1 && ms_csr_crmd[3]==1'b0 && dmw0_valid==1'b0 && dmw1_valid==1'b0 && nextpc[31]==1'b1)? 1'b1:1'b0;

//TLB相关例外
wire pre_tlbr;
wire pre_pif;
wire pre_ppi;
assign pre_tlbr=(ms_csr_crmd[4]==1'b1) && (ms_csr_crmd[3]==1'b0) && (dmw0_valid==1'b0) && (dmw1_valid==1'b0) && (s0_found==1'b0);
assign pre_pif =(ms_csr_crmd[4]==1'b1) && (ms_csr_crmd[3]==1'b0) && (dmw0_valid==1'b0) && (dmw1_valid==1'b0) && (s0_found==1'b1) && (s0_v==1'b0);
assign pre_ppi =(ms_csr_crmd[4]==1'b1) && (ms_csr_crmd[3]==1'b0) && (dmw0_valid==1'b0) && (dmw1_valid==1'b0) && (s0_found==1'b1) && (s0_v==1'b1) && (ms_csr_crmd[1:0]>s0_plv);


// IF stage
assign fs_ready_go    = (inst_sram_data_ok || inst_sram_rdata_r_valid) && ~abandon || fs_adef || fs_tlbr || fs_pif || fs_ppi;
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
        fs_pc  <= nextpc;
		fs_adef<=pre_adef;
		fs_tlbr<=pre_tlbr;
		fs_pif <=pre_pif;
		fs_ppi <=pre_ppi;
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

//清空流水线时清空返回的指令?
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

//直接映射地址翻译
wire dmw0_valid;
wire dmw1_valid;
wire[31:0] dmw0_pc;
wire[31:0] dmw1_pc;
assign dmw0_valid=((ms_csr_crmd[1:0]==2'b00)&ms_csr_dmw0[0] || (ms_csr_crmd[1:0]==2'b11)&ms_csr_dmw0[3])&&(nextpc[31:29]==ms_csr_dmw0[31:29]) ? 1'b1:1'b0;
assign dmw1_valid=((ms_csr_crmd[1:0]==2'b00)&ms_csr_dmw1[0] || (ms_csr_crmd[1:0]==2'b11)&ms_csr_dmw1[3])&&(nextpc[31:29]==ms_csr_dmw1[31:29]) ? 1'b1:1'b0;
assign dmw0_pc={ms_csr_dmw0[27:25],nextpc[28:0]}; 
assign dmw1_pc={ms_csr_dmw1[27:25],nextpc[28:0]}; 
 
//页表映射地址翻译
wire[31:0] tlb_pc;
assign s0_vppn=nextpc[31:13];
assign s0_asid=ms_csr_asid[9:0];
assign s0_va_bit12=nextpc[12];
assign tlb_pc=(s0_ps==6'd22)? {s0_ppn[19:10],nextpc[21:0]}:{s0_ppn[19:0],nextpc[11:0]}; 
 
assign inst_sram_req   = fs_allowin && ~pre_adef && ~br_stall && ~pre_tlbr && ~pre_pif && ~pre_ppi;
assign inst_sram_wr    = 1'b0;
assign inst_sram_wen   = 4'h0;
assign inst_sram_size  = 2'b10;
assign inst_sram_addr  = (ms_csr_crmd[4]==1'b0 && ms_csr_crmd[3]==1'b1)? nextpc :
                                                            dmw0_valid ? dmw0_pc: 
															dmw1_valid ? dmw1_pc:
															             tlb_pc;
assign inst_sram_wdata = 32'b0;
assign mat= (ms_csr_crmd[4]==1'b0 && ms_csr_crmd[3]==1'b1)? ms_csr_crmd[6:5]:
                                               dmw0_valid ? ms_csr_dmw0[5:4]: 
									           dmw1_valid ? ms_csr_dmw1[5:4]:
															s0_mat;

assign fs_inst         = inst_sram_data_ok? inst_sram_rdata:inst_sram_rdata_r;

endmodule
 