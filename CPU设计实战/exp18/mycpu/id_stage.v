`include "mycpu.h"

module id_stage(
    input  wire                         clk           ,
    input  wire                         reset         ,
    //allowin 
    input  wire                         es_allowin    ,
    output wire                         ds_allowin    ,
    //from fs 
    input  wire                         fs_to_ds_valid,
    input  wire [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus  ,
    //forward path
    input  wire [`ES_TO_DS_FORWARD_BUS - 1:0] es_to_ds_forward_bus,
    input  wire [`MS_TO_DS_FORWARD_BUS - 1:0] ms_to_ds_forward_bus,
    input  wire [`WS_TO_DS_FORWARD_BUS - 1:0] ws_to_ds_forward_bus,
    //to es
    output wire                         ds_to_es_valid,
    output wire [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    //to fs
    output wire [`BR_BUS_WD       -1:0] br_bus        ,
    //to rf: for write back
    input  wire [`WS_TO_RF_BUS_WD -1:0] ws_to_rf_bus  ,
    //csr & excp
    input  wire                              has_int       ,
    input  wire                              excp_flush    ,
    input  wire                              ertn_flush    ,
    input  wire                              refetch_flush ,
    output wire [13:0]                       rd_csr_addr   ,
    input  wire [31:0]                       rd_csr_data   ,
    input  wire [63:0]                       timer_64      ,
    input  wire [31:0]                       csr_tid       
);

reg         ds_valid   ;
wire        ds_ready_go;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

