`timescale 1ns / 1ps

module IF_stage (
    input clk,
    input resetn,
    input F_stall,
    input F_excp_stall,
    input F_div_mod_stall,
    input [31:0] d_pc_next,

    output [31:0] F_pcAddr,
    output [31:0] F_pcPlus4
);
  parameter WIDTH_PC = 32;
  pc_flopenr u_pc_flopenr (
      .clk   (clk),
      .rst   (~resetn),
      .enable(~F_stall & ~F_div_mod_stall & ~F_excp_stall),
      .d     (d_pc_next),
      .q     (F_pcAddr)
  );

  assign F_pcPlus4 = F_pcAddr + 32'h4;
endmodule
