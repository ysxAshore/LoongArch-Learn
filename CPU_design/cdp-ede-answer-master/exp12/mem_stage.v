`include "mycpu.h"

module mem_stage(
    input                          clk           ,
    input                          reset         ,
    //allowin
    input                          ws_allowin    ,
    output                         ms_allowin    ,
    //from es
    input                          es_to_ms_valid,
    input  [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    //to ws
    output                         ms_to_ws_valid,
    output [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus  ,
    //from data-sram
    input  [31                 :0] data_sram_rdata,
	
	output [4:0] ms_to_ds_dest,
	output [31:0] ms_to_ds_value,
	
	output ms_to_ds_reflush,
	output ms_to_es_reflush,
	output [`MS_TO_FS_BUS_WD-1:0] ms_to_fs_bus
);

reg         ms_valid;
wire        ms_ready_go;

reg [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus_r;
wire        ms_res_from_mem;
wire        ms_gr_we;
wire [ 4:0] ms_dest;
wire [31:0] ms_alu_result;
wire [31:0] ms_pc;
wire        ms_ld_b;
wire        ms_ld_h;
wire        ms_ld_bu;
wire        ms_ld_hu;

wire        ms_csrrd;
wire        ms_csrwr;
wire        ms_csrxchg;
wire        ms_ertn;
wire        ms_exl;
wire[5:0]   ms_ecode;
wire[8:0]   ms_esubcode;
wire[31:0]  ms_csr_mask;
wire[13:0]  ms_csr_num;
wire[31:0]  ms_rkd_value;

assign {ms_csrrd       ,
        ms_csrwr       ,
		ms_csrxchg     ,
	    ms_ertn        ,
	    ms_exl         ,
		ms_ecode       ,
		ms_esubcode    ,
	    ms_csr_mask    ,
		ms_csr_num     ,
		ms_rkd_value   ,

        ms_ld_b        ,
        ms_ld_h        ,
		ms_ld_bu       ,
		ms_ld_hu       ,

        ms_res_from_mem,  //70:70
        ms_gr_we       ,  //69:69
        ms_dest        ,  //68:64
        ms_alu_result  ,  //63:32
        ms_pc             //31:0
       } = es_to_ms_bus_r;

wire [31:0] mem_result;
wire [31:0] ms_final_result;

assign ms_to_ws_bus = {ms_gr_we       ,  //69:69
                       ms_dest        ,  //68:64
                       ms_final_result,  //63:32
                       ms_pc             //31:0
                      };

assign ms_ready_go    = 1'b1;
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go && ~reflush;
always @(posedge clk) begin
    if (reset | reflush) begin
        ms_valid <= 1'b0;
    end
    else if (ms_allowin) begin
        ms_valid <= es_to_ms_valid;
    end

    if (es_to_ms_valid && ms_allowin) begin
        es_to_ms_bus_r  <= es_to_ms_bus;
    end
end

//控制状态寄存器
wire csr_we;
wire[31:0] csr_wvalue;
assign csr_we=ms_csrwr | ms_csrxchg;
assign csr_wvalue=ms_rkd_value;

//crmd
reg[1:0] csr_crmd_plv;
reg csr_crmd_ie;
always@(posedge clk)begin
  if(reset)begin
    csr_crmd_plv<=2'b0;
	csr_crmd_ie<=1'b0;
	end 
  else if(ms_exl)begin
    csr_crmd_plv<=2'b0;
	csr_crmd_ie<=1'b0;
	end 
  else if(ms_ertn)begin
    csr_crmd_plv<=csr_prmd_pplv;
	csr_crmd_ie<=csr_prmd_pie;
	end 
  else if(ms_csrxchg && ms_csr_num==`CSR_CRMD && ms_valid)begin
    csr_crmd_plv<=ms_csr_mask[1:0]&csr_wvalue[1:0] | ~ms_csr_mask[1:0]&csr_crmd_plv;
	csr_crmd_ie<=ms_csr_mask[2]&csr_wvalue[2] | ~ms_csr_mask[2]&csr_crmd_ie;
	end 
  else if(ms_csrwr && ms_csr_num==`CSR_CRMD && ms_valid)begin
    csr_crmd_plv<=csr_wvalue[1:0];
	csr_crmd_ie<=csr_wvalue[2];
end 
end

//prmd
reg[1:0] csr_prmd_pplv;
reg csr_prmd_pie;
always@(posedge clk)begin 
  if(ms_exl)begin
    csr_prmd_pplv<=csr_crmd_plv;
	csr_prmd_pie<=csr_crmd_ie;
	end  
  else if(ms_csrxchg && ms_csr_num==`CSR_PRMD && ms_valid)begin
    csr_prmd_pplv<=ms_csr_mask[1:0]&csr_wvalue[1:0] | ~ms_csr_mask[1:0]&csr_prmd_pplv;
	csr_prmd_pie<=ms_csr_mask[2]&csr_wvalue[2] | ~ms_csr_mask[2]&csr_prmd_pie;
	end 
  else if(ms_csrwr && ms_csr_num==`CSR_PRMD && ms_valid)begin
    csr_prmd_pplv<=csr_wvalue[1:0];
	csr_prmd_pie<=csr_wvalue[2];
	end 
end
//estat
reg[12:0] csr_estat_is;
wire[7:0] hw_int_in;
wire ipi_int_in;
wire[31:0] timer_cnt;
assign hw_int_in=8'd0;
assign ipi_int_in=1'b0;
assign timer_cnt=32'd1;
always@(posedge clk)begin
  if(reset)
    csr_estat_is[1:0]<=2'b0;
  else if(ms_csrxchg && ms_csr_num==`CSR_ESTAT && ms_valid)
    csr_estat_is[1:0]<=ms_csr_mask[1:0]&csr_wvalue[1:0] | ~ms_csr_mask[1:0]&csr_estat_is[1:0];
  else if(ms_csrwr && ms_csr_num==`CSR_ESTAT && ms_valid)
    csr_estat_is[1:0]<=csr_wvalue[1:0];
	
  csr_estat_is[9:2]<=hw_int_in[7:0];
  
  csr_estat_is[10]<=1'b0;
  
  if(timer_cnt[31:0]==32'd0)
    csr_estat_is[11]<=1'b1;
  else if(ms_csrxchg && ms_csr_num==`CSR_TICLR && ms_csr_mask[0] && csr_wvalue[0] && ms_valid)
    csr_estat_is[11]<=1'b0;
  else if(ms_csrwr && ms_csr_num==`CSR_TICLR && csr_wvalue[0] && ms_valid)
    csr_estat_is[11]<=1'b0;

  csr_estat_is[12]<=ipi_int_in;
end 

reg[5:0] csr_estat_ecode;
reg[8:0] csr_estat_esubcod;
always@(posedge clk)begin
  if(ms_exl)begin
    csr_estat_ecode<=ms_ecode;
	csr_estat_esubcod<=ms_esubcode;
	end 
end 

//era
reg[31:0] csr_era_pc;
always@(posedge clk)begin
  if(ms_exl)
    csr_era_pc<=ms_pc;
  else if(ms_csrxchg && ms_csr_num==`CSR_ERA && ms_valid)
    csr_era_pc<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_era_pc;
  else if(ms_csrwr && ms_csr_num==`CSR_ERA && ms_valid)
    csr_era_pc<=csr_wvalue;
end 

//eentry
reg[25:0] csr_eentry_va;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_EENTRY)
     csr_eentry_va<=ms_csr_mask[25:0]&csr_wvalue[31:6] | ~ms_csr_mask[25:0]&csr_eentry_va;
  else if(ms_csrwr && ms_csr_num==`CSR_EENTRY)
     csr_eentry_va<=csr_wvalue[31:6];
end 

//save
reg[31:0] csr_save0_data;
reg[31:0] csr_save1_data;
reg[31:0] csr_save2_data;
reg[31:0] csr_save3_data;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE0)
    csr_save0_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save0_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE0)
    csr_save0_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE1)
    csr_save1_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save1_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE1)
    csr_save1_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE2)
    csr_save2_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save2_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE2)
    csr_save2_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE3)
    csr_save3_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save3_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE3)
    csr_save3_data<=csr_wvalue;
end 

wire[31:0] csr_crmd;
wire[31:0] csr_prmd;
wire[31:0] csr_estat;
wire[31:0] csr_era;
wire[31:0] csr_eentry;
wire[31:0] csr_save0,csr_save1,csr_save2,csr_save3;
assign csr_crmd={28'd0,1'b1,csr_crmd_ie,csr_crmd_plv};
assign csr_prmd={28'd0,csr_prmd_pie,csr_prmd_pplv};
assign csr_estat={1'b0,csr_estat_esubcod,csr_estat_ecode,3'd0,csr_estat_is};
assign csr_era=csr_era_pc;
assign csr_eentry={csr_eentry_va,6'd0};
assign csr_save0=csr_save0_data;
assign csr_save1=csr_save1_data;
assign csr_save2=csr_save2_data;
assign csr_save3=csr_save3_data;

wire[31:0] csr_rvalue;
assign csr_rvalue={32{ms_csr_num==`CSR_CRMD}}&csr_crmd | {32{ms_csr_num==`CSR_PRMD}}&csr_prmd | {32{ms_csr_num==`CSR_ESTAT}}&csr_estat | {32{ms_csr_num==`CSR_ERA}}&csr_era|
                  {32{ms_csr_num==`CSR_EENTRY}}&csr_eentry | {32{ms_csr_num==`CSR_SAVE0}}&csr_save0 | {32{ms_csr_num==`CSR_SAVE1}}&csr_save1 | {32{ms_csr_num==`CSR_SAVE2}}&csr_save2|
				  {32{ms_csr_num==`CSR_SAVE3}}&csr_save3; 

