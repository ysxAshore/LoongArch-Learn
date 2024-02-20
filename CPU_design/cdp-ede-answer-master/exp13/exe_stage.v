`include "mycpu.h"

module exe_stage(
    input                          clk           ,
    input                          reset         ,
    //allowin
    input                          ms_allowin    ,
    output                         es_allowin    ,
    //from ds
    input                          ds_to_es_valid,
    input  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    //to ms
    output                         es_to_ms_valid,
    output [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    // data sram interface
    output        data_sram_en   ,
    output [ 3:0] data_sram_wen  ,
    output [31:0] data_sram_addr ,
    output [31:0] data_sram_wdata,
	
	output [4:0] es_to_ds_dest,
	output [31:0] es_to_ds_value,
	output es_load_op,
	output [13:0] es_to_ds_num,
	input ms_to_es_reflush
);

reg         es_valid      ;
wire        es_ready_go   ;

reg  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;
wire [11:0] es_alu_op     ;
wire        es_src1_is_pc ;
wire        es_src2_is_imm; 
wire        es_gr_we      ;
wire        es_mem_we     ;
wire [ 4:0] es_dest       ;
wire [31:0] es_imm        ;
wire [31:0] es_rj_value   ;
wire [31:0] es_rkd_value  ;
wire [31:0] es_pc         ;

wire        es_res_from_mem;
wire        es_load_op     ;

wire        es_mul;
wire        es_mulh;
wire        es_mulhu;
wire        es_div;
wire        es_mod;
wire        es_divu;
wire        es_modu;
wire        es_ld_b;
wire        es_ld_h;
wire        es_ld_bu;
wire        es_ld_hu;
wire        es_st_b;
wire        es_st_h;

wire        es_csrrd;
wire        es_csrwr;
wire        es_csrxchg;
wire        es_ertn;
wire        es_exl;
wire[5:0]   es_ecode;
wire[8:0]   es_esubcode;
wire[31:0]  es_csr_mask;
wire[13:0]  es_csr_num;

wire es_ld_w;
wire es_st_w;

wire es_rdcntvh;
wire es_rdcntvl;
wire es_rdcntid;

assign {es_rdcntvh     ,
        es_rdcntvl     ,
		es_rdcntid     ,

        es_ld_w        ,
        es_st_w        ,

        es_csrrd       ,
        es_csrwr       ,
		es_csrxchg     ,
		es_ertn        ,
		es_exl         ,
		es_ecode       ,
		es_esubcode    ,
		es_csr_mask    ,
		es_csr_num     ,

        es_ld_b        ,
		es_ld_h        ,
		es_ld_bu       ,
		es_ld_hu       ,
		es_st_b        ,
		es_st_h        ,

        es_mul         ,
        es_mulh        ,
		es_mulhu       ,
		es_div         ,
		es_mod         ,
		es_divu        ,
		es_modu        ,
 
        es_res_from_mem,
        es_alu_op      ,  //149:138
        es_load_op     ,  //137:137
        es_src1_is_pc  ,  //136:136
        es_src2_is_imm ,  //135:135
        es_gr_we       ,  //134:134
        es_mem_we      ,  //133:133
        es_dest        ,  //132:128
        es_imm         ,  //127:96
        es_rj_value    ,  //95 :64
        es_rkd_value   ,  //63 :32
        es_pc             //31 :0
       } = ds_to_es_bus_r;

wire [31:0] es_alu_src1   ;
wire [31:0] es_alu_src2   ;
wire [31:0] es_alu_result ;
wire [31:0] es_result;

//assign es_res_from_mem = es_load_op;
assign es_to_ms_bus = {es_rdcntvh     ,
                       es_rdcntvl     ,
                       es_rdcntid     ,

                       es_csrrd       ,
                       es_csrwr       ,
		               es_csrxchg     ,
		               es_ertn        ,
		               es_to_ms_exl   ,
		               es_to_ms_ecode ,
		               es_esubcode    ,
		               es_csr_mask    ,
		               es_csr_num     ,
					   es_rkd_value   ,

                       es_ld_b        ,
                       es_ld_h        ,
                       es_ld_bu       ,
                       es_ld_hu       ,					   

                       es_res_from_mem,  //70:70
                       es_gr_we       ,  //69:69
                       es_dest        ,  //68:64
                       es_result      ,  //63:32
                       es_pc             //31:0
                      };

assign es_ready_go    = ~((es_div|es_mod) & ~div_dout_valid) && ~((es_divu|es_modu) & ~divu_dout_valid) || ms_to_es_reflush;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go;
always @(posedge clk) begin
    if (reset | ms_to_es_reflush) begin     
        es_valid <= 1'b0;
    end
    else if (es_allowin) begin 
        es_valid <= ds_to_es_valid;
    end

    if (ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

assign es_alu_src1 = es_src1_is_pc  ? es_pc[31:0] : 
                                      es_rj_value;
                                      
assign es_alu_src2 = es_src2_is_imm ? es_imm : 
                                      es_rkd_value;

alu u_alu(
    .alu_op     (es_alu_op    ),
    .alu_src1   (es_alu_src1  ),
    .alu_src2   (es_alu_src2  ),
    .alu_result (es_alu_result)
    );

//乘法部件
wire[31:0] src1;
wire[31:0] src2;
wire[63:0] unsigned_prod;
wire[63:0] signed_prod;

assign src1=es_alu_src1;
assign src2=es_alu_src2;

assign unsigned_prod=src1 * src2;
assign signed_prod  =$signed(src1) * $signed(src2);

//除法部件
reg div_dividend_valid;
wire div_dividend_ready;
wire[31:0] div_dividend_data;
reg div_divisor_valid;
wire div_divisor_ready;
wire[31:0] div_divisor_data;
wire div_dout_valid;
wire[63:0] div_dout_data;

reg divu_dividend_valid;
wire divu_dividend_ready;
wire[31:0] divu_dividend_data;
reg divu_divisor_valid;
wire divu_divisor_ready;
wire[31:0] divu_divisor_data;
wire divu_dout_valid;
wire[63:0] divu_dout_data;

assign div_dividend_data=es_rj_value;
assign div_divisor_data=es_rkd_value;
assign divu_dividend_data=es_rj_value;
assign divu_divisor_data=es_rkd_value;

wire div_bus;
wire mod_bus;
wire divu_bus;
wire modu_bus;
assign div_bus=ds_to_es_bus[154];
assign mod_bus=ds_to_es_bus[153];
assign divu_bus=ds_to_es_bus[152];
assign modu_bus=ds_to_es_bus[151];

always@(posedge clk)begin
  if(reset | ms_to_es_reflush)begin 
    div_dividend_valid<=1'b0;
	div_divisor_valid<=1'b0;
	end 
  else if(es_allowin & ds_to_es_valid & (div_bus|mod_bus) & ~div_dividend_valid)begin
    div_dividend_valid<=1'b1;
	div_divisor_valid<=1'b1;
	end
  else if(div_dividend_valid & div_dividend_ready)begin
    div_dividend_valid<=1'b0;
	div_divisor_valid<=1'b0;
	end 
end 

always@(posedge clk)begin
  if(reset | ms_to_es_reflush)begin 
    divu_dividend_valid<=1'b0;
	divu_divisor_valid<=1'b0;
	end 
  else if(es_allowin & ds_to_es_valid & (divu_bus|modu_bus) & ~divu_dividend_valid)begin
    divu_dividend_valid<=1'b1;
	divu_divisor_valid<=1'b1;
	end
  else if(divu_dividend_valid & divu_dividend_ready)begin
    divu_dividend_valid<=1'b0;
	divu_divisor_valid<=1'b0;
	end 
end

div_signed u_div(
                 .aclk(clk),
				 .s_axis_dividend_tvalid(div_dividend_valid),
				 .s_axis_dividend_tready(div_dividend_ready),
				 .s_axis_dividend_tdata(div_dividend_data),
				 .s_axis_divisor_tvalid(div_divisor_valid),
				 .s_axis_divisor_tready(div_divisor_ready),
				 .s_axis_divisor_tdata(div_divisor_data),
				 .m_axis_dout_tvalid(div_dout_valid),
				 .m_axis_dout_tdata(div_dout_data)
				 );	

div_unsigned u_divu(
                 .aclk(clk),
				 .s_axis_dividend_tvalid(divu_dividend_valid),
				 .s_axis_dividend_tready(divu_dividend_ready),
				 .s_axis_dividend_tdata(divu_dividend_data),
				 .s_axis_divisor_tvalid(divu_divisor_valid),
				 .s_axis_divisor_tready(divu_divisor_ready),
				 .s_axis_divisor_tdata(divu_divisor_data),
				 .m_axis_dout_tvalid(divu_dout_valid),
				 .m_axis_dout_tdata(divu_dout_data)
				 );						 
 


assign es_result=es_mul? unsigned_prod[31:0]   :
                 es_mulh? signed_prod[63:32]   :
				 es_mulhu? unsigned_prod[63:32]:
				 es_div? div_dout_data[63:32]  :
				 es_mod? div_dout_data[31:0]   :
				 es_divu? divu_dout_data[63:32]:
				 es_modu? divu_dout_data[31:0] :		 
				          es_alu_result;

assign data_sram_en    = (es_res_from_mem || es_mem_we) && es_valid && ~ms_to_es_reflush && ~es_to_ms_exl;
assign data_sram_wen   = es_mem_we && es_valid && ~es_to_ms_exl && ~ms_to_es_reflush? ( es_st_b? ((es_alu_result[1:0]==2'b00)? 4'b0001:
                                                                                                  (es_alu_result[1:0]==2'b01)? 4'b0010:    
                                                                                                  (es_alu_result[1:0]==2'b10)? 4'b0100: 
                      										                                                                   4'b1000):
										                                                es_st_h? ((es_alu_result[1:0]==2'b00)? 4'b0011:
												                                                                               4'b1100):
                                                                                                                               4'hf   ): 
																						                                       4'h0  ;
assign data_sram_addr  = es_alu_result;
assign data_sram_wdata = es_st_b? {4{es_rkd_value[7:0]}}:
                         es_st_h? {2{es_rkd_value[15:0]}}:
                                     es_rkd_value;

wire es_to_ms_exl;
wire[5:0] es_to_ms_ecode;
assign es_to_ms_exl=((es_ld_w|es_st_w)&(es_alu_result[1:0]!=2'b0) || (es_ld_h|es_ld_hu|es_st_h)&(es_alu_result[0]!=1'b0))? 1'b1:es_exl;
assign es_to_ms_ecode=((es_ld_w|es_st_w)&(es_alu_result[1:0]!=2'b0) || (es_ld_h|es_ld_hu|es_st_h)&(es_alu_result[0]!=1'b0))? 6'h09:es_ecode;

wire[13:0] es_to_ds_num;
assign es_to_ds_num=(es_csrwr | es_csrxchg)&es_valid? es_csr_num:14'h08;

assign es_to_ds_dest= es_valid? es_dest:5'b00000;
assign es_to_ds_value=es_result;

endmodule