reg  [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus_r;

wire [31:0] ds_inst;
wire [31:0] ds_pc  ;
wire        ds_excp;
wire [ 0:0] ds_excp_num;
assign {ds_excp    ,
        ds_excp_num,
        ds_inst    ,
        ds_pc      } = fs_to_ds_bus_r;

wire        rf_we   ;
wire [ 4:0] rf_waddr;
wire [31:0] rf_wdata;
assign {rf_we   ,  //37:37
        rf_waddr,  //36:32
        rf_wdata   //31:0
       } = ws_to_rf_bus;

// control signals
wire [13:0] alu_op;
wire [ 3:0] mul_div_op;
wire        mul_div_sign;
wire        src1_is_pc;
wire        src2_is_imm;
wire        res_from_mem;
wire        dst_is_r1;
wire        dst_is_rj;
wire        gr_we;
wire        mem_we;
wire [ 1:0] mem_size;
wire        mem_sign_ext;
wire        src_reg_is_rd;
wire [4: 0] dest;
wire        need_ui5;
wire        need_ui12;
wire        need_si12;
wire        need_si16;
wire        need_si20;
wire        need_si26;  
wire        src2_is_4;
wire        res_from_csr;
wire        csr_we;
wire        csr_mask;

// inst splits
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
wire [13:0] csr_idx;

wire [63:0] op_31_26_d;
wire [15:0] op_25_22_d;
wire [ 3:0] op_21_20_d;
wire [31:0] op_19_15_d;
wire [31:0] rd_d;
wire [31:0] rj_d;
wire [31:0] rk_d;

// inst def
wire        inst_valid;

wire        inst_add_w; 
wire        inst_sub_w;  
wire        inst_slt;    
wire        inst_sltu;  
wire        inst_nor;    
wire        inst_and;    
wire        inst_or;     
wire        inst_xor;
wire        inst_andn;
wire        inst_orn;
wire        inst_sll_w;
wire        inst_srl_w;
wire        inst_sra_w;   
wire        inst_mul_w;
wire        inst_mulh_w;
wire        inst_mulh_wu;
wire        inst_div_w;
wire        inst_mod_w;
wire        inst_div_wu;
wire        inst_mod_wu;

wire        inst_addi_w; 
wire        inst_slti;
wire        inst_sltui;
wire        inst_andi;
wire        inst_ori;
wire        inst_xori;
wire        inst_slli_w;  
wire        inst_srli_w;  
wire        inst_srai_w;  
wire        inst_lu12i_w;
wire        inst_pcaddi;
wire        inst_pcaddu12i;

wire        inst_jirl;   
wire        inst_b;      
wire        inst_bl;     
wire        inst_beq;    
wire        inst_bne;
wire        inst_blt;
wire        inst_bge;
wire        inst_bltu;
wire        inst_bgeu;   

wire        inst_ld_b;
wire        inst_ld_bu;
wire        inst_ld_h;
wire        inst_ld_hu;
wire        inst_ld_w;  
wire        inst_st_b;
wire        inst_st_h;
wire        inst_st_w; 

wire        inst_syscall;
wire        inst_break;
wire        inst_csrrd;
wire        inst_csrwr;
wire        inst_csrxchg;
wire        inst_ertn;
wire        inst_rdcntid_w;
wire        inst_rdcntvl_w;
wire        inst_rdcntvh_w;
wire        inst_tlbsrch;
wire        inst_tlbrd;
wire        inst_tlbwr;
wire        inst_tlbfill;
wire        inst_invtlb;

// reg & imm value
wire [ 4:0] rf_raddr1;
wire [31:0] rf_rdata1;
wire [ 4:0] rf_raddr2;
wire [31:0] rf_rdata2;
wire [31:0] rj_value;
wire [31:0] rkd_value;
wire [31:0] ds_imm;
wire [31:0] csr_data;

// forward and stall
wire inst_need_rj;
wire inst_need_rkd;
wire rf1_stall;
wire rf2_stall;

wire        es_dep_need_stall;
wire        es_forward_enable;
wire [ 4:0] es_forward_reg;
wire [31:0] es_forward_data;
assign {es_dep_need_stall,
        es_forward_enable,
        es_forward_reg,
        es_forward_data
       } = es_to_ds_forward_bus;

wire        ms_dep_need_stall;
wire        ms_forward_enable;
wire [ 4:0] ms_forward_reg;
wire [31:0] ms_forward_data;
assign {ms_dep_need_stall,
        ms_forward_enable,
        ms_forward_reg,
        ms_forward_data
       } = ms_to_ds_forward_bus;

wire        ws_forward_enable;
wire [ 4:0] ws_forward_reg;
wire [31:0] ws_forward_data;
assign {ws_forward_enable,
        ws_forward_reg,
        ws_forward_data
       } = ws_to_ds_forward_bus;

// branch
wire        rj_eq_rd;
wire        rj_lt_rd_unsign;
wire        rj_lt_rd_sign;
wire        br_stall;
wire        br_taken;

wire [31:0] br_offs;
wire [31:0] jirl_offs;
wire [31:0] br_target;
assign br_bus       = {br_stall,br_taken,br_target};

// excp
wire excp;
wire [ 4:0] excp_num;
wire excp_ine;

assign ds_to_es_bus = {excp_num    ,  //220:216
                       inst_ertn   ,  //215:215
                       excp        ,  //214:214
                       inst_tlbsrch,  //213:213
                       inst_tlbrd  ,  //212:212
                       inst_tlbwr  ,  //211:211
                       inst_tlbfill,  //210:210
                       inst_invtlb ,  //209:209
                       res_from_csr,  //208:208
                       csr_we      ,  //207:207
                       csr_idx     ,  //206:193
                       csr_mask    ,  //192:192
                       csr_data    ,  //191:160
                       mem_size    ,  //159:158
                       mem_sign_ext,  //157:157
                       alu_op      ,  //156:143
                       mul_div_op  ,  //142:139
                       mul_div_sign,  //138:138
                       res_from_mem,  //137:137
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

assign ds_ready_go    = !(rf1_stall || rf2_stall) || excp;
assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
assign ds_to_es_valid = ds_valid && ds_ready_go;
always @(posedge clk) begin 
    if (reset) begin     
        ds_valid <= 1'b0;
    end
    else if (flush_sign) begin
        ds_valid <= 1'b0;
    end
    else if (br_taken && ds_allowin) begin
        ds_valid <= 1'b0;
    end
    else if (ds_allowin) begin 
        ds_valid <= fs_to_ds_valid;
    end

    if (fs_to_ds_valid && ds_allowin) begin
        fs_to_ds_bus_r <= fs_to_ds_bus;
    end
end

// inst split
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

assign csr_idx = ds_inst[23:10];

decoder_6_64 u_dec0(.in(op_31_26 ), .out(op_31_26_d ));
decoder_4_16 u_dec1(.in(op_25_22 ), .out(op_25_22_d ));
decoder_2_4  u_dec2(.in(op_21_20 ), .out(op_21_20_d ));
decoder_5_32 u_dec3(.in(op_19_15 ), .out(op_19_15_d ));
decoder_5_32 u_dec4(.in(rd ), .out(rd_d ));
decoder_5_32 u_dec5(.in(rj ), .out(rj_d ));
decoder_5_32 u_dec6(.in(rk ), .out(rk_d ));

// inst def
assign inst_add_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
assign inst_sub_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
assign inst_slt        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
assign inst_sltu       = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
assign inst_nor        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
assign inst_and        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
assign inst_or         = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
assign inst_xor        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];
assign inst_andn       = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0d];
assign inst_orn        = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0c];
assign inst_sll_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0e];
assign inst_srl_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0f];
assign inst_sra_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h10];
assign inst_mul_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h18];
assign inst_mulh_w     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h19];
assign inst_mulh_wu    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h1a];
assign inst_div_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h00];
assign inst_mod_w      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h01];
assign inst_div_wu     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h02];
assign inst_mod_wu     = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h03];

