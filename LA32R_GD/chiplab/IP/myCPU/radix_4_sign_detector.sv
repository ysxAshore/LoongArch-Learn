`timescale 1ns/1ps
// include some definitions here

module radix_4_sign_detector #(
	// Put some parameters here, which can be changed by other modules.
	
)(
	input  logic[7-1:0] rem_sum_msb_i,
	input  logic[7-1:0] rem_carry_msb_i,
	input  logic[7-1:0] parameter_i,
	input  logic[7-1:0] divisor_i,
	// input  cin_i,
	output logic sign_o
);


// ================================================================================================================================================
// (local) parameters begin



// (local) parameters end
// ================================================================================================================================================

// ================================================================================================================================================
// functions begin



// functions end
// ================================================================================================================================================

// ================================================================================================================================================
// signals begin

logic [6-1:0] unused_bit;

// signals end
// ================================================================================================================================================

// I wish the EDA could optimize these logics well....
assign {sign_o, unused_bit} = rem_sum_msb_i + rem_carry_msb_i + parameter_i + divisor_i;
// assign {sign_o, unused_bit} = rem_sum_msb_i + rem_carry_msb_i + parameter_i + divisor_i + {6'b0, cin_i};


endmodule
