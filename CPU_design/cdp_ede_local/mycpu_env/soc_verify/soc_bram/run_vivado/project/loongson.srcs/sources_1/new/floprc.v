`timescale 1ns / 1ps

//带有reset和clear的D触发器
module floprc #(
    parameter WIDTH = 32
) (
    input clk,
    input rst,
    input clear,

    input [WIDTH-1:0] d,
    output reg [WIDTH-1:0] q
);
  always @(posedge clk) begin
    if (rst) begin
      q <= 0;
    end else if (clear) begin
      q <= 0;
    end else begin
      q <= d;
    end
  end
endmodule
