`timescale 1ns / 1ps

module EXE_stage (
    input clk,
    input resetn,
    input E_fresh,
    input E_div_mod_stall,

    input [31:0] D_pcAddr,
    input [31:0] d_aluSrc1,
    input [31:0] d_aluSrc2,
    input [4:0] d_regWAdd,
    input d_regW,
    input d_res_from_mem,
    input [11:0] d_aluOP,
    input d_memReadE,
    d_memWriteE,
    input [3:0] d_memReadW,
    d_memWriteW,
    input [31:0] d_regDataB,
    input d_mul_alu,
    input d_mul_div_sign,
    input d_mul_high,
    input d_is_mod,
    input d_div_mod_alu,
    input [31:0] d_csr_data,
    input d_csr_inst,
    input d_loadu,
    input d_take_bOrj,
    input [13:0] d_csrAdd,
    input [31:0] d_csrWData,
    input d_csr_en,
    input d_ertn,
    input d_excp,
    input [7:0] d_excp_num,
    input d_inst_rdcnt,
    input [31:0] d_rdcntVal,
    input [31:0] d_era,
    input [1:0] d_rdcnt_inst,
    input [31:0] rdcnt_val,

    output [31:0] E_pcAddr,
    output e_complete_delay,
    output [31:0] e_aluResult,
    output [4:0] E_regWAdd,
    output E_regW,
    output E_res_from_mem,
    output E_memReadE,
    E_memWriteE,
    output [3:0] E_memReadW,
    E_memWriteW,
    output [31:0] E_memWriteData,
    output E_div_mod_alu,
    output E_loadu,
    output [31:0] E_csr_data,
    output E_csr_inst,
    output E_take_bOrj,
    output [13:0] E_csrAdd,
    output [31:0] E_csrWData,
    output E_csr_en,
    output E_ertn,
    output E_excp,
    output [7:0] E_excp_num,
    output e_ALE_excp,
    output [31:0] E_era,
    output [31:0] e_badv_add,
    output [1:0] E_rdcnt_inst
);
  wire [31:0] E_aluSrc1, E_aluSrc2;
  wire [11:0] E_aluOP;
  wire E_mul_alu;
  wire E_mul_div_sign;
  wire E_mul_high;
  wire E_is_mod;
  wire e_excp;
  wire [7:0] e_excp_num;
  wire E__regW;
  wire [31:0] E_rdcnt_val;

  parameter WIDTH_EX_init = 330;
  flopenrc #(
      .WIDTH(WIDTH_EX_init)
  ) flopenrc_EX1 (
      .clk(clk),
      .rst(~resetn),
      .clear(E_fresh),
      .enable(~E_div_mod_stall),
      .d({
        d_aluSrc1,
        d_aluSrc2,
        d_regWAdd,
        d_regW,
        d_res_from_mem,
        d_aluOP,
        d_memReadE,
        d_memWriteE,
        d_memReadW,
        d_memWriteW,
        d_regDataB,
        d_mul_alu,
        d_mul_div_sign,
        d_mul_high,
        d_is_mod,
        d_div_mod_alu,
        d_csr_data,
        d_csr_inst,
        D_pcAddr,
        d_loadu,
        d_take_bOrj,
        d_csr_en,
        d_csrAdd,
        d_csrWData,
        d_ertn,
        d_excp,
        d_excp_num,
        d_era,
        d_rdcnt_inst,
        rdcnt_val
      }),
      .q({
        E_aluSrc1,
        E_aluSrc2,
        E_regWAdd,
        E__regW,
        E_res_from_mem,
        E_aluOP,
        E_memReadE,
        E_memWriteE,
        E_memReadW,
        E_memWriteW,
        E_memWriteData,
        E_mul_alu,
        E_mul_div_sign,
        E_mul_high,
        E_is_mod,
        E_div_mod_alu,
        E_csr_data,
        E_csr_inst,
        E_pcAddr,
        E_loadu,
        E_take_bOrj,
        E_csr_en,
        E_csrAdd,
        E_csrWData,
        E_ertn,
        e_excp,
        e_excp_num,
        E_era,
        E_rdcnt_inst,
        E_rdcnt_val
      })
  );
  wire [31:0] aluResult;
  alu alu_init (
      .alu_op(E_aluOP),
      .alu_src1(E_aluSrc1),
      .alu_src2(E_aluSrc2),
      .alu_result(aluResult)
  );

  wire [63:0] mul_result;
  mul mul_inst (
      .mul_clk(clk),
      .reset(~resetn),
      .mul_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .result(mul_result)
  );

  wire [31:0] s;
  wire [31:0] r;
  div div_init (
      .div_clk(clk),
      .reset(~resetn),
      .div(E_div_mod_alu),
      .div_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .s(s),
      .r(r),
      .complete_delay(e_complete_delay)
  );


  wire [31:0] div_mod_res_reg = E_div_mod_alu ? (E_is_mod ? r : s) : (~(E_rdcnt_inst == 2'b00) ? E_rdcnt_val : aluResult);
  wire [31:0] e_csr_data = E_csr_inst ? E_csr_data : div_mod_res_reg;
  assign e_aluResult = E_mul_alu ? (E_mul_high ? mul_result[63:32] : mul_result[31:0]) : e_csr_data;

  wire [1:0] e_mem_size;
  assign e_mem_size[0] = ~E_memReadW[3] & ~E_memReadW[1] & E_memReadW[0] | ~E_memWriteW[3] & ~E_memWriteW[1] & E_memWriteW[0];
  assign e_mem_size[1] = ~E_memReadW[3] & E_memReadW[1] | ~E_memWriteW[3] & E_memWriteW[1];
  assign e_ALE_excp = (E_memReadE | E_memWriteE) & ((e_mem_size[0] &  1'b0)        | 
                                       (e_mem_size[1] &  aluResult[0])           | 
                                       (!e_mem_size   & (aluResult[0] | aluResult[1]))) ;
  assign E_excp = e_ALE_excp | e_excp;
  assign E_regW = E__regW & ~e_ALE_excp;  //当访存地址错误时，那么load就不写寄存器
  assign E_excp_num = {e_excp_num[7:2], e_ALE_excp, 1'b0};
  assign e_badv_add = e_ALE_excp ? aluResult : E_era;


endmodule
