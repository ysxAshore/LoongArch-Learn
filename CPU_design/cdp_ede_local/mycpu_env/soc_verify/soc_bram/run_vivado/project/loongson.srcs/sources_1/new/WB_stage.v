`timescale 1ns / 1ps

module WB_stage (
    input clk,
    input resetn,
    input W_div_mod_stall,

    input [31:0] M_aluResult,
    input M_regW,
    input M_res_from_mem,
    input [4:0] M_regWAdd,
    input [31:0] M_memReadData,
    input [31:0] M_csr_data,
    input M_csr_inst,
    input [31:0] M_pcAddr,

    output W_regW,
    output [4:0] W_regWAdd,
    output [31:0] w_regWData,
    output [31:0] W_pcAddr
);
  wire [31:0] W_aluResult;
  wire [31:0] W_memReadData;
  wire [31:0] W_csr_data;
  wire w_regW;
  wire W_res_from_mem;
  wire W_csr_inst;

  parameter WIDTH_WB = 136;
  flopenr #(
      .WIDTH(WIDTH_WB)
  ) WB_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~W_div_mod_stall),
      .d({
        M_aluResult,
        M_regW,
        M_res_from_mem,
        M_regWAdd,
        M_memReadData,
        M_csr_data,
        M_csr_inst,
        M_pcAddr
      }),
      .q({
        W_aluResult,
        w_regW,
        W_res_from_mem,
        W_regWAdd,
        W_memReadData,
        W_csr_data,
        W_csr_inst,
        W_pcAddr
      })
  );
  assign W_regW = w_regW & ~W_div_mod_stall;
  assign w_regWData = W_res_from_mem ? W_memReadData : (W_csr_inst ? W_csr_data : W_aluResult);
endmodule
