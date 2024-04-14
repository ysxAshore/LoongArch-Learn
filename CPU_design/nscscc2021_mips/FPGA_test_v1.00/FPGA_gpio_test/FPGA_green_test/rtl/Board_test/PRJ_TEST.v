`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Loongson
// Engineer: Fu Xingjian
// 
// Create Date:    15:25:22 12/02/2014 
// Design Name: 
// Module Name:    PRJ_TEST 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: This module is the test module for PFGA_PRJ board
//
// Dependencies: 
//
// Revision: V0.1
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PRJ_TEST(
     input          clk_in, //100MHz
     input          rstn_in,
     input  [7 :0]  sw,
     
     input          btn_ledgr,
     output [3 :0]  key_col,     
     input  [3 :0]  key_row,
     
     output [15:0]  led,
     output [1 :0]  ledr,
     output [1 :0]  ledg,
     
     output [7 :0]  num_csn,
     output         num_a,
     output         num_b,
     output         num_c,
     output         num_d,
     output         num_e,
     output         num_f,
     output         num_g,
     output         num_dp,
     
     output [8:1]   dot_r,
     output [8:1]   dot_c
    );
    wire        rstn;
    wire        clk;
    wire        clk_div1M, clk_div4M, clk_div8M;
    assign  rstn = rstn_in;
    assign  clk  = clk_in;
    //for led and led_dual test
    KEY_TEST  key_test(
        .clk(clk),
        .resetn(rstn),
        .key_col(key_col),
        .key_row(key_row),
        .information(led)
        );

    assign ledg = {2{~btn_ledgr}};
    assign ledr = {2{btn_ledgr}};

    CLOCK_DIV clk_div (
                      .clk(clk),
                      .rstn(rstn),
                      
                      .clk_div1M(clk_div1M),
                      .clk_div4M(clk_div4M),
                      .clk_div8M(clk_div8M)
                      );

    NUM_TEST  test_num (
                       .clk(clk),
                       .clk_div8M(clk_div8M),
                       .rstn(rstn),    
                       .sw(sw),
                       .num_csn(num_csn),
                       .num_a(num_a),
                       .num_b(num_b),
                       .num_c(num_c),
                       .num_d(num_d),
                       .num_e(num_e),
                       .num_f(num_f),
                       .num_g(num_g),
                       .num_dp(num_dp)
                       );

    DOT_TEST  test_dot (
                       .clk(clk_div8M),
                       .rstn(rstn),
                       
                       .dot_r(dot_r),
                       .dot_c(dot_c)
                       );
                                
endmodule
