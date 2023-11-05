module decoder_2_4(
    input  wire [ 1:0] in,
    output wire [ 3:0] out
);

genvar i;
generate for (i=0; i<4; i=i+1) begin : gen_for_dec_2_4
    assign out[i] = (in == i);
end endgenerate

endmodule


module decoder_4_16(
    input  wire [ 3:0] in,
    output wire [15:0] out
);

genvar i;
generate for (i=0; i<16; i=i+1) begin : gen_for_dec_4_16
    assign out[i] = (in == i);
end endgenerate

endmodule


module decoder_5_32(
    input  wire [ 4:0] in,
    output wire [31:0] out
);

genvar i;
generate for (i=0; i<32; i=i+1) begin : gen_for_dec_5_32
    assign out[i] = (in == i);
end endgenerate

endmodule


module decoder_6_64(
    input  wire [ 5:0] in,
    output wire [63:0] out
);

genvar i;
generate for (i=0; i<64; i=i+1) begin : gen_for_dec_6_64
    assign out[i] = (in == i);
end endgenerate

endmodule

module encoder_4_2(
    input  wire [3:0] in,
    output wire [1:0] out
);

assign out = {2{in[0]}} & 2'd0 |
	         {2{in[1]}} & 2'd1 |
	         {2{in[2]}} & 2'd2 |
	         {2{in[3]}} & 2'd3 ;

endmodule

module encoder_16_4(
    input  wire [15:0] in,
    output wire [ 3:0] out
);

wire [1:0] out_0, out_1, out_2, out_3;

encoder_4_2 one (.in(in[ 3: 0]), .out(out_0));
encoder_4_2 two (.in(in[ 7: 4]), .out(out_1));
encoder_4_2 thr (.in(in[11: 8]), .out(out_2));
encoder_4_2 fou (.in(in[15:12]), .out(out_3));

assign out = {4{|in[ 3: 0]}} & {2'd0, out_0} |
	         {4{|in[ 7: 4]}} & {2'd1, out_1} |		
	         {4{|in[11: 8]}} & {2'd2, out_2} |		
	         {4{|in[15:12]}} & {2'd3, out_3} ;		

endmodule

module encoder_32_5(
    input  wire [31:0] in,
    output wire [ 4:0] out
);

wire [3:0] out_0, out_1;

encoder_16_4 one (.in(in[15: 0]), .out(out_0));
encoder_16_4 two (.in(in[31:16]), .out(out_1));

assign out = {5{|in[15: 0]}} & {1'd0, out_0} |
	         {5{|in[31:16]}} & {1'd1, out_1} ;

endmodule
