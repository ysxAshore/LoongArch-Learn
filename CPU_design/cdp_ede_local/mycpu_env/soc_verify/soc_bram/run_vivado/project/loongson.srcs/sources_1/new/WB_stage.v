`timescale 1ns / 1ps

module WB_stage (
    input clk,
    input resetn,
    input W_div_mod_stall,
    input W_expc_fresh,

    input [31:0] M_aluResult,
    input M_regW,
    input M_res_from_mem,
    input [4:0] M_regWAdd,
    input [31:0] M_memReadData,
    input [31:0] M_csr_data,
    input M_csr_inst,
    input [31:0] M_pcAddr,
    input [13:0] M_csrAdd,
    input [31:0] M_csrWData,
    input M_csr_en,
    input M_ertn,
    input M_excp,
    input [7:0] M_excp_num,

    output W_regW,
    output [4:0] W_regWAdd,
    output [31:0] w_regWData,
    output [31:0] W_pcAddr,
    output [13:0] W_csrAdd,
    output [31:0] W_csrWData,
    output W_csr_en,
    output W_ertn,
    output W_excp,
    output W_excp_or_ertn,
    output [7:0] W_excp_num,
    output [5:0] W_code,
    output [8:0] W_subcode,
    output [31:0] W_era
);
  wire [31:0] W_aluResult;
  wire [31:0] W_memReadData;
  wire [31:0] W_csr_data;
  wire w_regW;
  wire W_res_from_mem;
  wire W_csr_inst;

  parameter WIDTH_WB = 203;
  flopenrc #(
      .WIDTH(WIDTH_WB)
  ) WB_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~W_div_mod_stall),
      .clear(W_expc_fresh),
      .d({
        M_aluResult,
        M_regW,
        M_res_from_mem,
        M_regWAdd,
        M_memReadData,
        M_csr_data,
        M_csr_inst,
        M_pcAddr,
        M_csr_en,
        M_csrAdd,
        M_csrWData,
        M_ertn,
        M_excp,
        M_excp_num
      }),
      .q({
        W_aluResult,
        w_regW,
        W_res_from_mem,
        W_regWAdd,
        W_memReadData,
        W_csr_data,
        W_csr_inst,
        W_pcAddr,
        W_csr_en,
        W_csrAdd,
        W_csrWData,
        W_ertn,
        W_excp,
        W_excp_num
      })
  );
  assign W_regW = w_regW & ~W_div_mod_stall;
  assign w_regWData = W_res_from_mem ? W_memReadData : W_aluResult;
  assign W_code = {6{W_excp_num[0]}} & 6'h0 | {6{W_excp_num[1]}} & 6'hb;
  assign W_subcode = 9'b0;
  assign W_era = W_pcAddr;  //era是当前引起异常或者中断的PC
  assign W_excp_or_ertn = W_ertn | W_excp;

endmodule
