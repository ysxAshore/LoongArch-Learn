
module show_sw (
    input clk,
    input resetn,
    input [3 : 0] switch,

    output [7 : 0] num_csn,
    output [6 : 0] num_a_g,
    output [3 : 0] led
);
  reg [3:0] show_data;  //实时数据值
  reg [3:0] show_data_t;
  reg [3:0] prev_data;  //存储上一次的值
  assign led = ~prev_data;
  always @(posedge clk) begin
    if (!resetn) begin
      prev_data <= 4'hf;
      show_data <= 4'h0;
    end else begin
      show_data_t <= show_data;
      show_data   <= ~switch;
      if (show_data_t != show_data) begin
        prev_data <= show_data_t;
      end
    end
  end
  show_num show_num_init (
      clk,
      resetn,
      show_data,
      num_csn,
      num_a_g
  );
endmodule

module show_num (
    input              clk,
    input              resetn,
    input      [3 : 0] show_data,
    output     [7 : 0] num_csn,
    output reg [6 : 0] num_a_g
);

  assign num_csn = 8'b0111_1111;  //位选码只选择最左侧数码管，不变

  wire [6:0] nxt_a_g;

  always @(posedge clk) begin
    if (!resetn) begin
      num_a_g <= 7'b1111110;
    end else begin
      num_a_g <= nxt_a_g;
    end
  end

  assign nxt_a_g = show_data == 4'd0 ? 7'b1111110 :  //0
      show_data == 4'd1 ? 7'b0110000 :  //1
      show_data == 4'd2 ? 7'b1101101 :  //2
      show_data == 4'd3 ? 7'b1111001 :  //3
      show_data == 4'd4 ? 7'b0110011 :  //4
      show_data == 4'd5 ? 7'b1011011 :  //5
      show_data == 4'd6 ? 7'b1011111 :  //6
      show_data == 4'd7 ? 7'b1110000 :  //7
      show_data == 4'd8 ? 7'b1111111 :  //8
      show_data == 4'd9 ? 7'b1111011 :  //9
      num_a_g;
endmodule
