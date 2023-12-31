`timescale 1ns / 1ps


module ID_stage (
    input clk,
    input resetn,
    input D_stall,
    input D_div_mod_stall,
    input [31:0] F_inst,
    input [31:0] F_pcAddr,
    input [31:0] F_pcPlus4,

    input [1:0] D_forwardA,
    input [1:0] D_forwardB,

    input E_take_bOrj,

    input [31:0] e_aluResult,
    input [31:0] M_aluResult,
    input [31:0] m_memReadData,

    input W_regW,
    input [4:0] W_regWAdd,
    input [31:0] w_regWData,

    output [31:0] D_pcAddr,
    output [31:0] d_pc_next,
    output [31:0] d_aluSrc1,
    output [31:0] d_aluSrc2,
    output [4:0] d_regWAdd,
    output d_regW,
    output d_res_from_mem,
    output [11:0] d_aluOP,
    output d_memReadE,
    d_memWriteE,
    output [3:0] d_memReadW,
    d_memWriteW,
    output [31:0] d_regDataB,
    output d_mul_alu,
    output d_mul_div_sign,
    output d_mul_high,
    output d_is_mod,
    output d_div_mod_alu,
    output reg [31:0] d_csr_data,
    output d_csr_inst,
    output [4:0] d_regAddA,
    output [4:0] d_regAddB,
    output d_branch,
    output d_loadu,
    output d_take_bOrj
);
  wire [31:0] inst;
  wire [31:0] D_pcPlus4;

  parameter WIDTH_ID_INIT = 96;
  flopenr #(
      .WIDTH(WIDTH_ID_INIT)
  ) id_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~D_stall & ~D_div_mod_stall),  //阻塞——complete_delay + 前递 + 分支
      .d({F_inst, F_pcAddr, F_pcPlus4}),
      .q({inst, D_pcAddr, D_pcPlus4})
  );

  wire [ 5:0] d_op_31_26;  //inst[31:26]
  wire [ 3:0] d_op_25_22;  //inst[25:22]
  wire [ 1:0] d_op_21_20;  //inst[21:20]
  wire [ 4:0] d_op_19_15;  //inst[19:15]
  wire [ 4:0] d_rd;  //inst的rd编码
  wire [ 4:0] d_rj;  //inst的rj编码
  wire [ 4:0] d_rk;  //inst的rk编码
  wire [11:0] d_i12;  //inst中的12位立即数
  wire [13:0] d_i14;
  wire [19:0] d_i20;  //inst中的20位立即数
  wire [15:0] d_i16;  //inst中的16位立即数
  wire [25:0] d_i26;  //inst中的26位立即数

  wire [63:0] d_op_31_26_d;  //6-64译码
  wire [15:0] d_op_25_22_d;  //4-16译码
  wire [ 3:0] d_op_21_20_d;  //2-4译码
  wire [31:0] d_op_19_15_d;  //5-32译码

  assign d_op_31_26 = inst[31:26];
  assign d_op_25_22 = inst[25:22];
  assign d_op_21_20 = inst[21:20];
  assign d_op_19_15 = inst[19:15];

  assign d_rd       = inst[4:0];
  assign d_rj       = inst[9:5];
  assign d_rk       = inst[14:10];

  assign d_i12      = inst[21:10];
  assign d_i14      = inst[23:10];
  assign d_i20      = inst[24:5];
  assign d_i16      = inst[25:10];
  assign d_i26      = {inst[9:0], inst[25:10]};

  decoder_6_64 u_dec0 (
      .in (d_op_31_26),
      .out(d_op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in (d_op_25_22),
      .out(d_op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in (d_op_21_20),
      .out(d_op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in (d_op_19_15),
      .out(d_op_19_15_d)
  );

  wire inst_rdcntid = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_rdcntvl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rj == 5'h00 & ~E_take_bOrj;
  wire inst_rdcntvh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h19 & d_rj == 5'h00 & ~E_take_bOrj;
  wire inst_add = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h00] & ~E_take_bOrj;
  wire inst_sub = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h02] & ~E_take_bOrj;
  wire inst_slt = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h04] & ~E_take_bOrj;
  wire inst_sltu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h05] & ~E_take_bOrj;
  wire inst_nor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h08] & ~E_take_bOrj;
  wire inst_and = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h09] & ~E_take_bOrj;
  wire inst_or = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0a] & ~E_take_bOrj;
  wire inst_xor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0b] & ~E_take_bOrj;
  wire inst_sll = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0e] & ~E_take_bOrj;
  wire inst_srl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0f] & ~E_take_bOrj;
  wire inst_sra = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h10] & ~E_take_bOrj;
  wire inst_mul = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h18] & ~E_take_bOrj;
  wire inst_mulh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h19] & ~E_take_bOrj;
  wire inst_mulhu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h1a] & ~E_take_bOrj;
  wire inst_div = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h00] & ~E_take_bOrj;
  wire inst_mod = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h01] & ~E_take_bOrj;
  wire inst_divu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h02] & ~E_take_bOrj;
  wire inst_modu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h03] & ~E_take_bOrj;
  wire inst_break = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h14] & ~E_take_bOrj;
  wire inst_syscall = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h16] & ~E_take_bOrj;
  wire inst_slli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h01] & ~E_take_bOrj;
  wire inst_srli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h09] & ~E_take_bOrj;
  wire inst_srai = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj;
  wire inst_slti = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h8] & ~E_take_bOrj;
  wire inst_sltui = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h9] & ~E_take_bOrj;
  wire inst_addi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'ha] & ~E_take_bOrj;
  wire inst_andi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hd] & ~E_take_bOrj;
  wire inst_ori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'he] & ~E_take_bOrj;
  wire inst_xori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hf] & ~E_take_bOrj;
  wire inst_csrrd = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h00 & ~E_take_bOrj;
  wire inst_csrwr = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h01 & ~E_take_bOrj;
  wire inst_csrxchg = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & ~inst_csrrd & ~inst_csrwr  & ~E_take_bOrj;
  wire inst_cacop = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h8] & ~E_take_bOrj;
  wire inst_tlbsrch = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0a & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_tlbrd = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0b & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_tlbwr = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0c & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_tlbfill = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0d & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_ertn = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0e & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj;
  wire inst_idle = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj;
  wire inst_invtlb = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h13] & ~E_take_bOrj;
  wire inst_lu12i = d_op_31_26_d[6'h05] & ~inst[25] & ~E_take_bOrj;
  wire inst_pcaddu12i = d_op_31_26_d[6'h07] & ~inst[25] & ~E_take_bOrj;
  wire inst_ll = d_op_31_26_d[6'h08] & ~inst[25] & ~inst[24] & ~E_take_bOrj;
  wire inst_sc = d_op_31_26_d[6'h08] & ~inst[25] & inst[24] & ~E_take_bOrj;
  wire inst_ld_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h0] & ~E_take_bOrj;
  wire inst_ld_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h1] & ~E_take_bOrj;
  wire inst_ld_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h2] & ~E_take_bOrj;
  wire inst_st_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h4] & ~E_take_bOrj;
  wire inst_st_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h5] & ~E_take_bOrj;
  wire inst_st_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h6] & ~E_take_bOrj;
  wire inst_ld_bu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h8] & ~E_take_bOrj;
  wire inst_ld_hu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h9] & ~E_take_bOrj;
  wire inst_preld = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'hb] & ~E_take_bOrj;
  wire inst_dbar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h04] & ~E_take_bOrj;
  wire inst_ibar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h05] & ~E_take_bOrj;
  wire inst_bceqz = d_op_31_26_d[6'h12] & ~inst[9] & ~inst[8] & ~E_take_bOrj;
  wire inst_bcnez = d_op_31_26_d[6'h12] & ~inst[9] & inst[8] & ~E_take_bOrj;
  wire inst_jirl = d_op_31_26_d[6'h13] & ~E_take_bOrj;
  wire inst_b = d_op_31_26_d[6'h14] & ~E_take_bOrj;
  wire inst_bl = d_op_31_26_d[6'h15] & ~E_take_bOrj;
  wire inst_beq = d_op_31_26_d[6'h16] & ~E_take_bOrj;
  wire inst_bne = d_op_31_26_d[6'h17] & ~E_take_bOrj;
  wire inst_blt = d_op_31_26_d[6'h18] & ~E_take_bOrj;
  wire inst_bge = d_op_31_26_d[6'h19] & ~E_take_bOrj;
  wire inst_bltu = d_op_31_26_d[6'h1a] & ~E_take_bOrj;
  wire inst_bgeu = d_op_31_26_d[6'h1b] & ~E_take_bOrj;

  wire [1:0] d_selPC;
  wire d_src1_is_pc;
  wire d_src2_is_4;
  wire d_src2_is_imm;
  wire d_src_reg_is_rd;
  wire d_dst_is_r1;
  wire d_need_si12;
  wire d_need_si14;
  wire d_need_ui12;
  wire d_need_si16;
  wire d_need_si20;
  wire d_need_si26;
  wire d_rjEqrd;
  wire d_rjLTrd;
  wire d_rjLTrdU;

  assign d_regW = ~inst_st_b    &
                    ~inst_st_h    &
                    ~inst_st_w    &
                    ~inst_beq     &
                    ~inst_bne     &
                    ~inst_blt     &
                    ~inst_bge     &
                    ~inst_bltu    &
                    ~inst_bgeu    &
                    ~inst_b       &
                    ~inst_syscall &
                    ~inst_tlbsrch &
                    ~inst_tlbrd   &
                    ~inst_tlbwr   &
                    ~inst_tlbfill &
                    ~inst_invtlb  &
                    ~inst_cacop   &
                    ~inst_preld   &
                    ~inst_dbar    &
                    ~inst_ibar     & ~E_take_bOrj;
  assign d_loadu = inst_ld_bu | inst_ld_hu;
  assign d_selPC[0] = (inst_bl 
                    | inst_b 
                    | (inst_beq & d_rjEqrd) 
                    | (inst_bne & ~d_rjEqrd)
                    | (inst_blt & d_rjLTrd)
                    | (inst_bge & ~d_rjLTrd)
                    | (inst_bltu & d_rjLTrdU)
                    | (inst_bgeu & ~d_rjLTrdU));
  assign d_selPC[1] = inst_jirl;
  assign d_aluOP[0] =  inst_add    |
                    inst_addi   |
                    inst_ld_b     |
                    inst_ld_h     |
                    inst_ld_w     |
                    inst_st_b     |
                    inst_st_h     |
                    inst_st_w     |
                    inst_ld_bu    |
                    inst_ld_hu    |
                    inst_ll     |
                    inst_sc     |
                    inst_jirl     |
                    inst_bl       |
                    inst_pcaddu12i|
                    inst_cacop    |
                    inst_preld;
  assign d_aluOP[1] = inst_sub;
  assign d_aluOP[2] = inst_slt | inst_slti;
  assign d_aluOP[3] = inst_sltu | inst_sltui;
  assign d_aluOP[4] = inst_and | inst_andi;
  assign d_aluOP[5] = inst_nor;
  assign d_aluOP[6] = inst_or | inst_ori;
  assign d_aluOP[7] = inst_xor | inst_xori;
  assign d_aluOP[8] = inst_sll | inst_slli;
  assign d_aluOP[9] = inst_srl | inst_srli;
  assign d_aluOP[10] = inst_sra | inst_srai;
  assign d_aluOP[11] = inst_lu12i;
  assign d_memReadE = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[0] = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[1] = inst_ld_h | inst_ld_w | inst_ld_hu;
  assign d_memReadW[2] = inst_ld_w;
  assign d_memReadW[3] = inst_ld_w;
  assign d_memWriteE = inst_st_b | inst_st_h | inst_st_w;
  assign d_memWriteW[0] = inst_st_b | inst_st_h | inst_st_w;
  assign d_memWriteW[1] = inst_st_h;
  assign d_memWriteW[2] = inst_st_w;
  assign d_memWriteW[3] = inst_st_w;
  assign d_src1_is_pc = inst_jirl | inst_bl | inst_pcaddu12i;
  assign d_src2_is_4 = inst_jirl | inst_bl;
  assign d_src2_is_imm =  inst_slli    |
                        inst_srli      |
                        inst_srai      |
                        inst_addi      |
                        inst_slti      |
                        inst_sltui     |
                        inst_andi      |
                        inst_ori       |
                        inst_xori      |
                        inst_pcaddu12i |
                        inst_ld_b      |
                        inst_ld_h      |
                        inst_ld_w      |
                        inst_ld_bu     |
                        inst_ld_hu     |
                        inst_st_b      |
                        inst_st_h      |
                        inst_st_w      |
                        inst_ll        |
                        inst_sc        |
                        inst_lu12i     |
                        inst_cacop     |
                        inst_bl        |
                        inst_jirl      |
                        inst_preld     ;
  assign d_res_from_mem = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_src_reg_is_rd =  inst_beq    |
                        inst_bne    |
                        inst_blt    |
                        inst_bltu   |
                        inst_bge    |
                        inst_bgeu   |
                        inst_st_b   |
                        inst_st_h   |
                        inst_st_w   |
                        inst_sc     |
                        inst_csrwr  |
                        inst_csrxchg;
  assign d_dst_is_r1 = inst_bl;
  assign d_need_si12 = inst_addi |
                    inst_ld_b   |
                    inst_ld_h   |
                    inst_ld_w   |
                    inst_st_b   |
                    inst_st_h   |
                    inst_st_w   |
                    inst_ld_bu  |
                    inst_ld_hu  |
                    inst_slti   |
                    inst_sltui  |
                    inst_cacop  |
                    inst_preld  ;
  assign d_need_si14 = inst_ll | inst_sc;
  assign d_need_ui12 = inst_andi | inst_ori | inst_xori;
  assign d_need_si16 = inst_jirl |
                    inst_beq  |
                    inst_bne  |
                    inst_blt  |
                    inst_bge  |
                    inst_bltu |
                    inst_bgeu;
  assign d_need_si20 = inst_lu12i | inst_pcaddu12i;
  assign d_need_si26 = inst_b | inst_bl;
  assign d_mul_div_sign = inst_mul | inst_mulh | inst_div | inst_mod;
  assign d_div_mod_alu = inst_mod | inst_div | inst_modu | inst_divu;
  assign d_mul_alu = inst_mul | inst_mulh | inst_mulhu;
  assign d_is_mod = inst_mod | inst_modu;
  assign d_mul_high = inst_mulh | inst_mulhu;
  assign d_branch = inst_beq | inst_bne | inst_bge | inst_blt | inst_bgeu | inst_bltu;
  assign d_take_bOrj = ~(d_selPC == 2'b00);


  wire [31:0] d_regDataA;
  wire [31:0] d__regDataA;
  wire [31:0] d__regDataB;
  wire [31:0] d_imm;
  wire [31:0] d_br_offs;
  wire [31:0] d_jirl_offs;
  wire [31:0] d_pcBranch;
  wire [31:0] d_pcJ;
  assign d_regAddA = d_rj;
  assign d_regAddB = d_src_reg_is_rd ? d_rd : d_rk;
  assign d_regWAdd = d_dst_is_r1 ? 5'h1 : d_rd;
  assign d_imm = d_src2_is_4 ? 32'h4 : 
                (d_need_si20 ? {d_i20[19:0],12'b0} : 
                (d_need_ui12 ? {20'b0,d_i12[11:0]} : 
                (d_need_si14 ? {{18{d_i14[13]}},d_i14} : 
                {{20{d_i12[11]}},d_i12[11:0]})));
  assign d_pcJ = d_regDataA + d_jirl_offs;
  assign d_pcBranch = D_pcAddr + d_br_offs;
  assign d_br_offs = d_need_si26 ? {{4{d_i26[25]}},d_i26[25:0],2'b0} : {{14{d_i16[15]}},d_i16[15:0],2'b0};
  assign d_jirl_offs = {{14{d_i16[15]}}, d_i16[15:0], 2'b0};
  assign d_aluSrc1 = d_src1_is_pc ? D_pcAddr : d_regDataA;
  assign d_aluSrc2 = d_src2_is_imm ? d_imm : d_regDataB;

  wire [31:0] cmp_a, cmp_b, res;
  wire cmp_c;
  assign d_rjEqrd = d_regDataA === d_regDataB;
  assign cmp_a = d_regDataA;
  assign cmp_b = ~d_regDataB;
  adder adder_init (
      .a(cmp_a),
      .b(cmp_b),
      .cin(1'b1),
      .res(res),
      .cout(cmp_c)
  );
  assign d_rjLTrd = (d_regDataA[31] & ~d_regDataB[31]) | 
                    ((d_regDataA[31] ~^ d_regDataB[31]) & res[31]);
  assign d_rjLTrdU = ~cmp_c;

  regfile regfile_init (
      .clk(~clk),
      .raddr1(d_regAddA),
      .rdata1(d__regDataA),
      .raddr2(d_regAddB),
      .rdata2(d__regDataB),
      .we(W_regW),
      .waddr(W_regWAdd),
      .wdata(w_regWData)
  );
  assign d_regDataA = D_forwardA == 2'b11 ? e_aluResult : 
                      (D_forwardA == 2'b10 ? m_memReadData :
                      (D_forwardA == 2'b01 ? M_aluResult :
                      d__regDataA));
  assign d_regDataB = D_forwardB == 2'b11 ? e_aluResult : 
                      (D_forwardB == 2'b10 ? m_memReadData :
                      (D_forwardB == 2'b01 ? M_aluResult :
                      d__regDataB));
  assign d_pc_next = d_selPC[1] ? d_pcJ : (d_selPC[0] ? d_pcBranch : F_pcPlus4);

  reg [31:0] d_csr[385:0];
  always @(*) begin
    if (~resetn) begin
      d_csr[0] <= 32'h8;
    end
    d_csr_data <= {{32{d_csr_inst}} & d_csr[d_i14]};  //CSR的三条指令实现不完全
  end
  assign d_csr_inst = inst_csrwr | inst_csrrd;

endmodule
