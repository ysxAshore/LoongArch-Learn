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
	input                          data_sram_data_ok,
	
	output [ 4:0] ms_to_ds_dest,
	output [31:0] ms_to_ds_value,
	
	output ms_to_ds_reflush,
	output ms_to_es_reflush,
	output [`MS_TO_FS_BUS_WD-1:0] ms_to_fs_bus,
	output has_int,
	output ms_to_ds_ready,
	
	output [18:0] ms_to_es_vppn,
	output [ 9:0] ms_to_es_asid,
	
	//TLB read port
    output[ 3 :0] r_index,
    input         r_e    ,
    input [ 18:0] r_vppn ,
    input [ 5 :0] r_ps   ,
    input [ 9 :0] r_asid ,
    input         r_g    ,
    input [ 19:0] r_ppn0 ,
    input [ 1 :0] r_plv0 ,
    input [ 1 :0] r_mat0 ,
    input         r_d0   ,
    input         r_v0   ,
    input [ 19:0] r_ppn1 ,
    input [ 1 :0] r_plv1 ,
    input [ 1 :0] r_mat1 ,
    input         r_d1   ,
    input         r_v1   ,
	
	//TLB write port 
    output         we_tlb , 
    output [ 3 :0] w_index,
    output         w_e    ,
    output [ 18:0] w_vppn ,
    output [ 5 :0] w_ps   ,
    output [ 9 :0] w_asid ,
    output         w_g    ,
    output [ 19:0] w_ppn0 ,
    output [ 1 :0] w_plv0 ,
    output [ 1 :0] w_mat0 ,
    output         w_d0   ,
    output         w_v0   ,
    output [ 19:0] w_ppn1 ,
    output [ 1 :0] w_plv1 ,
    output [ 1 :0] w_mat1 ,
    output         w_d1   ,
    output         w_v1   ,
	
	input [ 3 :0] s1_index,
	input         s1_found,
	
	output[ 31:0] csr_dmw0,
	output[ 31:0] csr_dmw1,
	output[ 31:0] csr_crmd,
	output[ 31:0] csr_asid
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

wire ms_rdcntvh;
wire ms_rdcntvl;
wire ms_rdcntid;

wire ms_lw_sw;

wire ms_tlbsrch;
wire ms_tlbsrch_r;
wire ms_tlbrd;
wire ms_tlbwr;
wire ms_tlbfill;
wire ms_invtlb;

wire es_tlb;
assign ms_tlbsrch=es_to_ms_bus[181];

wire ms_cacop;

assign {ms_cacop       ,

        es_tlb         ,

        ms_tlbsrch_r   ,
        ms_tlbrd       ,
        ms_tlbwr       ,
		ms_tlbfill     ,
		ms_invtlb      ,

        ms_lw_sw       ,

        ms_rdcntvh     ,
        ms_rdcntvl     ,
        ms_rdcntid     ,
   
        ms_csrrd       ,
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

assign ms_ready_go    = ~(ms_lw_sw && ~data_sram_data_ok);
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go && ~reflush;
always @(posedge clk) begin
    if (reset | reflush | refetch) begin
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
wire addr_err;
wire[31:0] ms_vaddr;
assign csr_we=ms_csrwr | ms_csrxchg;
assign csr_wvalue=ms_rkd_value;
assign addr_err=ms_ecode==`ECODE_ADEF || ms_ecode==`ECODE_ALE || ms_ecode==`ECODE_PIL || ms_ecode==`ECODE_PIS || ms_ecode==`ECODE_PIF || ms_ecode==`ECODE_PME ||
                ms_ecode==`ECODE_PPI  || ms_ecode==`ECODE_TLBR ||ms_ecode==`ECODE_ADEM;
assign ms_vaddr=ms_alu_result;

//crmd
reg[1:0] csr_crmd_plv;
reg csr_crmd_ie;
reg csr_crmd_da;
reg csr_crmd_pg;
reg[1:0] csr_crmd_datf;
reg[1:0] csr_crmd_datm;
always@(posedge clk)begin
  if(reset)begin
    csr_crmd_plv <=2'b0;
	csr_crmd_ie  <=1'b0;
	csr_crmd_da  <=1'b1;
	csr_crmd_pg  <=1'b0;
	csr_crmd_datf<=2'b0;
	csr_crmd_datm<=2'b0;
	end 
  else if(ms_exl && ms_valid)begin
    csr_crmd_plv<=2'b0;
	csr_crmd_ie <=1'b0;
	if(ms_ecode==`ECODE_TLBR)begin
	  csr_crmd_da <=1;
	  csr_crmd_pg <=0;
	  end 
	end 
  else if(ms_ertn && ms_valid)begin
    csr_crmd_plv<=csr_prmd_pplv;
	csr_crmd_ie <=csr_prmd_pie;
	if(csr_estat_ecode==`ECODE_TLBR)begin
	  csr_crmd_da <=0;
	  csr_crmd_pg <=1;
	  end 
	end 
  else if(ms_csrxchg && ms_csr_num==`CSR_CRMD && ms_valid)begin
    csr_crmd_plv <=ms_csr_mask[1:0]&csr_wvalue[1:0] | ~ms_csr_mask[1:0]&csr_crmd_plv;
	csr_crmd_ie  <=ms_csr_mask[2]&csr_wvalue[2] | ~ms_csr_mask[2]&csr_crmd_ie;
	csr_crmd_da  <=ms_csr_mask[3]&csr_wvalue[3] | ~ms_csr_mask[3]&csr_crmd_da;
	csr_crmd_pg  <=ms_csr_mask[4]&csr_wvalue[4] | ~ms_csr_mask[3]&csr_crmd_pg;
	csr_crmd_datf<=ms_csr_mask[6:5]&csr_wvalue[6:5] | ~ms_csr_mask[6:5]&csr_crmd_datf;
	csr_crmd_datm<=ms_csr_mask[8:7]&csr_wvalue[8:7] | ~ms_csr_mask[8:7]&csr_crmd_datm;
	end 
  else if(ms_csrwr && ms_csr_num==`CSR_CRMD && ms_valid)begin
    csr_crmd_plv <=csr_wvalue[1:0];
	csr_crmd_ie  <=csr_wvalue[2];
	csr_crmd_da  <=csr_wvalue[3];
	csr_crmd_pg  <=csr_wvalue[4];
	csr_crmd_datf<=csr_wvalue[6:5];
	csr_crmd_datm<=csr_wvalue[8:7];
    end 
end

//prmd
reg[1:0] csr_prmd_pplv;
reg csr_prmd_pie;
always@(posedge clk)begin 
  if(ms_exl && ms_valid)begin
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

//ecfg
reg[12:0] csr_ecfg_lie;
always@(posedge clk)begin
  if(reset)
    csr_ecfg_lie<=13'b0;
  else if(ms_csrxchg && ms_csr_num==`CSR_ECFG && ms_valid)
    csr_ecfg_lie<=ms_csr_mask[12:0]&csr_wvalue[12:0] | ~ms_csr_mask[12:0]&csr_ecfg_lie[12:0];
  else if(ms_csrwr && ms_csr_num==`CSR_ECFG && ms_valid)
    csr_ecfg_lie<=csr_wvalue[12:0];
end 

//estat
reg[12:0] csr_estat_is;
wire[7:0] hw_int_in;
wire ipi_int_in;
assign hw_int_in=8'd0;
assign ipi_int_in=1'b0;
always@(posedge clk)begin
  if(reset)
    csr_estat_is[1:0]<=2'b0;
  else if(ms_csrxchg && ms_csr_num==`CSR_ESTAT && ms_valid)
    csr_estat_is[1:0]<=ms_csr_mask[1:0]&csr_wvalue[1:0] | ~ms_csr_mask[1:0]&csr_estat_is[1:0];
  else if(ms_csrwr && ms_csr_num==`CSR_ESTAT && ms_valid)
    csr_estat_is[1:0]<=csr_wvalue[1:0];
	
  csr_estat_is[9:2]<=hw_int_in[7:0];
  
  csr_estat_is[10]<=1'b0;
  
  if(csr_tcfg_en && timer_cnt[31:0]==32'd0)
    csr_estat_is[11]<=1'b1;
  else if(ms_csrxchg && ms_csr_num==`CSR_TICLR && ms_csr_mask[0] && csr_wvalue[0] && ms_valid)
    csr_estat_is[11]<=1'b0;
  else if(ms_csrwr && ms_csr_num==`CSR_TICLR && csr_wvalue[0] && ms_valid)
    csr_estat_is[11]<=1'b0;
  csr_estat_is[12]<=ipi_int_in;
end
assign has_int = ((csr_estat_is[12:0] & csr_ecfg_lie[12:0]) != 13'b0) && (csr_crmd_ie == 1'b1) ; 


reg[5:0] csr_estat_ecode;
reg[8:0] csr_estat_esubcod;
always@(posedge clk)begin
  if(ms_exl && ms_valid)begin
    csr_estat_ecode<=ms_ecode;
	csr_estat_esubcod<=ms_esubcode;
	end 
end 

//era
reg[31:0] csr_era_pc;
always@(posedge clk)begin
  if(ms_exl && ms_valid)
    csr_era_pc<=ms_pc;
  else if(ms_csrxchg && ms_csr_num==`CSR_ERA && ms_valid)
    csr_era_pc<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_era_pc;
  else if(ms_csrwr && ms_csr_num==`CSR_ERA && ms_valid)
    csr_era_pc<=csr_wvalue;
end 

//eentry
reg[25:0] csr_eentry_va;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_EENTRY && ms_valid)
     csr_eentry_va<=ms_csr_mask[31:6]&csr_wvalue[31:6] | ~ms_csr_mask[31:6]&csr_eentry_va;
  else if(ms_csrwr && ms_csr_num==`CSR_EENTRY && ms_valid)
     csr_eentry_va<=csr_wvalue[31:6];
end 

//badv
reg[31:0] csr_badv_vaddr;
always@(posedge clk)begin
  if(ms_exl && addr_err && ms_valid)begin
    csr_badv_vaddr<=(ms_ecode==`ECODE_ADEF || ms_ecode==`ECODE_PIF || (ms_ecode==`ECODE_PPI || ms_ecode==`ECODE_TLBR)&~es_tlb)&(ms_esubcode==9'h00)? ms_pc:ms_vaddr;
	end 
end 

//save
reg[31:0] csr_save0_data;
reg[31:0] csr_save1_data;
reg[31:0] csr_save2_data;
reg[31:0] csr_save3_data;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE0 && ms_valid)
    csr_save0_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save0_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE0 && ms_valid)
    csr_save0_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE1 && ms_valid)
    csr_save1_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save1_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE1 && ms_valid)
    csr_save1_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE2 && ms_valid)
    csr_save2_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save2_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE2 && ms_valid)
    csr_save2_data<=csr_wvalue;
  if(ms_csrxchg && ms_csr_num==`CSR_SAVE3 && ms_valid)
    csr_save3_data<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_save3_data;
  else if(ms_csrwr && ms_csr_num==`CSR_SAVE3 && ms_valid)
    csr_save3_data<=csr_wvalue;
end

//tid
reg[31:0] csr_tid_tid;
wire[31:0] coreid_in;
//assign coreid_in=32'd1; 
always@(posedge clk)begin
  if(reset)
    csr_tid_tid<=32'd0;
  else if(ms_csrxchg && ms_csr_num==`CSR_TID && ms_valid)
    csr_tid_tid<=ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&csr_tid_tid;
  else if(ms_csrwr && ms_csr_num==`CSR_TID && ms_valid)
    csr_tid_tid<=csr_wvalue;
end 

//tcfg
reg csr_tcfg_en;
reg csr_tcfg_periodic;
reg[29:0] csr_tcfg_initval;
always@(posedge clk)begin
  if(reset)
    csr_tcfg_en<=1'b0;
  else if(ms_csrxchg && ms_csr_num==`CSR_TCFG && ms_valid)
    csr_tcfg_en<=ms_csr_mask[0]&csr_wvalue[0] | ~ms_csr_mask[0]&csr_tcfg_en;
  else if(ms_csrwr && ms_csr_num==`CSR_TCFG && ms_valid)
    csr_tcfg_en<=csr_wvalue[0];
  
  if(ms_csrxchg && ms_csr_num==`CSR_TCFG && ms_valid)begin  
    csr_tcfg_periodic<=ms_csr_mask[1]&csr_wvalue[1] | ~ms_csr_mask[1]&csr_tcfg_periodic;
	csr_tcfg_initval<=ms_csr_mask[31:2]&csr_wvalue[31:2] | ~ms_csr_mask[31:2]&csr_tcfg_initval;
	end 
  else if(ms_csrwr && ms_csr_num==`CSR_TCFG && ms_valid)begin
    csr_tcfg_periodic<=csr_wvalue[1];
	csr_tcfg_initval<=csr_wvalue[31:2];
    end 
end
//tval
wire [31:0] tcfg_next_value;
wire [31:0] csr_tval;
reg [31:0] timer_cnt;
assign tcfg_next_value = ms_csrxchg? ms_csr_mask[31:0]&csr_wvalue[31:0] | ~ms_csr_mask[31:0]&{csr_tcfg_initval,csr_tcfg_periodic, csr_tcfg_en} :
                                     csr_wvalue[31:0];
                                      
always @(posedge clk) begin
if (reset)
  timer_cnt <= 32'hffffffff;
else if (csr_we && ms_csr_num==`CSR_TCFG && tcfg_next_value[0])
  timer_cnt <= {tcfg_next_value[31:2], 2'b0};
else if (csr_tcfg_en && timer_cnt!=32'hffffffff) begin
  if (timer_cnt[31:0]==32'b0 && csr_tcfg_periodic)
    timer_cnt <= {csr_tcfg_initval, 2'b0};
  else
    timer_cnt <= timer_cnt - 1'b1;
end
end
assign csr_tval = timer_cnt[31:0];

//ticlr
wire csr_ticlr_clr;
assign csr_ticlr_clr = 1'b0;

//tlbidx
reg[3:0] csr_tlbidx_index;
reg[5:0] csr_tlbidx_ps;
reg      csr_tlbidx_ne;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_TLBIDX && ms_valid)begin
    csr_tlbidx_index<=ms_csr_mask[3:0]&csr_wvalue[3:0] | ~ms_csr_mask[3:0]&csr_tlbidx_index;
	csr_tlbidx_ps   <=ms_csr_mask[29:24]&csr_wvalue[29:24] | ~ms_csr_mask[29:25]&csr_tlbidx_ps;
	csr_tlbidx_ne   <=ms_csr_mask[31]&csr_wvalue[31] | ~ms_csr_mask[31]&csr_tlbidx_ne;
	end
  else if(ms_csrwr && ms_csr_num==`CSR_TLBIDX && ms_valid)begin
    csr_tlbidx_index<=csr_wvalue[3:0];
	csr_tlbidx_ps   <=csr_wvalue[29:24];
	csr_tlbidx_ne   <=csr_wvalue[31];
	end 
  else if(ms_tlbrd && r_e)begin
    csr_tlbidx_ps<=r_ps;
	csr_tlbidx_ne<=~r_e;
	end
  else if(ms_tlbrd)
    csr_tlbidx_ne<=~r_e;
  else if(ms_tlbsrch && s1_found)begin
    csr_tlbidx_index<=s1_index;
	csr_tlbidx_ne   <=~s1_found;
	end 
  else if(ms_tlbsrch)
    csr_tlbidx_ne   <=~s1_found;
end

//tlbehi
reg[18:0] csr_tlbehi_vppn;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_TLBEHI && ms_valid)
    csr_tlbehi_vppn<=ms_csr_mask[31:13]&csr_wvalue[31:13] | ~ms_csr_mask[31:13]&csr_tlbehi_vppn;
  else if(ms_csrwr && ms_csr_num==`CSR_TLBEHI && ms_valid)
    csr_tlbehi_vppn<=csr_wvalue[31:13];
  else if(ms_tlbrd && r_e)
    csr_tlbehi_vppn<=r_vppn;
  else if(ms_ecode==`ECODE_PIF || (ms_ecode==`ECODE_PPI || ms_ecode==`ECODE_TLBR)&~es_tlb)
    csr_tlbehi_vppn<=ms_pc[31:13];
  else if(ms_ecode==`ECODE_PIL || ms_ecode==`ECODE_PIS || ms_ecode==`ECODE_PME || ms_ecode==`ECODE_PPI  || ms_ecode==`ECODE_TLBR)
    csr_tlbehi_vppn<=ms_vaddr[31:13];
end 

//tlbelo0
reg csr_tlbelo0_v;
reg csr_tlbelo0_d;
reg[1:0] csr_tlbelo0_plv;
reg[1:0] csr_tlbelo0_mat;
reg      csr_tlbelo0_g;
reg[23:0] csr_tlbelo0_ppn;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_TLBELO0 && ms_valid)begin
    csr_tlbelo0_v  <=ms_csr_mask[0]&csr_wvalue[0] | ~ms_csr_mask[0]&csr_tlbelo0_v;
	csr_tlbelo0_d  <=ms_csr_mask[1]&csr_wvalue[1] | ~ms_csr_mask[1]&csr_tlbelo0_d;
	csr_tlbelo0_plv<=ms_csr_mask[3:2]&csr_wvalue[3:2] | ~ms_csr_mask[3:2]&csr_tlbelo0_plv;
	csr_tlbelo0_mat<=ms_csr_mask[5:4]&csr_wvalue[5:4] | ~ms_csr_mask[5:4]&csr_tlbelo0_mat;
	csr_tlbelo0_g  <=ms_csr_mask[6]&csr_wvalue[6] | ~ms_csr_mask[6]&csr_tlbelo0_g;
	csr_tlbelo0_ppn<=ms_csr_mask[31:8]&csr_wvalue[31:8] | ~ms_csr_mask[31:8]&csr_tlbelo0_ppn;
	end
  else if(ms_csrwr && ms_csr_num==`CSR_TLBELO0 && ms_valid)begin
    csr_tlbelo0_v  <=csr_wvalue[0];
	csr_tlbelo0_d  <=csr_wvalue[1];
	csr_tlbelo0_plv<=csr_wvalue[3:2];
	csr_tlbelo0_mat<=csr_wvalue[5:4];
	csr_tlbelo0_g  <=csr_wvalue[6];
	csr_tlbelo0_ppn<=csr_wvalue[31:8];
	end
  else if(ms_tlbrd && r_e)begin
    csr_tlbelo0_v  <=r_v0;
	csr_tlbelo0_d  <=r_d0;
	csr_tlbelo0_plv<=r_plv0;
	csr_tlbelo0_mat<=r_mat0;
	csr_tlbelo0_g  <=r_g;
	csr_tlbelo0_ppn<=r_ppn0;
	end
end 

//tlbelo1
reg csr_tlbelo1_v;
reg csr_tlbelo1_d;
reg[1:0] csr_tlbelo1_plv;
reg[1:0] csr_tlbelo1_mat;
reg      csr_tlbelo1_g;
reg[23:0] csr_tlbelo1_ppn;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_TLBELO1 && ms_valid)begin
    csr_tlbelo1_v  <=ms_csr_mask[0]&csr_wvalue[0] | ~ms_csr_mask[0]&csr_tlbelo0_v;
	csr_tlbelo1_d  <=ms_csr_mask[1]&csr_wvalue[1] | ~ms_csr_mask[1]&csr_tlbelo0_d;
	csr_tlbelo1_plv<=ms_csr_mask[3:2]&csr_wvalue[3:2] | ~ms_csr_mask[3:2]&csr_tlbelo0_plv;
	csr_tlbelo1_mat<=ms_csr_mask[5:4]&csr_wvalue[5:4] | ~ms_csr_mask[5:4]&csr_tlbelo0_mat;
	csr_tlbelo1_g  <=ms_csr_mask[6]&csr_wvalue[6] | ~ms_csr_mask[6]&csr_tlbelo0_g;
	csr_tlbelo1_ppn<=ms_csr_mask[31:8]&csr_wvalue[31:8] | ~ms_csr_mask[31:8]&csr_tlbelo0_ppn;
	end
  else if(ms_csrwr && ms_csr_num==`CSR_TLBELO1 && ms_valid)begin
    csr_tlbelo1_v  <=csr_wvalue[0];
	csr_tlbelo1_d  <=csr_wvalue[1];
	csr_tlbelo1_plv<=csr_wvalue[3:2];
	csr_tlbelo1_mat<=csr_wvalue[5:4];
	csr_tlbelo1_g  <=csr_wvalue[6];
	csr_tlbelo1_ppn<=csr_wvalue[31:8];
	end
  else if(ms_tlbrd && r_e)begin
    csr_tlbelo1_v  <=r_v1;
	csr_tlbelo1_d  <=r_d1;
	csr_tlbelo1_plv<=r_plv1;
	csr_tlbelo1_mat<=r_mat1;
	csr_tlbelo1_g  <=r_g;
	csr_tlbelo1_ppn<=r_ppn1;
	end
end 

//asid
reg[9:0] csr_asid_asid;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_ASID && ms_valid)
    csr_asid_asid<=ms_csr_mask[9:0]&csr_wvalue[9:0] | ~ms_csr_mask[9:0]&csr_asid_asid;
  else if(ms_csrwr && ms_csr_num==`CSR_ASID && ms_valid)
    csr_asid_asid<=csr_wvalue[9:0];	
  else if(ms_tlbrd && r_e)
    csr_asid_asid<=r_asid;
  else if(ms_tlbrd && !r_e)//为了trace比对通过，否则可以不处理
    csr_asid_asid<=10'd0;
end

//tlbrentry
reg[26:0] csr_tlbrentry_pa;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_TLBRENTRY && ms_valid)
     csr_tlbrentry_pa<=ms_csr_mask[31:6]&csr_wvalue[31:6] | ~ms_csr_mask[31:6]&csr_tlbrentry_pa;
  else if(ms_csrwr && ms_csr_num==`CSR_TLBRENTRY && ms_valid)
     csr_tlbrentry_pa<=csr_wvalue[31:6];
end  

//dmw0
reg      csr_dmw0_plv0;
reg      csr_dmw0_plv3;
reg[1:0] csr_dmw0_mat;
reg[2:0] csr_dmw0_pseg;
reg[2:0] csr_dmw0_vseg;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_DMW0 && ms_valid)begin
     csr_dmw0_plv0<=ms_csr_mask[0]&csr_wvalue[0] | ~ms_csr_mask[0]&csr_dmw0_plv0;
	 csr_dmw0_plv3<=ms_csr_mask[3]&csr_wvalue[3] | ~ms_csr_mask[3]&csr_dmw0_plv3;
	 csr_dmw0_mat <=ms_csr_mask[5:4]&csr_wvalue[5:4] | ~ms_csr_mask[5:4]&csr_dmw0_mat;
	 csr_dmw0_pseg<=ms_csr_mask[27:25]&csr_wvalue[27:25] | ~ms_csr_mask[27:25]&csr_dmw0_pseg;
	 csr_dmw0_vseg<=ms_csr_mask[31:29]&csr_wvalue[31:29] | ~ms_csr_mask[31:29]&csr_dmw0_vseg;
	 end
  else if(ms_csrwr && ms_csr_num==`CSR_DMW0 && ms_valid)begin
     csr_dmw0_plv0<=csr_wvalue[0];
	 csr_dmw0_plv3<=csr_wvalue[3];
	 csr_dmw0_mat <=csr_wvalue[5:4];
	 csr_dmw0_pseg<=csr_wvalue[27:25];
	 csr_dmw0_vseg<=csr_wvalue[31:29];
	 end 
end 

//dmw1
reg      csr_dmw1_plv0;
reg      csr_dmw1_plv3;
reg[1:0] csr_dmw1_mat;
reg[2:0] csr_dmw1_pseg;
reg[2:0] csr_dmw1_vseg;
always@(posedge clk)begin
  if(ms_csrxchg && ms_csr_num==`CSR_DMW1 && ms_valid)begin
     csr_dmw1_plv0<=ms_csr_mask[0]&csr_wvalue[0] | ~ms_csr_mask[0]&csr_dmw1_plv0;
	 csr_dmw1_plv3<=ms_csr_mask[3]&csr_wvalue[3] | ~ms_csr_mask[3]&csr_dmw1_plv3;
	 csr_dmw1_mat <=ms_csr_mask[5:4]&csr_wvalue[5:4] | ~ms_csr_mask[5:4]&csr_dmw1_mat;
	 csr_dmw1_pseg<=ms_csr_mask[27:25]&csr_wvalue[27:25] | ~ms_csr_mask[27:25]&csr_dmw1_pseg;
	 csr_dmw1_vseg<=ms_csr_mask[31:29]&csr_wvalue[31:29] | ~ms_csr_mask[31:29]&csr_dmw1_vseg;
	 end
  else if(ms_csrwr && ms_csr_num==`CSR_DMW1 && ms_valid)begin
     csr_dmw1_plv0<=csr_wvalue[0];
	 csr_dmw1_plv3<=csr_wvalue[3];
	 csr_dmw1_mat <=csr_wvalue[5:4];
	 csr_dmw1_pseg<=csr_wvalue[27:25];
	 csr_dmw1_vseg<=csr_wvalue[31:29];
	 end 
end 

//TLB read
assign r_index = csr_tlbidx_index;

//rand_index生成
wire[3:0] rand_index;
reg[63:0] timer_64;
always @(posedge clk) begin
	if (reset) begin
		timer_64 <= 64'b0;
	end
	else begin
		timer_64 <= timer_64 + 1'b1;
	end
end
assign rand_index=timer_64[3:0];

//TLB write
assign we_tlb  = ms_tlbwr | ms_tlbfill;
assign w_index = ms_tlbwr? csr_tlbidx_index:rand_index;
assign w_e     = ~csr_tlbidx_ne;
assign w_asid  = csr_asid_asid;
assign w_g     = csr_tlbelo0_g & csr_tlbelo1_g;
assign w_ps    = csr_tlbidx_ps;
assign w_vppn  = csr_tlbehi_vppn;
assign w_ppn0  = csr_tlbelo0_ppn;
assign w_plv0  = csr_tlbelo0_plv;
assign w_mat0  = csr_tlbelo0_mat;
assign w_d0    = csr_tlbelo0_d;
assign w_v0    = csr_tlbelo0_v;
assign w_ppn1  = csr_tlbelo1_ppn;
assign w_plv1  = csr_tlbelo1_plv;
assign w_mat1  = csr_tlbelo1_mat;
assign w_d1    = csr_tlbelo1_d;
assign w_v1    = csr_tlbelo1_v;

//前递到exe进行tlbsrch查找
assign ms_to_es_vppn=csr_tlbehi_vppn;
assign ms_to_es_asid=csr_asid;

    
wire[31:0] csr_crmd;
wire[31:0] csr_prmd;
wire[31:0] csr_ecfg;
wire[31:0] csr_estat;
wire[31:0] csr_era;
wire[31:0] csr_eentry;
wire[31:0] csr_badv;
wire[31:0] csr_save0,csr_save1,csr_save2,csr_save3;
wire[31:0] csr_tid;
wire[31:0] csr_tcfg;
wire[31:0] csr_ticlr;

wire[31:0] csr_tlbidx;
wire[31:0] csr_tlbehi;
wire[31:0] csr_tlbelo0;
wire[31:0] csr_tlbelo1;
wire[31:0] csr_asid;
wire[31:0] csr_tlbrentry;

wire[31:0] csr_dmw0;
wire[31:0] csr_dmw1;

assign csr_crmd  ={23'd0,csr_crmd_datm,csr_crmd_datf,csr_crmd_pg,csr_crmd_da,csr_crmd_ie,csr_crmd_plv};
assign csr_prmd  ={29'd0,csr_prmd_pie,csr_prmd_pplv};
assign csr_ecfg  ={19'd0,csr_ecfg_lie};
assign csr_estat ={1'b0,csr_estat_esubcod,csr_estat_ecode,3'd0,csr_estat_is};
assign csr_era   =csr_era_pc;
assign csr_eentry={csr_eentry_va,6'd0};
assign csr_badv  =csr_badv_vaddr;
assign csr_save0 =csr_save0_data;
assign csr_save1 =csr_save1_data;
assign csr_save2 =csr_save2_data;
assign csr_save3 =csr_save3_data;
assign csr_tid   =csr_tid_tid;
assign csr_tcfg  ={csr_tcfg_initval,csr_tcfg_periodic,csr_tcfg_en};
assign csr_ticlr ={31'd0,csr_ticlr_clr};

assign csr_tlbidx   ={csr_tlbidx_ne,1'b0,csr_tlbidx_ps,8'd0,12'd0,csr_tlbidx_index};
assign csr_tlbehi   ={csr_tlbehi_vppn,13'd0};
assign csr_tlbelo0  ={csr_tlbelo0_ppn,1'b0,csr_tlbelo0_g,csr_tlbelo0_mat,csr_tlbelo0_plv,csr_tlbelo0_d,csr_tlbelo0_v};
assign csr_tlbelo1  ={csr_tlbelo1_ppn,1'b0,csr_tlbelo1_g,csr_tlbelo1_mat,csr_tlbelo1_plv,csr_tlbelo1_d,csr_tlbelo1_v};
assign csr_asid     ={8'd0,8'd10,6'd0,csr_asid_asid};
assign csr_tlbrentry={csr_tlbrentry_pa,6'd0};

assign csr_dmw0     ={csr_dmw0_vseg,1'b0,csr_dmw0_pseg,19'd0,csr_dmw0_mat,csr_dmw0_plv3,2'd0,csr_dmw0_plv0};
assign csr_dmw1     ={csr_dmw1_vseg,1'b0,csr_dmw1_pseg,19'd0,csr_dmw1_mat,csr_dmw1_plv3,2'd0,csr_dmw1_plv0};

wire[31:0] csr_rvalue;
assign csr_rvalue={32{ms_csr_num==`CSR_CRMD}}&csr_crmd | {32{ms_csr_num==`CSR_PRMD}}&csr_prmd | {32{ms_csr_num==`CSR_ESTAT}}&csr_estat | {32{ms_csr_num==`CSR_ERA}}&csr_era|
                  {32{ms_csr_num==`CSR_EENTRY}}&csr_eentry | {32{ms_csr_num==`CSR_SAVE0}}&csr_save0 | {32{ms_csr_num==`CSR_SAVE1}}&csr_save1 | {32{ms_csr_num==`CSR_SAVE2}}&csr_save2|
				  {32{ms_csr_num==`CSR_SAVE3}}&csr_save3 | {32{ms_csr_num==`CSR_ECFG}}&csr_ecfg | {32{ms_csr_num==`CSR_BADV}}&csr_badv | {32{ms_csr_num==`CSR_TID}}&csr_tid |
				  {32{ms_csr_num==`CSR_TCFG}}&csr_tcfg | {32{ms_csr_num==`CSR_TVAL}}&csr_tval | {32{ms_csr_num==`CSR_TICLR}}&csr_ticlr | {32{ms_csr_num==`CSR_TLBIDX}}&csr_tlbidx |
				  {32{ms_csr_num==`CSR_TLBEHI}}&csr_tlbehi | {32{ms_csr_num==`CSR_TLBELO0}}&csr_tlbelo0 | {32{ms_csr_num==`CSR_TLBELO1}}&csr_tlbelo1 | 
				  {32{ms_csr_num==`CSR_ASID}}&csr_asid | {32{ms_csr_num==`CSR_TLBRENTRY}}&csr_tlbrentry | {32{ms_csr_num==`CSR_DMW0}}&csr_dmw0 | {32{ms_csr_num==`CSR_DMW1}}&csr_dmw1; 
			
		