assign mem_result = data_sram_rdata;

assign ms_final_result = ms_ld_b? ((ms_alu_result[1:0]==2'b00)? {{24{mem_result[7]}},mem_result[7:0]} :
                                   (ms_alu_result[1:0]==2'b01)? {{24{mem_result[15]}},mem_result[15:8]}:
								   (ms_alu_result[1:0]==2'b10)? {{24{mem_result[23]}},mem_result[23:16]}:
								                                {{24{mem_result[31]}},mem_result[31:24]}) :
						 ms_ld_h? ((ms_alu_result[1:0]==2'b00)? {{16{mem_result[15]}},mem_result[15:0]} :
						                                        {{16{mem_result[31]}},mem_result[31:16]}):
						 ms_ld_bu? ((ms_alu_result[1:0]==2'b00)? {{24'd0},mem_result[7:0]} :
                                    (ms_alu_result[1:0]==2'b01)? {{24'd0},mem_result[15:8]}:
								    (ms_alu_result[1:0]==2'b10)? {{24'd0},mem_result[23:16]}:
								                                 {{24'd0},mem_result[31:24]}) :
						ms_ld_hu? ((ms_alu_result[1:0]==2'b00)?  {{16'd0},mem_result[15:0]} :
						                                         {{16'd0},mem_result[31:16]}):
                        ms_res_from_mem ?                        mem_result :
						
						(ms_csrrd|ms_csrwr|ms_csrxchg)?          csr_rvalue: 
                                                                 ms_alu_result;

wire reflush;
assign reflush=(ms_exl|ms_ertn)&ms_valid;
assign ms_to_ds_reflush=reflush;
assign ms_to_es_reflush=reflush;
assign ms_to_fs_bus={ms_exl&ms_valid,
                     ms_ertn&ms_valid,
					 csr_eentry,
					 csr_era};
								 
assign ms_to_ds_dest= ms_valid? ms_dest:5'b00000;
assign ms_to_ds_value=ms_final_result;

endmodule
