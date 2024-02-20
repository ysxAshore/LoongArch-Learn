`include "mycpu.h"

module id_stage(
    input                          clk           ,
    input                          reset         ,
    //allowin
    input                          es_allowin    ,
    output                         ds_allowin    ,
    //from fs
    input                          fs_to_ds_valid,
    input  [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus  ,
    //to es
    output                         ds_to_es_valid,
    output [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    //to fs
    output [`BR_BUS_WD       -1:0] br_bus        ,
    //to rf: for write back
    input  [`WS_TO_RF_BUS_WD -1:0] ws_to_rf_bus  ,

    input [4:0] es_to_ds_dest,
	input [4:0] ms_to_ds_dest,
	input [4:0] ws_to_ds_dest,
	input [31:0] es_to_ds_value,
	input [31:0] ms_to_ds_value,
	input [31:0] ws_to_ds_value,
	input es_load_op,
	input [13:0] es_to_ds_num, 
	input ms_to_ds_reflush,
	input has_int,
	input ms_to_ds_ready
	
);

reg         ds_valid   ;
wire        ds_ready_go;


reg  [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus_r;

wire ds_tlbr;
wire ds_pif;
wire ds_ppi;
wire ds_adef;
wire [31:0] ds_inst;
wire [31:0] ds_pc  ;
assign {ds_tlbr ,
        ds_pif  ,
		ds_ppi  ,
        ds_adef,
        ds_inst,
        ds_pc  } = fs_to_ds_bus_r;

wire        rf_we   ;
wire [ 4:0] rf_waddr;
wire [31:0] rf_wdata;
assign {rf_we   ,  //37:37
        rf_waddr,  //36:32
        rf_wdata   //31:0
       } = ws_to_rf_bus;

wire        br_stall;
wire        br_taken;
wire [31:0] br_target;

wire [11:0] alu_op;
wire        load_op;
wire        src1_is_pc;
wire        src2_is_imm;
wire        res_from_mem;
wire        dst_is_r1;
wire        dst_is_rj;
wire        gr_we;
wire        mem_we;
wire        src_reg_is_rd;
wire [4: 0] dest;
wire [31:0] rj_value;
wire [31:0] rkd_value;
wire [31:0] ds_imm;
wire [31:0] br_offs;
wire [31:0] jirl_offs;

wire [ 5:0] op_31_26;
wire [ 3:0] op_25_22;
wire [ 1:0] op_21_20;
wire [ 4:0] op_19_15;
wire [ 4:0] rd;
wire [ 4:0] rj;
wire [ 4:0] rk;
wire [11:0] i12;
wire [19:0] i20;
wire [15:0] i16;
wire [25:0] i26;

wire [63:0] op_31_26_d;
wire [15:0] op_25_22_d;
wire [ 3:0] op_21_20_d;
wire [31:0] op_19_15_d;
  
wire        inst_add_w; 
wire        inst_sub_w;  
wire        inst_slt;    
wire        inst_sltu;   
wire        inst_nor;    
wire        inst_and;    
wire        inst_or;     
wire        inst_xor;    
wire        inst_slli_w;  
wire        inst_srli_w;  
wire        inst_srai_w;  
wire        inst_addi_w; 
wire        inst_ld_w;  
wire        inst_st_w;   
wire        inst_jirl;   
wire        inst_b;      
wire        inst_bl;     
wire        inst_beq;    
wire        inst_bne;    
wire        inst_lu12i_w;

wire        inst_slti;
wire        inst_sltui;
wire        inst_andi;
wire        inst_ori;
wire        inst_xori;
wire        inst_sll_w;
wire        inst_srl_w;
wire        inst_sra_w;
wire        inst_pcaddu12i;
wire        inst_mul_w;
wire        inst_mulh_w;
wire        inst_mulh_wu;
wire        inst_div_w;
wire        inst_mod_w;
wire        inst_div_wu;
wire        inst_mod_wu;

wire        inst_blt;
wire        inst_bge;
wire        inst_bltu;
wire        inst_bgeu;
wire        inst_ld_b;
wire        inst_ld_h;
wire        inst_ld_bu;
wire        inst_ld_hu;
wire        inst_st_b;
wire        inst_st_h;

wire        inst_csrrd;
wire        inst_csrwr;
wire        inst_csrxchg;
wire        inst_ertn;
wire        inst_syscall;
wire        inst_break;
wire        inst_ine;
wire        inst_rdcntvl_w;
wire        inst_rdcntvh_w;
wire        inst_rdcntid_w;

wire        inst_tlbsrch;
wire        inst_tlbrd;
wire        inst_tlbwr;
wire        inst_tlbfill;
wire        inst_invtlb;

wire        need_ui5;
wire        need_si12;

wire        need_si12_i;
wire        need_si20_p;

wire        need_si16;
wire        need_si20;
wire        need_si26;  
wire        src2_is_4;

wire [ 4:0] rf_raddr1;
wire [31:0] rf_rdata1;
wire [ 4:0] rf_raddr2;
wire [31:0] rf_rdata2;

assign br_bus       = {br_branch,br_stall,br_taken,br_target};

wire exl;
wire[5:0] ecode;
wire[8:0] esubcode;
wire[31:0] csr_mask;
wire[13:0] csr_num;

wire[4:0] invtlb_op;
assign invtlb_op=rd;

assign exl     =inst_syscall | inst_break | inst_ine | ds_adef | has_int | ds_tlbr | ds_pif | ds_ppi;
assign ecode   =inst_syscall? 6'h0b:
                inst_break  ? 6'h0c:
				inst_ine    ? 6'h0d:
				ds_adef     ? 6'h08:
				ds_tlbr     ? 6'h3f:
				ds_pif      ? 6'h03:
				ds_ppi      ? 6'h07:
				              6'h00;
assign esubcode=9'h00;
assign csr_mask=rj_value;
assign csr_num =ds_inst[23:10];

assign ds_to_es_bus = {inst_tlbsrch,
                       inst_tlbrd  ,
                       inst_tlbwr  ,
                       inst_tlbfill,
                       inst_invtlb ,
                       invtlb_op   ,					   

                       inst_rdcntvh_w,
                       inst_rdcntvl_w,
					   inst_rdcntid_w,

                       inst_ld_w   ,
                       inst_st_w   ,

                       inst_csrrd  ,
                       inst_csrwr  ,
					   inst_csrxchg,
					   inst_ertn   ,
					   exl         ,
					   ecode       ,
					   esubcode    ,
					   csr_mask    ,
					   csr_num     ,

                       inst_ld_b   ,
					   inst_ld_h   ,
					   inst_ld_bu  ,
					   inst_ld_hu  ,
					   inst_st_b   ,
					   inst_st_h   ,

                       inst_mul_w  ,
                       inst_mulh_w ,
					   inst_mulh_wu,
					   inst_div_w  ,
					   inst_mod_w  ,
					   inst_div_wu ,
					   inst_mod_wu ,
   
                       res_from_mem,
                       alu_op      ,  //149:138
                       load_op     ,  //137:137
                       src1_is_pc  ,  //136:136
                       src2_is_imm ,  //135:135
                       gr_we       ,  //134:134
                       mem_we      ,  //133:133
                       dest        ,  //132:128
                       ds_imm      ,  //127:96
                       rj_value    ,  //95 :64
                       rkd_value   ,  //63 :32
                       ds_pc          //31 :0
                      };


wire no_rj;
wire no_rk;
wire no_rd;
wire no_dest;
wire rj_equal;
wire rk_equal;
wire rd_equal;
assign no_rj=inst_b|inst_bl|inst_lu12i_w|inst_pcaddu12i|inst_csrrd|inst_csrwr|inst_syscall|inst_ertn|inst_break|inst_rdcntid_w|inst_ine;
assign no_rk=inst_slli_w|inst_srli_w|inst_srai_w|inst_addi_w|inst_ld_w|inst_st_w|inst_jirl|inst_b|inst_bl|inst_beq|inst_bne|inst_lu12i_w|inst_slti|inst_sltui|inst_andi|
             inst_ori|inst_xori|inst_pcaddu12i|inst_blt|inst_bltu|inst_bge|inst_bgeu|inst_ld_b|inst_ld_h|inst_ld_bu|inst_ld_hu|inst_st_b|inst_st_h|inst_csrrd|
			 inst_csrwr|inst_csrxchg|inst_syscall|inst_ertn|inst_break|inst_rdcntid_w|inst_rdcntvh_w|inst_rdcntvl_w|inst_ine|inst_tlbsrch|inst_tlbrd|inst_tlbwr|inst_tlbfill;
assign no_rd=inst_add_w|inst_addi_w|inst_sub_w|inst_ld_w|inst_b|inst_bl|inst_jirl|inst_slt|inst_sltu|inst_slli_w|inst_srli_w|inst_srai_w|inst_lu12i_w|inst_and|inst_or
             |inst_nor|inst_xor|inst_slti|inst_sltui|inst_sll_w|inst_srl_w|inst_sra_w|inst_pcaddu12i|inst_mul_w|inst_mulh_w|inst_mulh_wu|inst_div_w|inst_mod_w|inst_div_wu
			 |inst_mod_wu|inst_ld_b|inst_ld_h|inst_ld_bu|inst_ld_hu|inst_csrrd|inst_syscall|inst_ertn|inst_break|inst_rdcntvh_w|inst_rdcntvl_w|inst_ine|inst_invtlb;
assign no_dest=inst_b|inst_beq|inst_bne|inst_st_w|inst_blt|inst_bltu|inst_bge|inst_bgeu|inst_st_b|inst_st_h|inst_syscall|inst_ertn|inst_break|inst_ine|inst_tlbsrch|inst_tlbrd|
               inst_tlbwr|inst_tlbfill|inst_invtlb;


assign rj_equal=(rj!=5'd0) && (~no_rj) && ((rj==es_to_ds_dest) || (rj==ms_to_ds_dest) || (rj==ws_to_ds_dest));
assign rk_equal=(rk!=5'd0) && (~no_rk) && ((rk==es_to_ds_dest) || (rk==ms_to_ds_dest) || (rk==ws_to_ds_dest)); 
assign rd_equal=(rd!=5'd0) && (~no_rd) && ((rd==es_to_ds_dest) || (rd==ms_to_ds_dest) || (rd==ws_to_ds_dest));

wire load_stall;
assign load_stall=(rj_equal && (rj==es_to_ds_dest) && es_load_op) || (rk_equal && ~src_reg_is_rd && (rk==es_to_ds_dest) && es_load_op) || 
                  (rd_equal && src_reg_is_rd && (rd==es_to_ds_dest) && es_load_op);

wire csr_stall;
assign csr_stall=(inst_csrrd | inst_csrwr | inst_csrxchg)&(csr_num==es_to_ds_num);

assign ds_ready_go    = ~load_stall && ~csr_stall && ~((rj_equal | rk_equal | rd_equal) & ms_to_ds_ready);
assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
assign ds_to_es_valid = ds_valid && ds_ready_go;

wire br_cancel;
wire br_taken_cancel;
reg  br_cancel_r;
reg  br_cancel_r_valid;
assign br_cancel=br_taken && ds_ready_go;
assign br_taken_cancel=br_cancel_r_valid? br_cancel_r:br_cancel;
always@(posedge clk)begin
    if(reset || ms_to_ds_reflush)
	    br_cancel_r_valid<=1'b0;
	else if(br_taken && ~fs_to_ds_valid && ds_ready_go)begin
	    br_cancel_r_valid<=1'b1;
		br_cancel_r<=br_cancel;
		end 
	else if(br_cancel_r_valid && fs_to_ds_valid)
	    br_cancel_r_valid<=1'b0;
end 

always @(posedge clk) begin
    if (reset || ms_to_ds_reflush) begin     
        ds_valid <= 1'b0;
    end
    else if(br_taken_cancel)begin
	    ds_valid<=1'b0;
	end 
    else if (ds_allowin) begin 
        ds_valid <= fs_to_ds_valid;

    end 
    if (fs_to_ds_valid && ds_allowin) begin
        fs_to_ds_bus_r <= fs_to_ds_bus;
    end
end

assign op_31_26  = ds_inst[31:26];
assign op_25_22  = ds_inst[25:22];
assign op_21_20  = ds_inst[21:20];
assign op_19_15  = ds_inst[19:15];

assign rd   = ds_inst[ 4: 0];
assign rj   = ds_inst[ 9: 5];
assign rk   = ds_inst[14:10];

assign i12  = ds_inst[21:10];
assign i20  = ds_inst[24: 5];
assign i16  = ds_inst[25:10];
assign i26  = {ds_inst[ 9: 0], ds_inst[25:10]};

decoder_6_64 u_dec0(.in(op_31_26 ), .out(op_31_26_d ));
decoder_4_16 u_dec1(.in(op_25_22 ), .out(op_25_22_d ));
decoder_2_4  u_dec2(.in(op_21_20 ), .out(op_21_20_d ));
decoder_5_32 u_dec3(.in(op_19_15 ), .out(op_19_15_d ));

assign inst_add_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
assign inst_sub_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
assign inst_slt    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
assign inst_sltu   = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
assign inst_nor    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
assign inst_and    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
assign inst_or     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
assign inst_xor    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];
assign inst_slli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
assign inst_srli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
assign inst_srai_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
assign inst_addi_w = op_31_26_d[6'h00] & op_25_22_d[4'ha];
assign inst_ld_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
assign inst_st_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h6];
assign inst_jirl   = op_31_26_d[6'h13];
assign inst_b      = op_31_26_d[6'h14];
assign inst_bl     = op_31_26_d[6'h15];
assign inst_beq    = op_31_26_d[6'h16];
assign inst_bne    = op_31_26_d[6'h17];
assign inst_lu12i_w= op_31_26_d[6'h05] & ~ds_inst[25];

assign inst_slti   = op_31_26_d[6'h00] & op_25_22_d[4'h08];
assign inst_sltui  = op_31_26_d[6'h00] & op_25_22_d[4'h09];
assign inst_andi   = op_31_26_d[6'h00] & op_25_22_d[4'h0d];
assign inst_ori    = op_31_26_d[6'h00] & op_25_22_d[4'h0e];
assign inst_xori   = op_31_26_d[6'h00] & op_25_22_d[4'h0f];
assign inst_sll_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h0e];
assign inst_srl_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h0f];
assign inst_sra_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h10];
assign inst_pcaddu12i = op_31_26_d[6'h07] & ~ds_inst[25];
assign inst_mul_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h18];
assign inst_mulh_w = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h19];
assign inst_mulh_wu= op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h01] & op_19_15_d[5'h1a];
assign inst_div_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h00];
assign inst_mod_w  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h01];
assign inst_div_wu = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h02];
assign inst_mod_wu = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h03];

assign inst_blt    = op_31_26_d[6'h18];
assign inst_bge    = op_31_26_d[6'h19];
assign inst_bltu   = op_31_26_d[6'h1a];
assign inst_bgeu   = op_31_26_d[6'h1b];
assign inst_ld_b   = op_31_26_d[6'h0a] & op_25_22_d[4'h00];
assign inst_ld_h   = op_31_26_d[6'h0a] & op_25_22_d[4'h01];
assign inst_ld_bu  = op_31_26_d[6'h0a] & op_25_22_d[4'h08];
assign inst_ld_hu  = op_31_26_d[6'h0a] & op_25_22_d[4'h09];
assign inst_st_b   = op_31_26_d[6'h0a] & op_25_22_d[4'h04];
assign inst_st_h   = op_31_26_d[6'h0a] & op_25_22_d[4'h05];

assign inst_csrrd  = op_31_26_d[6'h01] & (ds_inst[25:24]==2'b00) & (ds_inst[9:5]==5'd0);
assign inst_csrwr  = op_31_26_d[6'h01] & (ds_inst[25:24]==2'b00) & (ds_inst[9:5]==5'd1);
assign inst_csrxchg= op_31_26_d[6'h01] & (ds_inst[25:24]==2'b00) & (ds_inst[9:5]!=5'd0) & (ds_inst[9:5]!=5'd1);
assign inst_ertn   = op_31_26_d[6'h01] & op_25_22_d[4'h09] & op_21_20_d[2'h00] & op_19_15_d[5'h10] & (ds_inst[14:10]==5'd14) & (ds_inst[9:0]==10'd0);
assign inst_syscall= op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h16];
assign inst_break  = op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h02] & op_19_15_d[5'h14];
assign inst_ine    = ~inst_add_w&~inst_sub_w&~inst_slt&~inst_sltu&~inst_nor&~inst_and&~inst_or&~inst_xor&~inst_slli_w&~inst_srli_w&~inst_srai_w&~inst_addi_w&~inst_ld_w&~inst_st_w&
                     ~inst_jirl&~inst_b&~inst_bl&~inst_beq&~inst_bne&~inst_lu12i_w&~inst_slti&~inst_sltui&~inst_andi&~inst_ori&~inst_xori&~inst_sll_w&~inst_srl_w&~inst_sra_w&
					 ~inst_pcaddu12i&~inst_mul_w&~inst_mulh_w&~inst_mulh_wu&~inst_div_w&~inst_mod_w&~inst_div_wu&~inst_mod_wu&~inst_blt&~inst_bge&~inst_bltu&~inst_bgeu&~inst_ld_b&
					 ~inst_ld_h&~inst_ld_bu&~inst_ld_hu&~inst_st_b&~inst_st_h&~inst_csrrd&~inst_csrwr&~inst_csrxchg&~inst_ertn&~inst_syscall&~inst_break&~inst_rdcntid_w&
					 ~inst_rdcntvh_w&~inst_rdcntvl_w&~inst_tlbsrch&~inst_tlbrd&~inst_tlbwr&~inst_tlbfill&~inst_invtlb;
assign inst_rdcntid_w= op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h00] & op_19_15_d[5'h00] & (ds_inst[14:10]==5'h18) & (ds_inst[4:0]==5'h00);
assign inst_rdcntvl_w= op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h00] & op_19_15_d[5'h00] & (ds_inst[14:10]==5'h18) & (ds_inst[9:5]==5'h00);
assign inst_rdcntvh_w= op_31_26_d[6'h00] & op_25_22_d[4'h00] & op_21_20_d[2'h00] & op_19_15_d[5'h00] & (ds_inst[14:10]==5'h19) & (ds_inst[9:5]==5'h00);

assign inst_tlbsrch    = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & (ds_inst[14:10]==5'd10) & (ds_inst[9:5]==5'd0) & (ds_inst[4:0]==5'd0);        
assign inst_tlbrd      = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & (ds_inst[14:10]==5'd11) & (ds_inst[9:5]==5'd0) & (ds_inst[4:0]==5'd0);            
assign inst_tlbwr      = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & (ds_inst[14:10]==5'd12) & (ds_inst[9:5]==5'd0) & (ds_inst[4:0]==5'd0);             
assign inst_tlbfill    = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & (ds_inst[14:10]==5'd13) & (ds_inst[9:5]==5'd0) & (ds_inst[4:0]==5'd0);                
assign inst_invtlb     = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h13] & (invtlb_op<5'd7);

assign alu_op[ 0] = inst_add_w | inst_addi_w | inst_ld_w | inst_st_w | inst_jirl | inst_bl | inst_pcaddu12i|inst_ld_b|inst_ld_h|inst_ld_bu|inst_ld_hu|inst_st_b|inst_st_h;
assign alu_op[ 1] = inst_sub_w;
assign alu_op[ 2] = inst_slt | inst_slti;
assign alu_op[ 3] = inst_sltu | inst_sltui;
assign alu_op[ 4] = inst_and | inst_andi;
assign alu_op[ 5] = inst_nor;
assign alu_op[ 6] = inst_or | inst_ori;
assign alu_op[ 7] = inst_xor | inst_xori;
assign alu_op[ 8] = inst_slli_w | inst_sll_w;
assign alu_op[ 9] = inst_srli_w | inst_srl_w;
assign alu_op[10] = inst_srai_w | inst_sra_w;
assign alu_op[11] = inst_lu12i_w;

assign need_ui5   =  inst_slli_w | inst_srli_w | inst_srai_w;
assign need_si12  =  inst_addi_w | inst_ld_w | inst_st_w | inst_slti | inst_sltui|inst_ld_b|inst_ld_h|inst_ld_bu|inst_ld_hu|inst_st_b|inst_st_h;

assign need_si12_i=  inst_andi | inst_ori | inst_xori;
assign need_si20_p=  inst_pcaddu12i;

assign need_si16  =  inst_jirl | inst_beq | inst_bne | inst_blt | inst_bltu | inst_bge | inst_bgeu;
assign need_si20  =  inst_lu12i_w;
assign need_si26  =  inst_b | inst_bl;
assign src2_is_4  =  inst_jirl | inst_bl;


assign ds_imm = src2_is_4 ? 32'h4              :
		need_si20 ? {12'b0,i20[4:0],i20[19:5]} :  //i20[16:5]==i12[11:0]
		need_si12_i ? {{20{1'b0}},i12[11:0]}   :
		need_si20_p ? {i20[19:0],12'b0}        :
  /*need_ui5 || need_si12*/ {{20{i12[11]}}, i12[11:0]} ;

assign br_offs = need_si26 ? {{ 4{i26[25]}}, i26[25:0], 2'b0} : 
                             {{14{i16[15]}}, i16[15:0], 2'b0} ;

assign jirl_offs = {{14{i16[15]}}, i16[15:0], 2'b0};

assign src_reg_is_rd = inst_beq | inst_bne | inst_st_w | inst_blt | inst_bltu | inst_bge | inst_bgeu | inst_st_b | inst_st_h | inst_csrwr | inst_csrxchg;

assign src1_is_pc    = inst_jirl | inst_bl | inst_pcaddu12i;

assign src2_is_imm   = inst_slli_w | inst_srli_w | inst_srai_w | inst_addi_w | inst_ld_w | inst_st_w | inst_lu12i_w | inst_jirl | inst_bl |
					   inst_slti | inst_sltui  | inst_andi | inst_ori | inst_xori | inst_pcaddu12i | inst_ld_b | inst_ld_h | inst_ld_bu | inst_ld_hu | inst_st_b | inst_st_h ;
					   


assign res_from_mem  = inst_ld_w | inst_ld_b | inst_ld_h | inst_ld_bu | inst_ld_hu;
assign load_op       = inst_ld_w | inst_ld_b | inst_ld_h | inst_ld_bu | inst_ld_hu | inst_csrrd | inst_csrwr | inst_csrxchg | inst_rdcntvh_w | inst_rdcntvl_w | inst_rdcntid_w;
assign dst_is_r1     = inst_bl;
assign dst_is_rj     = inst_rdcntid_w;
assign gr_we         = ~inst_st_w & ~inst_beq & ~inst_bne & ~inst_b & ~inst_blt & ~inst_bltu & ~inst_bge & ~inst_bgeu & ~inst_st_b & ~inst_st_h & ~inst_syscall & ~inst_ertn & 
                       ~inst_break & ~inst_ine & ~inst_tlbsrch & ~inst_tlbrd & ~inst_tlbwr & ~inst_tlbfill & ~inst_invtlb;
assign mem_we        = inst_st_w | inst_st_b|inst_st_h;

assign dest          = dst_is_r1 ? 5'd1 :
                       dst_is_rj ? rj   :
                       no_dest   ? 5'd0 : rd;

assign rf_raddr1 =rj;
assign rf_raddr2 = src_reg_is_rd ? rd :rk;
regfile u_regfile(
    .clk    (clk      ),
    .raddr1 (rf_raddr1),
    .rdata1 (rf_rdata1),
    .raddr2 (rf_raddr2),
    .rdata2 (rf_rdata2),
    .we     (rf_we    ),
    .waddr  (rf_waddr ),
    .wdata  (rf_wdata )
    );


assign rj_value  = rj_equal? (rj==es_to_ds_dest? es_to_ds_value : 
                              rj==ms_to_ds_dest? ms_to_ds_value : 
							                     ws_to_ds_value ):
                                                 rf_rdata1; 
assign rkd_value = rk_equal && ~src_reg_is_rd? (rk==es_to_ds_dest? es_to_ds_value : 
                                                rk==ms_to_ds_dest? ms_to_ds_value : 
							                                       ws_to_ds_value ):
			       rd_equal && src_reg_is_rd?  (rd==es_to_ds_dest? es_to_ds_value : 
                                                rd==ms_to_ds_dest? ms_to_ds_value : 
							                                       ws_to_ds_value ):
												                   rf_rdata2;
wire rj_eq_rd;
wire rj_lt_rd;
wire rj_lt_rd_u;

wire compare_cout;
wire[31:0] compare_result;
wire[31:0] rkd;
assign rkd=~rkd_value+1'b1;
assign {compare_cout,compare_result}=rj_value+rkd;
assign rj_lt_rd=(rj_value[31] & ~rkd_value[31]) || (~(rj_value[31] ^ rkd_value[31]) & compare_result[31]);
assign rj_lt_rd_u=(rkd_value!=32'd0)? ~compare_cout:~(rj_value!=32'd0);

assign rj_eq_rd = (rj_value == rkd_value);

assign br_stall = br_taken && load_stall && ds_valid;
assign br_taken = (   inst_beq  &&  rj_eq_rd
                   || inst_bne  && !rj_eq_rd
				   || inst_blt && rj_lt_rd
				   || inst_bge && !rj_lt_rd
				   || inst_bltu && rj_lt_rd_u
				   || inst_bgeu && !rj_lt_rd_u
                   || inst_jirl
                   || inst_bl
                   || inst_b
                  ) && ds_valid; 
assign br_target = (inst_beq || inst_bne || inst_bl || inst_b || inst_blt || inst_bltu || inst_bge || inst_bgeu) ? (ds_pc + br_offs) :
                                                                                                    /*inst_jirl*/ (rj_value + jirl_offs);
												  
wire br_branch;
assign br_branch=(inst_beq || inst_bne || inst_bl || inst_b || inst_blt || inst_bltu || inst_bge || inst_bgeu || inst_jirl) && ds_valid;
										  
endmodule
