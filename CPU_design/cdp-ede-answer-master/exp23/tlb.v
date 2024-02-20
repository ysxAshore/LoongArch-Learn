module tlb
#(
parameter TLBNUM = 16
)
(
  input clk,
  
  // search port 0 (for fetch)
  input  [ 18:0] s0_vppn,
  input  [ 9 :0] s0_asid,
  input          s0_va_bit12 ,
  output         s0_found,
  output [$clog2(TLBNUM)-1:0] s0_index,
  output [ 19:0] s0_ppn,
  output [ 5 :0] s0_ps,
  output [ 1 :0] s0_plv,
  output [ 1 :0] s0_mat,
  output         s0_d,
  output         s0_v,
  
  // search port 1 (for load/store)
  input  [ 18:0] s1_vppn,
  input  [ 9 :0] s1_asid,
  input          s1_va_bit12,
  output         s1_found,
  output [$clog2(TLBNUM)-1:0] s1_index,
  output [ 19:0] s1_ppn,
  output [ 5 :0] s1_ps,
  output [ 1 :0] s1_plv,
  output [ 1 :0] s1_mat,
  output         s1_d,
  output         s1_v,
  
  // invtlb opcode
  input          invtlb_valid,
  input  [ 4 :0] invtlb_op,
  
  // write port
  input          we, //w(rite) e(nable)
  input [$clog2(TLBNUM)-1:0] w_index,
  input         w_e,
  input [ 18:0] w_vppn,
  input [ 5 :0] w_ps,
  input [ 9 :0] w_asid,
  input         w_g,
  input [ 19:0] w_ppn0,
  input [ 1 :0] w_plv0,
  input [ 1 :0] w_mat0,
  input         w_d0,
  input         w_v0,
  input [ 19:0] w_ppn1,
  input [ 1 :0] w_plv1,
  input [ 1 :0] w_mat1,
  input         w_d1,
  input         w_v1,
  
  // read port
  input [$clog2(TLBNUM)-1:0] r_index,
  output         r_e,
  output [ 18:0] r_vppn,
  output [ 5 :0] r_ps,
  output [ 9 :0] r_asid,
  output         r_g,
  output [ 19:0] r_ppn0,
  output [ 1 :0] r_plv0,
  output [ 1 :0] r_mat0,
  output         r_d0,
  output         r_v0,
  output [ 19:0] r_ppn1,
  output [ 1 :0] r_plv1,
  output [ 1 :0] r_mat1,
  output         r_d1,
  output         r_v1
);
reg              tlb_e    [TLBNUM-1:0];
reg [ 5      :0] tlb_ps   [TLBNUM-1:0]; 
reg [ 18     :0] tlb_vppn [TLBNUM-1:0];
reg [ 9      :0] tlb_asid [TLBNUM-1:0];
reg              tlb_g    [TLBNUM-1:0];
reg [ 19     :0] tlb_ppn0 [TLBNUM-1:0];
reg [ 1      :0] tlb_plv0 [TLBNUM-1:0];
reg [ 1      :0] tlb_mat0 [TLBNUM-1:0];
reg              tlb_d0   [TLBNUM-1:0];
reg              tlb_v0   [TLBNUM-1:0];
reg [ 19     :0] tlb_ppn1 [TLBNUM-1:0];
reg [ 1      :0] tlb_plv1 [TLBNUM-1:0];
reg [ 1      :0] tlb_mat1 [TLBNUM-1:0];
reg              tlb_d1   [TLBNUM-1:0];
reg              tlb_v1   [TLBNUM-1:0];

//write
always @(posedge clk) begin
    if (we) begin
	    tlb_e    [w_index] <= w_e;
        tlb_vppn [w_index] <= w_vppn;
        tlb_asid [w_index] <= w_asid;
        tlb_g    [w_index] <= w_g; 
        tlb_ps   [w_index] <= w_ps;  
        tlb_ppn0 [w_index] <= w_ppn0;
        tlb_plv0 [w_index] <= w_plv0;
        tlb_mat0 [w_index] <= w_mat0;
        tlb_d0   [w_index] <= w_d0;
        tlb_v0   [w_index] <= w_v0; 
        tlb_ppn1 [w_index] <= w_ppn1;
        tlb_plv1 [w_index] <= w_plv1;
        tlb_mat1 [w_index] <= w_mat1;
        tlb_d1   [w_index] <= w_d1;
        tlb_v1   [w_index] <= w_v1; 
    end
