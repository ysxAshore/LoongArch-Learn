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
    output E_take_bOrj
);
  wire [31:0] E_aluSrc1, E_aluSrc2;
  wire [11:0] E_aluOP;
  wire E_mul_alu;
  wire E_mul_div_sign;
  wire E_mul_high;
  wire E_is_mod;


  parameter WIDTH_EX_init = 197;
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
        d_take_bOrj
      }),
      .q({
        E_aluSrc1,
        E_aluSrc2,
        E_regWAdd,
        E_regW,
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
        E_take_bOrj
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

  wire [31:0] div_mod_res_reg = E_div_mod_alu ? (E_is_mod ? r : s) : aluResult;
  assign e_aluResult = E_mul_alu ? (E_mul_high ? mul_result[63:32] : mul_result[31:0]) : div_mod_res_reg;

endmodule
