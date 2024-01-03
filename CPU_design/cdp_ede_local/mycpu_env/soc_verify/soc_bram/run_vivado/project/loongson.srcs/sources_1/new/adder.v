`timescale 1ns / 1ps
module adder #(
    parameter WIDTH = 32
) (
    input [WIDTH-1:0] a,
    input [WIDTH-1:0] b,
    input cin,
    output [WIDTH-1:0] res,
    output cout
);
  assign {cout, res} = a + b + cin;
endmodule