end

//read
assign r_vppn  =  tlb_vppn [r_index]; 
assign r_asid  =  tlb_asid [r_index]; 
assign r_g     =  tlb_g    [r_index]; 
assign r_ps    =  tlb_ps   [r_index]; 
assign r_e     =  tlb_e    [r_index]; 
assign r_v0    =  tlb_v0   [r_index]; 
assign r_d0    =  tlb_d0   [r_index]; 
assign r_mat0  =  tlb_mat0 [r_index]; 
assign r_plv0  =  tlb_plv0 [r_index]; 
assign r_ppn0  =  tlb_ppn0 [r_index]; 
assign r_v1    =  tlb_v1   [r_index]; 
assign r_d1    =  tlb_d1   [r_index]; 
assign r_mat1  =  tlb_mat1 [r_index]; 
assign r_plv1  =  tlb_plv1 [r_index]; 
assign r_ppn1  =  tlb_ppn1 [r_index]; 

//search
wire [TLBNUM-1:0] match0;
wire [TLBNUM-1:0] match1;

assign match0[0] = (s0_vppn[18:10]==tlb_vppn[0][18:10]) && (tlb_ps[0]==6'd22 || s0_vppn[9:0]==tlb_vppn[0][9:0]) && ((s0_asid==tlb_asid[0]) || tlb_g[0]) && tlb_e[0];
assign match0[1] = (s0_vppn[18:10]==tlb_vppn[1][18:10]) && (tlb_ps[1]==6'd22 || s0_vppn[9:0]==tlb_vppn[1][9:0]) && ((s0_asid==tlb_asid[1]) || tlb_g[1]) && tlb_e[1];
assign match0[2] = (s0_vppn[18:10]==tlb_vppn[2][18:10]) && (tlb_ps[2]==6'd22 || s0_vppn[9:0]==tlb_vppn[2][9:0]) && ((s0_asid==tlb_asid[2]) || tlb_g[2]) && tlb_e[2];
assign match0[3] = (s0_vppn[18:10]==tlb_vppn[3][18:10]) && (tlb_ps[3]==6'd22 || s0_vppn[9:0]==tlb_vppn[3][9:0]) && ((s0_asid==tlb_asid[3]) || tlb_g[3]) && tlb_e[3];
assign match0[4] = (s0_vppn[18:10]==tlb_vppn[4][18:10]) && (tlb_ps[4]==6'd22 || s0_vppn[9:0]==tlb_vppn[4][9:0]) && ((s0_asid==tlb_asid[4]) || tlb_g[4]) && tlb_e[4];
assign match0[5] = (s0_vppn[18:10]==tlb_vppn[5][18:10]) && (tlb_ps[5]==6'd22 || s0_vppn[9:0]==tlb_vppn[5][9:0]) && ((s0_asid==tlb_asid[5]) || tlb_g[5]) && tlb_e[5];
assign match0[6] = (s0_vppn[18:10]==tlb_vppn[6][18:10]) && (tlb_ps[6]==6'd22 || s0_vppn[9:0]==tlb_vppn[6][9:0]) && ((s0_asid==tlb_asid[6]) || tlb_g[6]) && tlb_e[6];
assign match0[7] = (s0_vppn[18:10]==tlb_vppn[7][18:10]) && (tlb_ps[7]==6'd22 || s0_vppn[9:0]==tlb_vppn[7][9:0]) && ((s0_asid==tlb_asid[7]) || tlb_g[7]) && tlb_e[7];
assign match0[8] = (s0_vppn[18:10]==tlb_vppn[8][18:10]) && (tlb_ps[8]==6'd22 || s0_vppn[9:0]==tlb_vppn[8][9:0]) && ((s0_asid==tlb_asid[8]) || tlb_g[8]) && tlb_e[8];
assign match0[9] = (s0_vppn[18:10]==tlb_vppn[9][18:10]) && (tlb_ps[9]==6'd22 || s0_vppn[9:0]==tlb_vppn[9][9:0]) && ((s0_asid==tlb_asid[9]) || tlb_g[9]) && tlb_e[9];
assign match0[10]= (s0_vppn[18:10]==tlb_vppn[10][18:10]) && (tlb_ps[10]==6'd22 || s0_vppn[9:0]==tlb_vppn[10][9:0]) && ((s0_asid==tlb_asid[10]) || tlb_g[10]) && tlb_e[10];
assign match0[11]= (s0_vppn[18:10]==tlb_vppn[11][18:10]) && (tlb_ps[11]==6'd22 || s0_vppn[9:0]==tlb_vppn[11][9:0]) && ((s0_asid==tlb_asid[11]) || tlb_g[11]) && tlb_e[11];
assign match0[12]= (s0_vppn[18:10]==tlb_vppn[12][18:10]) && (tlb_ps[12]==6'd22 || s0_vppn[9:0]==tlb_vppn[12][9:0]) && ((s0_asid==tlb_asid[12]) || tlb_g[12]) && tlb_e[12];
assign match0[13]= (s0_vppn[18:10]==tlb_vppn[13][18:10]) && (tlb_ps[13]==6'd22 || s0_vppn[9:0]==tlb_vppn[13][9:0]) && ((s0_asid==tlb_asid[13]) || tlb_g[13]) && tlb_e[13];
assign match0[14]= (s0_vppn[18:10]==tlb_vppn[14][18:10]) && (tlb_ps[14]==6'd22 || s0_vppn[9:0]==tlb_vppn[14][9:0]) && ((s0_asid==tlb_asid[14]) || tlb_g[14]) && tlb_e[14];
assign match0[15]= (s0_vppn[18:10]==tlb_vppn[15][18:10]) && (tlb_ps[15]==6'd22 || s0_vppn[9:0]==tlb_vppn[15][9:0]) && ((s0_asid==tlb_asid[15]) || tlb_g[15]) && tlb_e[15];

assign match1[0] = (s1_vppn[18:10]==tlb_vppn[0][18:10]) && (tlb_ps[0]==6'd22 || s1_vppn[9:0]==tlb_vppn[0][9:0]) && ((s1_asid==tlb_asid[0]) || tlb_g[0]) && tlb_e[0];
assign match1[1] = (s1_vppn[18:10]==tlb_vppn[1][18:10]) && (tlb_ps[1]==6'd22 || s1_vppn[9:0]==tlb_vppn[1][9:0]) && ((s1_asid==tlb_asid[1]) || tlb_g[1]) && tlb_e[1];
assign match1[2] = (s1_vppn[18:10]==tlb_vppn[2][18:10]) && (tlb_ps[2]==6'd22 || s1_vppn[9:0]==tlb_vppn[2][9:0]) && ((s1_asid==tlb_asid[2]) || tlb_g[2]) && tlb_e[2];
assign match1[3] = (s1_vppn[18:10]==tlb_vppn[3][18:10]) && (tlb_ps[3]==6'd22 || s1_vppn[9:0]==tlb_vppn[3][9:0]) && ((s1_asid==tlb_asid[3]) || tlb_g[3]) && tlb_e[3];
assign match1[4] = (s1_vppn[18:10]==tlb_vppn[4][18:10]) && (tlb_ps[4]==6'd22 || s1_vppn[9:0]==tlb_vppn[4][9:0]) && ((s1_asid==tlb_asid[4]) || tlb_g[4]) && tlb_e[4];
assign match1[5] = (s1_vppn[18:10]==tlb_vppn[5][18:10]) && (tlb_ps[5]==6'd22 || s1_vppn[9:0]==tlb_vppn[5][9:0]) && ((s1_asid==tlb_asid[5]) || tlb_g[5]) && tlb_e[5];
assign match1[6] = (s1_vppn[18:10]==tlb_vppn[6][18:10]) && (tlb_ps[6]==6'd22 || s1_vppn[9:0]==tlb_vppn[6][9:0]) && ((s1_asid==tlb_asid[6]) || tlb_g[6]) && tlb_e[6];
assign match1[7] = (s1_vppn[18:10]==tlb_vppn[7][18:10]) && (tlb_ps[7]==6'd22 || s1_vppn[9:0]==tlb_vppn[7][9:0]) && ((s1_asid==tlb_asid[7]) || tlb_g[7]) && tlb_e[7];
assign match1[8] = (s1_vppn[18:10]==tlb_vppn[8][18:10]) && (tlb_ps[8]==6'd22 || s1_vppn[9:0]==tlb_vppn[8][9:0]) && ((s1_asid==tlb_asid[8]) || tlb_g[8]) && tlb_e[8];
assign match1[9] = (s1_vppn[18:10]==tlb_vppn[9][18:10]) && (tlb_ps[9]==6'd22 || s1_vppn[9:0]==tlb_vppn[9][9:0]) && ((s1_asid==tlb_asid[9]) || tlb_g[9]) && tlb_e[9];
assign match1[10]= (s1_vppn[18:10]==tlb_vppn[10][18:10]) && (tlb_ps[10]==6'd22 || s1_vppn[9:0]==tlb_vppn[10][9:0]) && ((s1_asid==tlb_asid[10]) || tlb_g[10]) && tlb_e[10];
assign match1[11]= (s1_vppn[18:10]==tlb_vppn[11][18:10]) && (tlb_ps[11]==6'd22 || s1_vppn[9:0]==tlb_vppn[11][9:0]) && ((s1_asid==tlb_asid[11]) || tlb_g[11]) && tlb_e[11];
assign match1[12]= (s1_vppn[18:10]==tlb_vppn[12][18:10]) && (tlb_ps[12]==6'd22 || s1_vppn[9:0]==tlb_vppn[12][9:0]) && ((s1_asid==tlb_asid[12]) || tlb_g[12]) && tlb_e[12];
assign match1[13]= (s1_vppn[18:10]==tlb_vppn[13][18:10]) && (tlb_ps[13]==6'd22 || s1_vppn[9:0]==tlb_vppn[13][9:0]) && ((s1_asid==tlb_asid[13]) || tlb_g[13]) && tlb_e[13];
assign match1[14]= (s1_vppn[18:10]==tlb_vppn[14][18:10]) && (tlb_ps[14]==6'd22 || s1_vppn[9:0]==tlb_vppn[14][9:0]) && ((s1_asid==tlb_asid[14]) || tlb_g[14]) && tlb_e[14];
assign match1[15]= (s1_vppn[18:10]==tlb_vppn[15][18:10]) && (tlb_ps[15]==6'd22 || s1_vppn[9:0]==tlb_vppn[15][9:0]) && ((s1_asid==tlb_asid[15]) || tlb_g[15]) && tlb_e[15];

assign {s0_index, s0_ps, s0_ppn, s0_v, s0_d, s0_mat, s0_plv} = {36{match0[0] & s0_va_bit12}} & {4'd0, tlb_ps[0], tlb_ppn1[0], tlb_v1[0], tlb_d1[0], tlb_mat1[0], tlb_plv1[0]} |
                                                               {36{match0[1] & s0_va_bit12}} & {4'd1, tlb_ps[1], tlb_ppn1[1], tlb_v1[1], tlb_d1[1], tlb_mat1[1], tlb_plv1[1]} |
                                                               {36{match0[2] & s0_va_bit12}} & {4'd2, tlb_ps[2], tlb_ppn1[2], tlb_v1[2], tlb_d1[2], tlb_mat1[2], tlb_plv1[2]} |
                                                               {36{match0[3] & s0_va_bit12}} & {4'd3, tlb_ps[3], tlb_ppn1[3], tlb_v1[3], tlb_d1[3], tlb_mat1[3], tlb_plv1[3]} |
                                                               {36{match0[4] & s0_va_bit12}} & {4'd4, tlb_ps[4], tlb_ppn1[4], tlb_v1[4], tlb_d1[4], tlb_mat1[4], tlb_plv1[4]} |
                                                               {36{match0[5] & s0_va_bit12}} & {4'd5, tlb_ps[5], tlb_ppn1[5], tlb_v1[5], tlb_d1[5], tlb_mat1[5], tlb_plv1[5]} |
                                                               {36{match0[6] & s0_va_bit12}} & {4'd6, tlb_ps[6], tlb_ppn1[6], tlb_v1[6], tlb_d1[6], tlb_mat1[6], tlb_plv1[6]} |
                                                               {36{match0[7] & s0_va_bit12}} & {4'd7, tlb_ps[7], tlb_ppn1[7], tlb_v1[7], tlb_d1[7], tlb_mat1[7], tlb_plv1[7]} |
                                                               {36{match0[8] & s0_va_bit12}} & {4'd8, tlb_ps[8], tlb_ppn1[8], tlb_v1[8], tlb_d1[8], tlb_mat1[8], tlb_plv1[8]} |
                                                               {36{match0[9] & s0_va_bit12}} & {4'd9, tlb_ps[9], tlb_ppn1[9], tlb_v1[9], tlb_d1[9], tlb_mat1[9], tlb_plv1[9]} |
                                                               {36{match0[10] & s0_va_bit12}} & {4'd10 ,tlb_ps[10], tlb_ppn1[10], tlb_v1[10], tlb_d1[10], tlb_mat1[10], tlb_plv1[10]} |
                                                               {36{match0[11] & s0_va_bit12}} & {4'd11, tlb_ps[11], tlb_ppn1[11], tlb_v1[11], tlb_d1[11], tlb_mat1[11], tlb_plv1[11]} |
                                                               {36{match0[12] & s0_va_bit12}} & {4'd12, tlb_ps[12], tlb_ppn1[12], tlb_v1[12], tlb_d1[12], tlb_mat1[12], tlb_plv1[12]} |
                                                               {36{match0[13] & s0_va_bit12}} & {4'd13, tlb_ps[13], tlb_ppn1[13], tlb_v1[13], tlb_d1[13], tlb_mat1[13], tlb_plv1[13]} |
                                                               {36{match0[14] & s0_va_bit12}} & {4'd14, tlb_ps[14], tlb_ppn1[14], tlb_v1[14], tlb_d1[14], tlb_mat1[14], tlb_plv1[14]} |
                                                               {36{match0[15] & s0_va_bit12}} & {4'd15, tlb_ps[15], tlb_ppn1[15], tlb_v1[15], tlb_d1[15], tlb_mat1[15], tlb_plv1[15]} |
															   {36{match0[0] & ~s0_va_bit12}} & {4'd0,  tlb_ps[0], tlb_ppn0[0], tlb_v0[0], tlb_d0[0], tlb_mat0[0], tlb_plv0[0]} |
                                                               {36{match0[1] & ~s0_va_bit12}} & {4'd1,  tlb_ps[1], tlb_ppn0[1], tlb_v0[1], tlb_d0[1], tlb_mat0[1], tlb_plv0[1]} |
                                                               {36{match0[2] & ~s0_va_bit12}} & {4'd2,  tlb_ps[2], tlb_ppn0[2], tlb_v0[2], tlb_d0[2], tlb_mat0[2], tlb_plv0[2]} |
                                                               {36{match0[3] & ~s0_va_bit12}} & {4'd3,  tlb_ps[3], tlb_ppn0[3], tlb_v0[3], tlb_d0[3], tlb_mat0[3], tlb_plv0[3]} |
                                                               {36{match0[4] & ~s0_va_bit12}} & {4'd4,  tlb_ps[4], tlb_ppn0[4], tlb_v0[4], tlb_d0[4], tlb_mat0[4], tlb_plv0[4]} |
                                                               {36{match0[5] & ~s0_va_bit12}} & {4'd5,  tlb_ps[5], tlb_ppn0[5], tlb_v0[5], tlb_d0[5], tlb_mat0[5], tlb_plv0[5]} |
                                                               {36{match0[6] & ~s0_va_bit12}} & {4'd6,  tlb_ps[6], tlb_ppn0[6], tlb_v0[6], tlb_d0[6], tlb_mat0[6], tlb_plv0[6]} |
                                                               {36{match0[7] & ~s0_va_bit12}} & {4'd7,  tlb_ps[7], tlb_ppn0[7], tlb_v0[7], tlb_d0[7], tlb_mat0[7], tlb_plv0[7]} |
                                                               {36{match0[8] & ~s0_va_bit12}} & {4'd8,  tlb_ps[8], tlb_ppn0[8], tlb_v0[8], tlb_d0[8], tlb_mat0[8], tlb_plv0[8]} |
                                                               {36{match0[9] & ~s0_va_bit12}} & {4'd9,  tlb_ps[9], tlb_ppn0[9], tlb_v0[9], tlb_d0[9], tlb_mat0[9], tlb_plv0[9]} |
                                                               {36{match0[10] & ~s0_va_bit12}} & {4'd10, tlb_ps[10], tlb_ppn0[10], tlb_v0[10], tlb_d0[10], tlb_mat0[10], tlb_plv0[10]} |
                                                               {36{match0[11] & ~s0_va_bit12}} & {4'd11, tlb_ps[11], tlb_ppn0[11], tlb_v0[11], tlb_d0[11], tlb_mat0[11], tlb_plv0[11]} |
                                                               {36{match0[12] & ~s0_va_bit12}} & {4'd12, tlb_ps[12], tlb_ppn0[12], tlb_v0[12], tlb_d0[12], tlb_mat0[12], tlb_plv0[12]} |
                                                               {36{match0[13] & ~s0_va_bit12}} & {4'd13, tlb_ps[13], tlb_ppn0[13], tlb_v0[13], tlb_d0[13], tlb_mat0[13], tlb_plv0[13]} |
                                                               {36{match0[14] & ~s0_va_bit12}} & {4'd14, tlb_ps[14], tlb_ppn0[14], tlb_v0[14], tlb_d0[14], tlb_mat0[14], tlb_plv0[14]} |
                                                               {36{match0[15] & ~s0_va_bit12}} & {4'd15, tlb_ps[15], tlb_ppn0[15], tlb_v0[15], tlb_d0[15], tlb_mat0[15], tlb_plv0[15]} ;
															   
assign {s1_index, s1_ps, s1_ppn, s1_v, s1_d, s1_mat, s1_plv} = {36{match1[0] & s1_va_bit12}} & {4'd0, tlb_ps[0], tlb_ppn1[0], tlb_v1[0], tlb_d1[0], tlb_mat1[0], tlb_plv1[0]} |
                                                               {36{match1[1] & s1_va_bit12}} & {4'd1, tlb_ps[1], tlb_ppn1[1], tlb_v1[1], tlb_d1[1], tlb_mat1[1], tlb_plv1[1]} |
                                                               {36{match1[2] & s1_va_bit12}} & {4'd2, tlb_ps[2], tlb_ppn1[2], tlb_v1[2], tlb_d1[2], tlb_mat1[2], tlb_plv1[2]} |
                                                               {36{match1[3] & s1_va_bit12}} & {4'd3, tlb_ps[3], tlb_ppn1[3], tlb_v1[3], tlb_d1[3], tlb_mat1[3], tlb_plv1[3]} |
                                                               {36{match1[4] & s1_va_bit12}} & {4'd4, tlb_ps[4], tlb_ppn1[4], tlb_v1[4], tlb_d1[4], tlb_mat1[4], tlb_plv1[4]} |
                                                               {36{match1[5] & s1_va_bit12}} & {4'd5, tlb_ps[5], tlb_ppn1[5], tlb_v1[5], tlb_d1[5], tlb_mat1[5], tlb_plv1[5]} |
                                                               {36{match1[6] & s1_va_bit12}} & {4'd6, tlb_ps[6], tlb_ppn1[6], tlb_v1[6], tlb_d1[6], tlb_mat1[6], tlb_plv1[6]} |
                                                               {36{match1[7] & s1_va_bit12}} & {4'd7, tlb_ps[7], tlb_ppn1[7], tlb_v1[7], tlb_d1[7], tlb_mat1[7], tlb_plv1[7]} |
                                                               {36{match1[8] & s1_va_bit12}} & {4'd8, tlb_ps[8], tlb_ppn1[8], tlb_v1[8], tlb_d1[8], tlb_mat1[8], tlb_plv1[8]} |
                                                               {36{match1[9] & s1_va_bit12}} & {4'd9, tlb_ps[9], tlb_ppn1[9], tlb_v1[9], tlb_d1[9], tlb_mat1[9], tlb_plv1[9]} |
                                                               {36{match1[10] & s1_va_bit12}} & {4'd10, tlb_ps[10], tlb_ppn1[10], tlb_v1[10], tlb_d1[10], tlb_mat1[10], tlb_plv1[10]} |
                                                               {36{match1[11] & s1_va_bit12}} & {4'd11, tlb_ps[11], tlb_ppn1[11], tlb_v1[11], tlb_d1[11], tlb_mat1[11], tlb_plv1[11]} |
                                                               {36{match1[12] & s1_va_bit12}} & {4'd12, tlb_ps[12], tlb_ppn1[12], tlb_v1[12], tlb_d1[12], tlb_mat1[12], tlb_plv1[12]} |
                                                               {36{match1[13] & s1_va_bit12}} & {4'd13, tlb_ps[13], tlb_ppn1[13], tlb_v1[13], tlb_d1[13], tlb_mat1[13], tlb_plv1[13]} |
                                                               {36{match1[14] & s1_va_bit12}} & {4'd14, tlb_ps[14], tlb_ppn1[14], tlb_v1[14], tlb_d1[14], tlb_mat1[14], tlb_plv1[14]} |
                                                               {36{match1[15] & s1_va_bit12}} & {4'd15, tlb_ps[15], tlb_ppn1[15], tlb_v1[15], tlb_d1[15], tlb_mat1[15], tlb_plv1[15]} |
															   {36{match1[0] & ~s1_va_bit12}} & {4'd0,  tlb_ps[0], tlb_ppn0[0], tlb_v0[0], tlb_d0[0], tlb_mat0[0], tlb_plv0[0]} |
                                                               {36{match1[1] & ~s1_va_bit12}} & {4'd1,  tlb_ps[1], tlb_ppn0[1], tlb_v0[1], tlb_d0[1], tlb_mat0[1], tlb_plv0[1]} |
                                                               {36{match1[2] & ~s1_va_bit12}} & {4'd2,  tlb_ps[2], tlb_ppn0[2], tlb_v0[2], tlb_d0[2], tlb_mat0[2], tlb_plv0[2]} |
                                                               {36{match1[3] & ~s1_va_bit12}} & {4'd3,  tlb_ps[3], tlb_ppn0[3], tlb_v0[3], tlb_d0[3], tlb_mat0[3], tlb_plv0[3]} |
                                                               {36{match1[4] & ~s1_va_bit12}} & {4'd4,  tlb_ps[4], tlb_ppn0[4], tlb_v0[4], tlb_d0[4], tlb_mat0[4], tlb_plv0[4]} |
                                                               {36{match1[5] & ~s1_va_bit12}} & {4'd5,  tlb_ps[5], tlb_ppn0[5], tlb_v0[5], tlb_d0[5], tlb_mat0[5], tlb_plv0[5]} |
                                                               {36{match1[6] & ~s1_va_bit12}} & {4'd6,  tlb_ps[6], tlb_ppn0[6], tlb_v0[6], tlb_d0[6], tlb_mat0[6], tlb_plv0[6]} |
                                                               {36{match1[7] & ~s1_va_bit12}} & {4'd7,  tlb_ps[7], tlb_ppn0[7], tlb_v0[7], tlb_d0[7], tlb_mat0[7], tlb_plv0[7]} |
                                                               {36{match1[8] & ~s1_va_bit12}} & {4'd8,  tlb_ps[8], tlb_ppn0[8], tlb_v0[8], tlb_d0[8], tlb_mat0[8], tlb_plv0[8]} |
                                                               {36{match1[9] & ~s1_va_bit12}} & {4'd9,  tlb_ps[9], tlb_ppn0[9], tlb_v0[9], tlb_d0[9], tlb_mat0[9], tlb_plv0[9]} |
                                                               {36{match1[10] & ~s1_va_bit12}} & {4'd10, tlb_ps[10], tlb_ppn0[10], tlb_v0[10], tlb_d0[10], tlb_mat0[10], tlb_plv0[10]} |
                                                               {36{match1[11] & ~s1_va_bit12}} & {4'd11, tlb_ps[11], tlb_ppn0[11], tlb_v0[11], tlb_d0[11], tlb_mat0[11], tlb_plv0[11]} |
                                                               {36{match1[12] & ~s1_va_bit12}} & {4'd12, tlb_ps[12], tlb_ppn0[12], tlb_v0[12], tlb_d0[12], tlb_mat0[12], tlb_plv0[12]} |
                                                               {36{match1[13] & ~s1_va_bit12}} & {4'd13, tlb_ps[13], tlb_ppn0[13], tlb_v0[13], tlb_d0[13], tlb_mat0[13], tlb_plv0[13]} |
                                                               {36{match1[14] & ~s1_va_bit12}} & {4'd14, tlb_ps[14], tlb_ppn0[14], tlb_v0[14], tlb_d0[14], tlb_mat0[14], tlb_plv0[14]} |
                                                               {36{match1[15] & ~s1_va_bit12}} & {4'd15, tlb_ps[15], tlb_ppn0[15], tlb_v0[15], tlb_d0[15], tlb_mat0[15], tlb_plv0[15]};
	

assign s0_found = ~(match0 == {TLBNUM{1'd0}});
assign s1_found = ~(match1 == {TLBNUM{1'd0}});
	
//invtlb

/*assign tlb_e[0]= ~((invtlb_op==5'd0 || invtlb_op==5'd1) || (invtlb_op==5'd2 && tlb_g[0]==1'b1) || (invtlb_op==5'd3 && tlb_g[0]==1'b0) || (invtlb_op==5'd4 && tlb_g[0]==1'b0 && tlb_asid[0]==s1_asid)||
                  (invtlb_op==5'd5 && tlb_g[0]==1'b0 && tlb_asid[0]==s1_asid && (s1_vppn[18:10]==tlb_vppn[0][18:10]) && (tlb_ps4MB[0] || s1_vppn[9:0]==tlb_vppn[0][9:0])) ||
				  (invtlb_op==5'd6 && (tlb_g[0]==1'b1 || tlb_asid[0]==s1_asid) && (s1_vppn[18:10]==tlb_vppn[0][18:10]) && (tlb_ps4MB[0] || s1_vppn[9:0]==tlb_vppn[0][9:0])));*/

genvar i;
generate 
    for (i = 0; i < TLBNUM; i = i + 1) begin
          always @(posedge clk) begin
		    if(invtlb_valid)begin
                if (invtlb_op == 5'd0 || invtlb_op == 5'd1) begin
                    tlb_e[i] <= 1'b0;
                end
                else if (invtlb_op == 5'd2) begin
                    if (tlb_g[i]) begin
                        tlb_e[i] <= 1'b0;
                    end
                  end
                else if (invtlb_op == 5'd3) begin
                    if (!tlb_g[i]) begin
                        tlb_e[i] <= 1'b0;
                    end
                end
                else if (invtlb_op == 5'd4) begin
                    if (!tlb_g[i] && (tlb_asid[i] == s1_asid)) begin
                        tlb_e[i] <= 1'b0;
                    end
                end
                else if (invtlb_op == 5'd5) begin
                    if (!tlb_g[i] && (tlb_asid[i] == s1_asid) && 
                       (s1_vppn[18:10]==tlb_vppn[i][18:10]) && (tlb_ps[i]==6'd22 || s1_vppn[9:0]==tlb_vppn[i][9:0])) begin
                        tlb_e[i] <= 1'b0;
                    end
                end
                else if (invtlb_op == 5'd6) begin
                    if ((tlb_g[i] || (tlb_asid[i] == s1_asid)) && 
                       (s1_vppn[18:10]==tlb_vppn[i][18:10]) && (tlb_ps[i]==6'd22 || s1_vppn[9:0]==tlb_vppn[i][9:0])) begin
                        tlb_e[i] <= 1'b0;
                    end
                end
            end
        end
	end
endgenerate

endmodule