assign inst_addi_w     = op_31_26_d[6'h00] & op_25_22_d[4'ha];
assign inst_slti       = op_31_26_d[6'h00] & op_25_22_d[4'h8];
assign inst_sltui      = op_31_26_d[6'h00] & op_25_22_d[4'h9];
assign inst_andi       = op_31_26_d[6'h00] & op_25_22_d[4'hd];
assign inst_ori        = op_31_26_d[6'h00] & op_25_22_d[4'he];
assign inst_xori       = op_31_26_d[6'h00] & op_25_22_d[4'hf];
assign inst_slli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
assign inst_srli_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
assign inst_srai_w     = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
assign inst_lu12i_w    = op_31_26_d[6'h05] & ~ds_inst[25];
assign inst_pcaddi     = op_31_26_d[6'h06] & ~ds_inst[25];
assign inst_pcaddu12i  = op_31_26_d[6'h07] & ~ds_inst[25];

assign inst_jirl       = op_31_26_d[6'h13];
assign inst_b          = op_31_26_d[6'h14];
assign inst_bl         = op_31_26_d[6'h15];
assign inst_beq        = op_31_26_d[6'h16];
assign inst_bne        = op_31_26_d[6'h17];
assign inst_blt        = op_31_26_d[6'h18];
assign inst_bge        = op_31_26_d[6'h19];
assign inst_bltu       = op_31_26_d[6'h1a];
assign inst_bgeu       = op_31_26_d[6'h1b];

assign inst_ld_b       = op_31_26_d[6'h0a] & op_25_22_d[4'h0];
assign inst_ld_h       = op_31_26_d[6'h0a] & op_25_22_d[4'h1];
assign inst_ld_bu      = op_31_26_d[6'h0a] & op_25_22_d[4'h8];
assign inst_ld_hu      = op_31_26_d[6'h0a] & op_25_22_d[4'h9];
assign inst_ld_w       = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
assign inst_st_b       = op_31_26_d[6'h0a] & op_25_22_d[4'h4];
assign inst_st_h       = op_31_26_d[6'h0a] & op_25_22_d[4'h5];
assign inst_st_w       = op_31_26_d[6'h0a] & op_25_22_d[4'h6];

assign inst_syscall    = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h16];
assign inst_break      = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h14];
assign inst_csrrd      = op_31_26_d[6'h01] & ~ds_inst[25] & ~ds_inst[24] & rj_d[5'h00];
assign inst_csrwr      = op_31_26_d[6'h01] & ~ds_inst[25] & ~ds_inst[24] & rj_d[5'h01];
assign inst_csrxchg    = op_31_26_d[6'h01] & ~ds_inst[25] & ~ds_inst[24] & (~rj_d[5'h00] & ~rj_d[5'h01]);  //rj != 0,1
assign inst_ertn       = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & rk_d[5'h0e] & rj_d[5'h00] & rd_d[5'h00];
assign inst_rdcntid_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h0] & op_19_15_d[5'h00] & rk_d[5'h18] & rd_d[5'h00];
assign inst_rdcntvl_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h0] & op_19_15_d[5'h00] & rk_d[5'h18] & rj_d[5'h00] & !rd_d[5'h00];
assign inst_rdcntvh_w  = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h0] & op_19_15_d[5'h00] & rk_d[5'h19] & rj_d[5'h00];
assign inst_tlbsrch    = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & rk_d[5'h0a] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbrd      = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & rk_d[5'h0b] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbwr      = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & rk_d[5'h0c] & rj_d[5'h00] & rd_d[5'h00];
assign inst_tlbfill    = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h10] & rk_d[5'h0d] & rj_d[5'h00] & rd_d[5'h00];
assign inst_invtlb     = op_31_26_d[6'h01] & op_25_22_d[4'h9] & op_21_20_d[2'h0] & op_19_15_d[5'h13];

assign inst_valid = inst_add_w     |
                    inst_sub_w     |
                    inst_slt       |
                    inst_sltu      |
                    inst_nor       |
                    inst_and       |
                    inst_or        |
                    inst_xor       |
                    inst_sll_w     |
                    inst_srl_w     |
                    inst_sra_w     |
                    inst_mul_w     |
                    inst_mulh_w    |
                    inst_mulh_wu   |
                    inst_div_w     |
                    inst_mod_w     |
                    inst_div_wu    |
                    inst_mod_wu    |
                    inst_break     |
                    inst_syscall   |
                    inst_slli_w    |
                    inst_srli_w    |
                    inst_srai_w    |
                    inst_slti      |
                    inst_sltui     |
                    inst_addi_w    |
                    inst_andi      |
                    inst_ori       |
                    inst_xori      |
                    inst_ld_b      |
                    inst_ld_h      |
                    inst_ld_w      |
                    inst_st_b      |
                    inst_st_h      |
                    inst_st_w      |
                    inst_ld_bu     |
                    inst_ld_hu     |
                    inst_jirl      |
                    inst_b         |
                    inst_bl        |
                    inst_beq       |
                    inst_bne       |
                    inst_blt       |
                    inst_bge       |
                    inst_bltu      |
                    inst_bgeu      |
                    inst_lu12i_w   |
                    inst_pcaddu12i |
                    inst_csrrd     |
                    inst_csrwr     |
                    inst_csrxchg   |
                    inst_rdcntid_w |
                    inst_rdcntvh_w |
                    inst_rdcntvl_w |
                    inst_ertn      |
                    inst_tlbsrch   |
                    inst_tlbrd     |
                    inst_tlbwr     |
                    inst_tlbfill   |
                    (inst_invtlb && (rd == 5'd0 || 
                                     rd == 5'd1 || 
                                     rd == 5'd2 || 
                                     rd == 5'd3 || 
                                     rd == 5'd4 ||
                                     rd == 5'd5 || 
                                     rd == 5'd6 ));

// control signals
assign alu_op[ 0] = inst_add_w    |
                    inst_addi_w   |
                    inst_pcaddi   |
                    inst_pcaddu12i|
                    inst_jirl     | 
                    inst_bl       |                    
                    inst_ld_b     |
                    inst_ld_h     |
                    inst_ld_bu    |
                    inst_ld_hu    |
                    inst_ld_w     |
                    inst_st_b     |
                    inst_st_h     |
                    inst_st_w     ;
assign alu_op[ 1] = inst_sub_w;
assign alu_op[ 2] = inst_slt   | inst_slti;
assign alu_op[ 3] = inst_sltu  | inst_sltui;
assign alu_op[ 4] = inst_and   | inst_andi;
assign alu_op[ 5] = inst_nor;
assign alu_op[ 6] = inst_or    | inst_ori;
assign alu_op[ 7] = inst_xor   | inst_xori;
assign alu_op[ 8] = inst_sll_w | inst_slli_w;
assign alu_op[ 9] = inst_srl_w | inst_srli_w;
assign alu_op[10] = inst_sra_w | inst_srai_w;
assign alu_op[11] = inst_lu12i_w;
assign alu_op[12] = inst_andn;
assign alu_op[13] = inst_orn;

assign mul_div_op[ 0] = inst_mul_w;
assign mul_div_op[ 1] = inst_mulh_w | inst_mulh_wu;
assign mul_div_op[ 2] = inst_div_w  | inst_div_wu;
assign mul_div_op[ 3] = inst_mod_w  | inst_mod_wu;
assign mul_div_sign  = inst_mul_w | inst_mulh_w | inst_div_w | inst_mod_w;

assign src1_is_pc    = inst_jirl   | 
                       inst_bl     | 
                       inst_pcaddi | 
                       inst_pcaddu12i;
assign src2_is_imm   = inst_addi_w    |
                       inst_slti      |
                       inst_sltui     |
                       inst_andi      |
                       inst_ori       |
                       inst_xori      |
                       inst_slli_w    | 
                       inst_srli_w    |
                       inst_srai_w    |
                       inst_lu12i_w   |
                       inst_pcaddi    |
                       inst_pcaddu12i |
                       inst_jirl      |
                       inst_bl        |
                       inst_ld_b      |
                       inst_ld_h      |
                       inst_ld_bu     |
                       inst_ld_hu     |
                       inst_ld_w      |
                       inst_st_b      |
                       inst_st_h      |
                       inst_st_w      ;
assign res_from_mem  = inst_ld_b  | 
                       inst_ld_bu | 
                       inst_ld_h  | 
                       inst_ld_hu |
                       inst_ld_w  ;
assign dst_is_r1     = inst_bl;
assign dst_is_rj     = inst_rdcntid_w;
assign gr_we         = ~inst_b    & 
                       ~inst_beq  & 
                       ~inst_bne  & 
                       ~inst_blt  & 
                       ~inst_bge  & 
                       ~inst_bltu & 
                       ~inst_bgeu & 
                       ~inst_st_b & 
                       ~inst_st_h &
                       ~inst_st_w &
                       ~inst_syscall &
                       ~inst_tlbsrch &
                       ~inst_tlbrd   &
                       ~inst_tlbwr   &
                       ~inst_tlbfill &
                       ~inst_invtlb  ;
assign mem_we        = inst_st_b | inst_st_h  | inst_st_w;
assign mem_size[0]   = inst_ld_b | inst_ld_bu | inst_st_b;
assign mem_size[1]   = inst_ld_h | inst_ld_hu | inst_st_h;
assign mem_sign_ext  = inst_ld_b | inst_ld_h;
assign src_reg_is_rd = inst_beq  | 
                       inst_bne  |
                       inst_blt  | 
                       inst_bge  | 
                       inst_bltu | 
                       inst_bgeu | 
                       inst_st_b | 
                       inst_st_h |
                       inst_st_w |
                       inst_csrwr|
                       inst_csrxchg;
assign dest       = (dst_is_r1) ? 5'd1 :
                    (dst_is_rj) ? rj   : rd;
assign need_ui5   = inst_slli_w |
                    inst_srli_w | 
                    inst_srai_w ;
assign need_ui12  = inst_andi | 
                    inst_ori  | 
                    inst_xori ;
assign need_si12  = inst_addi_w |     
                    inst_slti   | 
                    inst_sltui  | 
                    inst_ld_b   | 
                    inst_ld_bu  | 
                    inst_ld_h   | 
                    inst_ld_hu  | 
                    inst_ld_w   |
                    inst_st_b   | 
                    inst_st_h   |
                    inst_st_w   ;
assign need_si16  = inst_jirl |
                    inst_beq  | 
                    inst_bne  | 
                    inst_blt  | 
                    inst_bge  | 
                    inst_bltu | 
                    inst_bgeu ;
assign need_si20  = inst_lu12i_w | 
                    inst_pcaddu12i;
assign need_si26  = inst_b |
                    inst_bl;
assign src2_is_4  = inst_jirl | 
                    inst_bl   ;

// reg & imm value
assign ds_imm = {32{src2_is_4   }} &  32'h4       | 
                {32{need_ui5    }} & {{20{i12[11]}}, i12[11:0]} |
                {32{need_si12   }} & {{20{i12[11]}}, i12[11:0]} |
                {32{need_ui12   }} & {20'b0, i12} |
		        {32{need_si20   }} & {i20[19:0], 12'b0};

assign rf_raddr1 = rj;
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

// forward and stall
assign inst_need_rj  =  inst_add_w  |
                        inst_sub_w  |
                        inst_slt    |
                        inst_sltu   |
                        inst_nor    |
                        inst_and    |
                        inst_or     |
                        inst_xor    |
                        inst_sll_w  |
                        inst_srl_w  |
                        inst_sra_w  |
                        inst_mul_w  |
                        inst_mulh_w |
                        inst_mulh_wu|
                        inst_div_w  |
                        inst_div_wu |
                        inst_mod_w  |
                        inst_mod_wu |
                        inst_addi_w |
                        inst_slti   |
                        inst_sltui  |
                        inst_andi   |
                        inst_ori    |
                        inst_xori   |  
                        inst_slli_w |
                        inst_srli_w |
                        inst_srai_w |                      
                        inst_jirl   |    
                        inst_beq    |
                        inst_bne    |
                        inst_blt    | 
                        inst_bge    | 
                        inst_bltu   |
                        inst_bgeu   |
                        inst_ld_b   |
                        inst_ld_h   |
                        inst_ld_bu  |
                        inst_ld_hu  |
                        inst_ld_w   |
                        inst_st_b   |
                        inst_st_h   |
                        inst_st_w   |
                        inst_invtlb ;
assign inst_need_rkd =  inst_add_w  |
                        inst_sub_w  |
                        inst_slt    |
                        inst_sltu   |
                        inst_nor    |
                        inst_and    |
                        inst_or     |
                        inst_xor    |
                        inst_sll_w  |
                        inst_srl_w  |
                        inst_sra_w  |
                        inst_mul_w  |
                        inst_mulh_w |
                        inst_mulh_wu|
                        inst_div_w  |
                        inst_div_wu |
                        inst_mod_w  |
                        inst_mod_wu |
                        inst_beq    |
                        inst_bne    |
                        inst_blt    | 
                        inst_bge    | 
                        inst_bltu   |
                        inst_bgeu   |
                        inst_st_b   |
                        inst_st_h   |
                        inst_st_w   |
                        inst_csrwr  |
                        inst_csrxchg|
                        inst_invtlb ;

assign rf1_stall = inst_need_rj &&
                   ((es_dep_need_stall && (es_forward_reg == rf_raddr1)) ||
                    (ms_dep_need_stall && (ms_forward_reg == rf_raddr1)));
assign rf2_stall = inst_need_rkd &&
                   ((es_dep_need_stall && (es_forward_reg == rf_raddr2)) ||
                    (ms_dep_need_stall && (ms_forward_reg == rf_raddr2)));

assign rj_value  = es_forward_enable && (es_forward_reg == rf_raddr1) ? es_forward_data :
                   ms_forward_enable && (ms_forward_reg == rf_raddr1) ? ms_forward_data :
                   ws_forward_enable && (ws_forward_reg == rf_raddr1) ? ws_forward_data :
                                                                        rf_rdata1; 
assign rkd_value = es_forward_enable && (es_forward_reg == rf_raddr2) ? es_forward_data :
                   ms_forward_enable && (ms_forward_reg == rf_raddr2) ? ms_forward_data :
                   ws_forward_enable && (ws_forward_reg == rf_raddr2) ? ws_forward_data :
                                                                        rf_rdata2; 

// branch
assign rj_eq_rd        = (rj_value == rkd_value);
assign rj_lt_rd_unsign = (rj_value < rkd_value);
assign rj_lt_rd_sign   = (rj_value[31] && ~rkd_value[31]) ? 1'b1 :
                         (~rj_value[31] && rkd_value[31]) ? 1'b0 : rj_lt_rd_unsign;                         

assign br_stall = br_taken && (rf1_stall || rf2_stall);
assign br_taken = (   inst_beq  &&  rj_eq_rd
                   || inst_bne  && !rj_eq_rd
                   || inst_blt  &&  rj_lt_rd_sign
                   || inst_bge  && !rj_lt_rd_sign
                   || inst_bltu &&  rj_lt_rd_unsign
                   || inst_bgeu && !rj_lt_rd_unsign
                   || inst_jirl
                   || inst_bl
                   || inst_b
                  ) && ds_valid && !flush_sign; 

assign br_offs = need_si26 ? {{ 4{i26[25]}}, i26[25:0], 2'b0} : 
                             {{14{i16[15]}}, i16[15:0], 2'b0} ;

assign jirl_offs = {{14{i16[15]}}, i16[15:0], 2'b0};
assign br_target = (inst_bl || inst_b || inst_beq || inst_bne || inst_blt || inst_bge || inst_bltu || inst_bgeu) ? 
                                                                 (ds_pc + br_offs) :
                                                   /*inst_jirl*/ (rj_value + jirl_offs);

// excp
assign excp_ine = ~inst_valid;

assign excp =  inst_syscall | inst_break | ds_excp & ds_valid | excp_ine | has_int;
assign excp_num = {excp_ine, inst_break, inst_syscall, ds_excp_num, has_int};

assign res_from_csr  = inst_csrrd | inst_csrwr | inst_csrxchg | inst_rdcntid_w | inst_rdcntvh_w | inst_rdcntvl_w;
assign csr_we        = inst_csrwr | inst_csrxchg;
assign csr_mask      = inst_csrxchg;

wire        rdcnt_en;
wire [31:0] rdcnt_result;
assign {rdcnt_en, rdcnt_result} = ({33{inst_rdcntvl_w}} & {1'b1, timer_64[31: 0]}) |
                                  ({33{inst_rdcntvh_w}} & {1'b1, timer_64[63:32]}) |
                                  ({33{inst_rdcntid_w}} & {1'b1, csr_tid}); 

assign rd_csr_addr = csr_idx;
assign csr_data    = rdcnt_en ? rdcnt_result : rd_csr_data;

endmodule
