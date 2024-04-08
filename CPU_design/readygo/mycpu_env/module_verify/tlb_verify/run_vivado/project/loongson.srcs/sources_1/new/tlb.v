
module tlb #(
    parameter NUM = 16
) (
    input wire clk,
    //不用硬件初始化，因此不需要赋值信�? 

    //取指
    input wire [18:0] s0_vppn,
    input wire s0_va_bit12,
    input wire [9:0] s0_asid,
    output wire s0_found,
    output wire [19:0] s0_ppn,
    output wire [5:0] s0_ps,
    output wire [1:0] s0_plv,
    output wire [1:0] s0_mat,
    output wire s0_d,
    output wire s0_v,
    output wire [$clog2(
NUM
)-1:0] s0_findex,  //输出index，默认是5位�?��?�TLBHI里的index也设置了5�?

    //访存
    input wire [18:0] s1_vppn,
    input wire s1_va_bit12,
    input wire [9:0] s1_asid,
    output wire s1_found,
    output wire [19:0] s1_ppn,
    output wire [5:0] s1_ps,
    output wire [1:0] s1_plv,
    output wire [1:0] s1_mat,
    output wire s1_d,
    output wire s1_v,
    output wire [$clog2(NUM)-1:0] s1_findex,

    //TLBSRCH 索引端口已经列出

    //TLBWR、TLBFILL
    input wire we,
    input wire [$clog2(NUM)-1:0] w_index,
    input wire w_e,
    input wire [18:0] w_vppn,
    input wire [5:0] w_ps,
    input wire [9:0] w_asid,
    input wire w_g,
    input wire [19:0] w_ppn0,
    input wire [1:0] w_plv0,
    input wire [1:0] w_mat0,
    input wire w_d0,
    input wire w_v0,
    input wire [19:0] w_ppn1,
    input wire [1:0] w_plv1,
    input wire [1:0] w_mat1,
    input wire w_d1,
    input wire w_v1,

    //TLBRD
    input wire [$clog2(NUM)-1:0] r_index,
    output wire r_e,
    output wire [18:0] r_vppn,
    output wire [5:0] r_ps,
    output wire [9:0] r_asid,
    output wire r_g,
    output wire [19:0] r_ppn0,
    output wire [1:0] r_plv0,
    output wire [1:0] r_mat0,
    output wire r_d0,
    output wire r_v0,
    output wire [19:0] r_ppn1,
    output wire [1:0] r_plv1,
    output wire [1:0] r_mat1,
    output wire r_d1,
    output wire r_v1,

    //INVTLB
    input wire invtlb_valid,  //表示进行invtlb操作
    input wire [4:0] op  //超过6时触发ine
);
  reg        tlb_e   [NUM-1:0];
  reg [18:0] tlb_vppn[NUM-1:0];
  reg [ 5:0] tlb_ps  [NUM-1:0];
  reg [ 9:0] tlb_asid[NUM-1:0];
  reg        tlb_g   [NUM-1:0];
  reg [19:0] ppn0    [NUM-1:0];
  reg [ 1:0] plv0    [NUM-1:0];
  reg [ 1:0] mat0    [NUM-1:0];
  reg        d0      [NUM-1:0];
  reg        v0      [NUM-1:0];
  reg [19:0] ppn1    [NUM-1:0];
  reg [ 1:0] plv1    [NUM-1:0];
  reg [ 1:0] mat1    [NUM-1:0];
  reg        d1      [NUM-1:0];
  reg        v1      [NUM-1:0];

  //WRITE
  always @(posedge clk) begin
    if (we) begin
      tlb_vppn[w_index] <= w_vppn;
      tlb_ps[w_index] <= w_ps;
      tlb_asid[w_index] <= w_asid;
      tlb_g[w_index] <= w_g;
      ppn0[w_index] <= w_ppn0;
      plv0[w_index] <= w_plv0;
      mat0[w_index] <= w_mat0;
      d0[w_index] <= w_d0;
      v0[w_index] <= w_v0;
      ppn1[w_index] <= w_ppn1;
      plv1[w_index] <= w_plv1;
      mat1[w_index] <= w_mat1;
      d1[w_index] <= w_d1;
      v1[w_index] <= w_v1;
    end
  end

  //READ
  assign r_e = tlb_e[r_index];
  assign r_vppn = tlb_vppn[r_index];
  assign r_ps = tlb_ps[r_index];
  assign r_asid = tlb_asid[r_index];
  assign r_g = tlb_g[r_index];
  assign r_ppn0 = ppn0[r_index];
  assign r_plv0 = plv0[r_index];
  assign r_mat0 = mat0[r_index];
  assign r_d0 = d0[r_index];
  assign r_v0 = v0[r_index];
  assign r_ppn1 = ppn1[r_index];
  assign r_plv1 = plv1[r_index];
  assign r_mat1 = mat1[r_index];
  assign r_d1 = d1[r_index];
  assign r_v1 = v1[r_index];

  //TLBSRCH、取指、访存
  wire [NUM-1:0] match_item0;  //取指
  wire [NUM-1:0] match_item1;  //访存+TLBSRCH

  //找一个命中的就行，出现多个命中时处理器的结果不确�? 这里给定�?个优先级 序号小的先被找到
  assign match_item0[0] = tlb_e[0] 
                            & (tlb_g[0] | tlb_asid[0] == s0_asid) 
                            & tlb_vppn[0][18:9] == s0_vppn[18:9] & (tlb_ps[0] == 6'd21 | tlb_vppn[0][8:0] == s0_vppn[8:0]);
  assign match_item1[0] = tlb_e[0] 
                            & (tlb_g[0] | tlb_asid[0] == s1_asid) 
                            & tlb_vppn[0][18:9] == s1_vppn[18:9] & (tlb_ps[0] == 6'd21 | tlb_vppn[0][8:0] == s1_vppn[8:0]);

  genvar i;
  generate
    for (i = 1; i < NUM; i = i + 1) begin
      assign match_item0[i] = tlb_e[i] 
                             & (tlb_g[i] | tlb_asid[i] == s0_asid) 
                             & tlb_vppn[i][18:9] == s0_vppn[18:9] & (tlb_ps[i] == 6'd21 | tlb_vppn[i][8:0] == s0_vppn[8:0])
                             & ~|match_item0[i-1:0];//之前的没有命中的

      assign match_item1[i] = tlb_e[i] 
                             & (tlb_g[i] | tlb_asid[i] == s1_asid) 
                             & tlb_vppn[i][18:9] == s1_vppn[18:9] & (tlb_ps[i] == 6'd21 | tlb_vppn[i][8:0] == s1_vppn[8:0])
                             & ~|match_item1[i-1:0];//之前的没有命中的
    end
  endgenerate

  assign s0_found = |match_item0;
  assign s1_found = |match_item1;

  parameter WIDTH = 32 + $clog2(NUM);

  //根据被查找虚页号的最低位                                                                              
  wire [WIDTH-1:0] res_temp0[NUM-1:0];
  wire [WIDTH-1:0] res_temp1[NUM-1:0];
  assign res_temp0[0] = {WIDTH{match_item0[0]}} & {tlb_ps[0] == 6'd12 & s0_va_bit12 |  tlb_ps[0] == 6'd21 & s0_vppn[8] ? ppn1[0] : ppn0[0],
                                                                                        tlb_ps[0],
                                                                                        tlb_ps[0] == 6'd12 & s0_va_bit12 | tlb_ps[0] == 6'd21 & s0_vppn[8] ? plv1[0] : plv0[0],
                                                                                        tlb_ps[0] == 6'd12 & s0_va_bit12 | tlb_ps[0] == 6'd21 & s0_vppn[8] ? mat1[0] : mat0[0],
                                                                                        tlb_ps[0] == 6'd12 & s0_va_bit12 | tlb_ps[0] == 6'd21 & s0_vppn[8] ? d1[0] : d0[0],
                                                                                        tlb_ps[0] == 6'd12 & s0_va_bit12 | tlb_ps[0] == 6'd21 & s0_vppn[8] ? v1[0] : v0[0],
                                                                                        {$clog2(
      NUM
  ) {1'b0}}};
  assign res_temp1[0] = {WIDTH{match_item1[0]}} & {tlb_ps[0] == 6'd12 & s1_va_bit12 |  tlb_ps[0] == 6'd21 & s1_vppn[8] ? ppn1[0] : ppn0[0],
                                                                                        tlb_ps[0],
                                                                                        tlb_ps[0] == 6'd12 & s1_va_bit12 | tlb_ps[0] == 6'd21 & s1_vppn[8] ? plv1[0] : plv0[0],
                                                                                        tlb_ps[0] == 6'd12 & s1_va_bit12 | tlb_ps[0] == 6'd21 & s1_vppn[8] ? mat1[0] : mat0[0],
                                                                                        tlb_ps[0] == 6'd12 & s1_va_bit12 | tlb_ps[0] == 6'd21 & s1_vppn[8] ? d1[0] : d0[0],
                                                                                        tlb_ps[0] == 6'd12 & s1_va_bit12 | tlb_ps[0] == 6'd21 & s1_vppn[8] ? v1[0] : v0[0],
                                                                                        {$clog2(
      NUM
  ) {1'b0}}};
  genvar j;
  generate
    for (j = 1; j < NUM; j = j + 1) begin
      assign res_temp0[j] = res_temp0[j-1] | {{WIDTH{match_item0[j]}}} & {tlb_ps[j] == 6'd12 & s0_va_bit12 | tlb_ps[j] == 6'd21 & s0_vppn[8] ? ppn1[j] : ppn0[j],
                                                                             tlb_ps[j],
                                                                             tlb_ps[j] == 6'd12 & s0_va_bit12 | tlb_ps[j] == 6'd21 & s0_vppn[8] ? plv1[j] : plv0[j],
                                                                             tlb_ps[j] == 6'd12 & s0_va_bit12 | tlb_ps[j] == 6'd21 & s0_vppn[8] ? mat1[j] : mat0[j],
                                                                             tlb_ps[j] == 6'd12 & s0_va_bit12 | tlb_ps[j] == 6'd21 & s0_vppn[8] ? d1[j] : d0[j],
                                                                             tlb_ps[j] == 6'd12 & s0_va_bit12 | tlb_ps[j] == 6'd21 & s0_vppn[8] ? v1[j] : v0[j],
                                                                             j[$clog2(
          NUM
      )-1:0]};
      assign res_temp1[j] = res_temp1[j-1] | {{WIDTH{match_item1[j]}}} & {tlb_ps[j] == 6'd12 & s1_va_bit12 | tlb_ps[j] == 6'd21 & s1_vppn[8] ? ppn1[j] : ppn0[j],
                                                                             tlb_ps[j],
                                                                             tlb_ps[j] == 6'd12 & s1_va_bit12 | tlb_ps[j] == 6'd21 & s1_vppn[8] ? plv1[j] : plv0[j],
                                                                             tlb_ps[j] == 6'd12 & s1_va_bit12 | tlb_ps[j] == 6'd21 & s1_vppn[8] ? mat1[j] : mat0[j],
                                                                             tlb_ps[j] == 6'd12 & s1_va_bit12 | tlb_ps[j] == 6'd21 & s1_vppn[8] ? d1[j] : d0[j],
                                                                             tlb_ps[j] == 6'd12 & s1_va_bit12 | tlb_ps[j] == 6'd21 & s1_vppn[8] ? v1[j] : v0[j],
                                                                             j[$clog2(
          NUM
      )-1:0]};
    end
  endgenerate

  assign {s0_ppn, s0_ps, s0_plv, s0_mat, s0_d, s0_v, s0_findex} = res_temp0[NUM-1];
  assign {s1_ppn, s1_ps, s1_plv, s1_mat, s1_d, s1_v, s1_findex} = res_temp1[NUM-1];

  genvar  k;
  generate
    for (k = 0; k < NUM; k = k + 1) begin
      always @(posedge clk) begin
        if (k == w_index & we) begin
          tlb_e[k] <= w_e;
        end else if (invtlb_valid) begin
          if (op == 5'h0 | op == 5'h1) begin
            tlb_e[k] <= 1'b0;
          end else if (op == 5'h2 & tlb_g[k]) begin
            tlb_e[k] <= 1'b0;
          end else if (op == 5'h3 & ~tlb_g[k]) begin
            tlb_e[k] <= 1'b0;
          end else if (op == 5'h4 & ~tlb_g[k] & tlb_asid[k] == s1_asid) begin
            tlb_e[k] <= 1'b0;
          end else if (op == 5'h5 & ~tlb_g[k] & tlb_asid[k] == s1_asid & tlb_vppn[k][18:9] == s1_vppn[18:9] & (tlb_ps[0] == 6'd21 | tlb_vppn[k][8:0] == s1_vppn[8:0])) begin
            tlb_e[k] <= 1'b0;
          end else if (op == 5'h6 & (tlb_g[k] | tlb_asid[k] == s1_asid) & tlb_vppn[k][18:9] == s1_vppn[18:9] & (tlb_ps[0] == 6'd21 | tlb_vppn[k][8:0] == s1_vppn[8:0])) begin
            tlb_e[k] <= 1'b0;
          end
        end
      end
    end
  endgenerate  
endmodule