//stable_counter
reg[63:0] stable_counter;
always@(posedge clk)begin
  if(reset)
    stable_counter<=64'h0;
  else if(stable_counter==64'hffffffffffffffff)
    stable_counter<=64'h0;
  else 
    stable_counter<=stable_counter+1'b1;
end 


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
						(ms_csrrd|ms_csrwr|ms_csrxchg)?           csr_rvalue :
						 ms_rdcntid      ?                        csr_tid    :
					     ms_rdcntvh      ?                        stable_counter[63:32]:
						 ms_rdcntvl      ?                        stable_counter[31:0]:
                                                                  ms_alu_result;

wire       reflush;
wire       refetch;
wire[31:0] refetch_pc;
wire[31:0] ms_eentry;
assign reflush         =(ms_exl|ms_ertn)&ms_valid;
assign refetch         =(ms_cacop|ms_tlbrd|ms_tlbwr|ms_tlbfill|ms_invtlb|((ms_csrwr|ms_csrxchg)&&(ms_csr_num==`CSR_ASID|ms_csr_num==`CSR_TLBEHI|ms_csr_num==`CSR_DMW0|
                         ms_csr_num==`CSR_DMW1|ms_csr_num==`CSR_CRMD)))&ms_valid;
						 
assign ms_to_ds_reflush=reflush | refetch;
assign ms_to_es_reflush=reflush | refetch;
assign refetch_pc      =ms_pc+3'd4;
assign ms_eentry       =(ms_ecode==`ECODE_TLBR)? csr_tlbrentry:csr_eentry;
assign ms_to_fs_bus={refetch&ms_valid,
                     refetch_pc,
                     ms_exl&ms_valid,
                     ms_ertn&ms_valid,
					 ms_eentry,
					 csr_era};

wire ms_to_ds_ready;
assign ms_to_ds_ready=~ms_ready_go;								 
assign ms_to_ds_dest= ms_valid? ms_dest:5'b00000;
assign ms_to_ds_value=ms_final_result;

endmodule