`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:28 12/02/2014 
// Design Name: 
// Module Name:    NUM_TEST 
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
module NUM_TEST(
						
	 input				clk,
	 input				clk_div8M,
	 input				rstn,
	 input	[7:0]	sw,
	 
	 output	[7:0]	num_csn,
	 output			num_a,
	 output			num_b,
	 output			num_c,
	 output			num_d,
	 output			num_e,
	 output			num_f,
	 output			num_g,
	 output			num_dp
						
    );
	 
	 reg			num_a;
	 reg			num_b;
	 reg			num_c;
	 reg			num_d;
	 reg			num_e;
	 reg			num_f;
	 reg			num_g;
	 reg			num_dp;
	 
	 reg		[3:0]		counter;

	 assign	num_csn = sw;	
	 
	
	always @ (posedge clk_div8M or negedge rstn)begin
		if(!rstn)
			counter <= 4'h0;
		else
			counter <= counter + 1'b1;
	end
	always @ (posedge clk_div8M)begin
		case(counter)
			4'h0: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hfc;	//0
			4'h1: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'h60;	//1
			4'h2: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hda;	//2
			4'h3: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hf2;	//3
			4'h4: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'h66;	//4
			4'h5: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hb6;	//5
			4'h6: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hbe;	//6	
			4'h7: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'he0;	//7
			4'h8: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hfe;	//8
			4'h9: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hf6;	//9
			default: {num_a, num_b, num_c ,num_d, num_e, num_f, num_g, num_dp}	<= 8'hff;	//8.
		endcase
	end

endmodule
