`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:25 12/02/2014 
// Design Name: 
// Module Name:    CLOCK_DIV 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CLOCK_DIV(

			input		clk,
			input		rstn,
			
			output	clk_div1M,
			output	clk_div4M,
			output	clk_div8M
    );

			reg	[23:0]	cnt;
			
			assign		clk_div1M	=	cnt[20];
			assign		clk_div4M	=	cnt[22];
			assign		clk_div8M	=	cnt[23];
			
			always @ (posedge clk or negedge rstn)begin
				if(!rstn)
					cnt <= 24'h0;
				else cnt <= cnt + 1'b1;
			end
			
endmodule
