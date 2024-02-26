`timescale 1ns / 1ps
`include "mycpu.h"

module id_stage (
    input wire clk,
    input wire resetn,

    //与上一级传递通讯的流水线控制信号 
    output wire id_allowin,
    input wire if_to_id_valid,
    input wire [`IF_TO_ID_WD-1:0] if_to_id_bus,

    //与下一级传递通讯的流水线控制信号 
    input wire exe_allowin,
    output wire id_to_exe_valid,
    output wire [`ID_TO_EXE_WD-1:0] id_to_exe_bus,

    //id组合逻辑传递给if组合逻辑的一些用于生成nextpc的信号
    output wire [`ID_TO_IF_WD-1:0] id_to_if_bus,

    //exe组合逻辑传递给id组合逻辑的用于写寄存器的信号
    input wire [`EXE_TO_ID_WD-1:0] exe_to_id_bus,

    //mem组合逻辑传递给id组合逻辑的用于写寄存器的信号
    input wire [`MEM_TO_ID_WD-1:0] mem_to_id_bus,

    //wb组合逻辑传递给id组合逻辑的用于写寄存器的信号
    input wire [`WB_TO_ID_WD-1:0] wb_to_id_bus
);
  //id_reg
  reg id_valid;
  wire id_ready_go;
  reg [`IF_TO_ID_WD-1:0] id_data;  //id_reg的数据
  wire br_taken;
  wire br_taken_cancel;

  assign id_allowin = ~id_valid | id_ready_go & exe_allowin;
  assign id_to_exe_valid = id_valid & id_ready_go;

  always @(posedge clk) begin
    if (~resetn) begin
      id_valid <= 1'b0;
    end else if (br_taken_cancel) begin  //如果采取分支，那么取消当前IF阶段的指令
      id_valid <= 1'b0;
    end else if (id_allowin) begin
      id_valid <= if_to_id_valid;
    end
    if (id_allowin & if_to_id_valid) begin
      id_data <= if_to_id_bus;
    end
  end

  //拆解if_reg传递过来的数据
  wire [31:0] id_pc;
  wire [31:0] id_inst;
  assign {id_pc, id_inst} = id_data;

  //拆解exe组合逻辑送来的数据
  wire exe_valid;
  wire exe_regW;
  wire [4:0] exe_regWAddr;
  wire [31:0] exe_regWData;
  assign {exe_valid, exe_regW, exe_regWAddr, exe_regWData} = exe_to_id_bus;

  //拆解mem组合逻辑送来的数据
  wire mem_valid;
  wire mem_regW;
  wire [4:0] mem_regWAddr;
  wire [31:0] mem_regWData;
  assign {mem_valid, mem_regW, mem_regWAddr, mem_regWData} = mem_to_id_bus;

  //拆解wb组合逻辑传递过来的数据
  wire wb_valid;
  wire wb_regW;
  wire [4:0] wb_regWAddr;
  wire [31:0] wb_regWData;
  assign {wb_valid, wb_regW, wb_regWAddr, wb_regWData} = wb_to_id_bus;

  //指令拆解
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

  assign op_31_26 = id_inst[31:26];
  assign op_25_22 = id_inst[25:22];
  assign op_21_20 = id_inst[21:20];
  assign op_19_15 = id_inst[19:15];
  assign rd = id_inst[4:0];
  assign rj = id_inst[9:5];
  assign rk = id_inst[14:10];
  assign i12 = id_inst[21:10];
  assign i20 = id_inst[24:5];
  assign i16 = id_inst[25:10];
  assign i26 = {id_inst[9:0], id_inst[25:10]};

  //译码器译码
  wire [63:0] op_31_26_d;
  wire [15:0] op_25_22_d;
  wire [ 3:0] op_21_20_d;
  wire [31:0] op_19_15_d;

  decoder_6_64 u_dec0 (
      .in (op_31_26),
      .out(op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in (op_25_22),
      .out(op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in (op_21_20),
      .out(op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in (op_19_15),
      .out(op_19_15_d)
  );

  //译码指令
  wire inst_add = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
  wire inst_sub = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
  wire inst_slt = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
  wire inst_sltu = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
  wire inst_nor = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
  wire inst_and = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
  wire inst_or = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
  wire inst_xor = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];
  wire inst_slli = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
  wire inst_srli = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
  wire inst_srai = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
  wire inst_addi = op_31_26_d[6'h00] & op_25_22_d[4'ha];
  wire inst_ld_w = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
  wire inst_st_w = op_31_26_d[6'h0a] & op_25_22_d[4'h6];
  wire inst_jirl = op_31_26_d[6'h13];
  wire inst_b = op_31_26_d[6'h14];
  wire inst_bl = op_31_26_d[6'h15];
  wire inst_beq = op_31_26_d[6'h16];
  wire inst_bne = op_31_26_d[6'h17];
  wire inst_lu12i = op_31_26_d[6'h05] & ~id_inst[25];

  //控制信号译码
  wire [11:0] alu_op;
  wire res_from_mem;
  wire src_reg_is_rd;
  wire src1_is_pc;
  wire src2_is_imm;
  wire src2_is_4;
  wire dst_is_r1;
  wire id_memW;
  wire id_regW;
  wire need_ui5;
  wire need_si12;
  wire need_si16;
  wire need_si20;
  wire need_si26;
  wire need_rj;
  wire need_rkd;

  assign alu_op[0] = inst_add | inst_addi | inst_ld_w | inst_st_w | inst_jirl | inst_bl;
  assign alu_op[1] = inst_sub;
  assign alu_op[2] = inst_slt;
  assign alu_op[3] = inst_sltu;
  assign alu_op[4] = inst_and;
  assign alu_op[5] = inst_nor;
  assign alu_op[6] = inst_or;
  assign alu_op[7] = inst_xor;
  assign alu_op[8] = inst_slli;
  assign alu_op[9] = inst_srli;
  assign alu_op[10] = inst_srai;
  assign alu_op[11] = inst_lu12i;
  assign res_from_mem = inst_ld_w;
  assign src_reg_is_rd = inst_beq | inst_bne | inst_st_w;
  assign src1_is_pc = inst_jirl | inst_bl;
  assign src2_is_imm = inst_slli | 
                       inst_srli |
                       inst_srai |
                       inst_addi |
                       inst_ld_w |
                       inst_st_w |
                       inst_lu12i|
                       inst_jirl |
                       inst_bl   ;
  assign src2_is_4 = inst_jirl | inst_bl;
  assign dst_is_r1 = inst_bl;
  assign id_memW = inst_st_w;
  assign id_regW = ~inst_st_w & ~inst_beq & ~inst_bne & ~inst_b;
  assign need_ui5 = inst_slli | inst_srli | inst_srai;
  assign need_si12 = inst_addi | inst_ld_w | inst_st_w;
  assign need_si16 = inst_jirl | inst_beq | inst_bne;
  assign need_si20 = inst_lu12i;
  assign need_si26 = inst_b | inst_bl;
  assign need_rj = ~inst_b | inst_bl;
  assign need_rkd = ~inst_slli | ~inst_srli | ~inst_srai | ~inst_addi | ~inst_ld_w 
                  | ~inst_st_w | ~inst_jirl | ~inst_b | ~inst_bl | ~inst_beq | ~inst_bne;

  //id阶段组合逻辑数据生成
  wire [31:0] imm;
  wire [31:0] br_offs;
  wire [31:0] jirl_offs;

  assign imm = src2_is_4 ? 32'h4 :
              (need_si20 ? {i20[19:0],12'b0} :
              (need_si12 ? {{20{i12[11]}},i12[11:0]} :
              {27'b0,rk}));
  assign br_offs = need_si26 ? {{4{i26[25]}}, i26[25:0], 2'b0} : {{14{i16[15]}}, i16[15:0], 2'b0};
  assign jirl_offs = {{14{i16[5]}}, i16[15:0], 2'b0};


  //寄存器堆
  wire [ 4:0] regAddrA;
  wire [ 4:0] regAddrB;
  wire [31:0] regDataA;
  wire [31:0] regDataB;
  wire [ 4:0] id_regWAddr;

  assign regAddrA = rj;
  assign regAddrB = src_reg_is_rd ? rd : rk;
  assign id_regWAddr = dst_is_r1 ? 5'b1 : rd;

  regfile u_regfile (
      .clk   (clk),
      .raddr1(regAddrA),
      .rdata1(regDataA),
      .raddr2(regAddrB),
      .rdata2(regDataB),
      .we    (wb_regW),
      .waddr (wb_regWAddr),
      .wdata (wb_regWData)
  );

  //RAW阻塞
  wire addrA_equal;
  wire addrB_equal;

  assign addrA_equal = need_rj & (regAddrA!=5'b0) & ((exe_valid & exe_regW & exe_regWAddr == regAddrA)
                       | (mem_valid & mem_regW & mem_regWAddr == regAddrA)
                       | (wb_valid & wb_regW & wb_regWAddr == regAddrA));
  assign addrB_equal = need_rkd & (regAddrB!=5'b0) & ((exe_valid & exe_regW & exe_regWAddr == regAddrB)
                       | (mem_valid & mem_regW & mem_regWAddr == regAddrB)
                       | (wb_valid & wb_regW & wb_regWAddr == regAddrB));
  assign id_ready_go = ~addrA_equal & ~addrB_equal;


  //分支判断
  wire [31:0] DataA;
  wire [31:0] DataB;
  wire [31:0] br_target;
  wire rj_eq_rd;

  assign DataA = src1_is_pc ? id_pc : regDataA;
  assign DataB = src2_is_imm ? imm : regDataB;
  assign rj_eq_rd = (DataA == DataB);
  assign br_taken = (inst_beq &  rj_eq_rd |
                     inst_bne & ~rj_eq_rd |
                     inst_jirl            | 
                     inst_bl              |
                     inst_b
  ) && id_valid;

  assign br_target = (inst_beq | inst_bne | inst_bl | inst_b) ? (id_pc + br_offs) : (regDataA + jirl_offs);
  assign br_taken_cancel = br_taken & id_ready_go;  //当阻塞完成时，br_taken_cancel才与br_taken一致有效

  //封包id组合逻辑传递给if组合逻辑preIF的数据
  assign id_to_if_bus = {br_taken, br_target, br_taken_cancel};

  //封包id组合逻辑传递给exe_reg的数据
  assign id_to_exe_bus = {alu_op, res_from_mem, id_regW, id_memW, id_regWAddr, regDataB, DataA, DataB, id_pc};

endmodule
