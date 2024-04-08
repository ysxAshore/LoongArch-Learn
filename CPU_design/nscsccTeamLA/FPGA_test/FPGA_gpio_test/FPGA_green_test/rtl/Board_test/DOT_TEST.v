`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:52 12/03/2014 
// Design Name: 
// Module Name:    DOT_TEST 
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
module DOT_TEST(
						input		clk,
						input		rstn,
						
						output	[8:1]	dot_r,
						output	[8:1]	dot_c

					);
		reg	[8:1]	dot_r;
		reg	[8:1]	dot_c;
		
		reg	[3:0]	cnt;

		always @(posedge clk or negedge rstn)begin
			if(!rstn)
				cnt <= 4'h0;
			else cnt <= cnt +1'b1;
		end
	
		always @(posedge clk or negedge rstn)begin
			if(!rstn)begin
				dot_r <= 8'h00;
				dot_c <= 8'h00;
			end
			else if(!cnt[3]) begin
				dot_c <= 8'h00;
				if(!(|dot_r) | (&dot_r))	dot_r <= 8'h01;
				else	dot_r <= {dot_r[7:1], dot_r[8]};
			end
			else begin
				dot_r <= 8'hff;
				if(!(|dot_c))	dot_c <= 8'hfe;
				else dot_c <= {dot_c[7:1], dot_c[8]};
			end
		end

endmodule
