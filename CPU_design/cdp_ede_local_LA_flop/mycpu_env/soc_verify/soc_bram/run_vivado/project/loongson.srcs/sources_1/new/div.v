//x/y   //32位操作数，同mul的处理，根据有无符号需要扩展，因此除数33位，从32到0需要33个时钟周期，再加上0的计算，到34时钟周期上沿时得到结果
module div (
    input div_clk,
    reset,  //div时钟，复位信号高有效
    input div,  //表示当前进行的操作是除法——计算过程中div始终保持有效
    input div_signed,  //高电平有符号除
    input [31:0] x,
    y,  //被除数、除数
    output [31:0] s,
    r,  //商、余数
    output complete_delay  //这里直接输出complete_delay,有效时即得到商和余数
);


  reg [32:0] UnsignS, UnsignR;  //不经过符号处理的商和余数
  reg [32:0] tmp_r;  //存储计算过程中的余数
  reg [ 7:0] count;  //计算周期
  wire [32:0] tmp_d,tmp_add,tmp_sub;//存储新计算得到的余数，余数加除数，余数减除数
  wire [32:0] result_r;  //新产生的余数
  wire [32:0] UnsignX, UnsignY;//根据是否进行有符号除法，进行扩展转换成无符号数

  reg  div_signed_buffer; //因为涉及到多个周期，为了防止中途有新的输入，需要暂存当前计算的符合
  reg x_31_buffer;  //缓存x符号
  reg y_31_buffer;  //缓存y符号
  wire real_div_signed;  //在刚开始时的div_signed和结束时的div_signed_buffer中选择
  wire real_x_31;  //在刚开始时的y_31和结束时的div_signed_buffer中选择
  wire real_y_31;  //在刚开始时的y_31和结束时的div_signed_buffer中选择
  wire complete;  //商计算完成
  wire real_complete;  //余数和商产生的整个时间
  assign complete_delay = (count == 8'hf0);  //余数计算完成
  assign real_complete  = complete_delay || complete;


  always @(posedge div_clk) begin
    if (reset) begin  //初始化
      div_signed_buffer <= 1'b0;
      x_31_buffer <= 1'b0;
      y_31_buffer <= 1'b0;
    end else if (div) begin  //进行除法
      div_signed_buffer <= div_signed;
      x_31_buffer <= x[31];
      y_31_buffer <= y[31];
    end
  end

  //计算刚开始时，需要根据div_signed作处理，计算结束时，根据div_signed_buffer处理
  assign real_div_signed = real_complete ? div_signed_buffer : div_signed;
  assign real_x_31 = real_complete ? x_31_buffer : x[31];
  assign real_y_31 = real_complete ? y_31_buffer : y[31];

  assign UnsignX = {1'b0, (real_div_signed ? (x[31] ? (~x + 32'b1) : x) : x)};  //按无符号处理
  assign UnsignY = {1'b0, (real_div_signed ? (y[31] ? (~y + 32'b1) : y) : y)};

  always @(posedge div_clk) begin  //除法计算 采用同步赋值
    if (reset || ~div || complete_delay) begin
      count <= 8'd32;
      tmp_r <= 33'b0;
    end else if (~(count[7])) begin  //count为8'ff 
      if (tmp_d[32]) begin  //当前结果为负数，那么商上0
        UnsignS <= {UnsignS[31:0], 1'b0};
      end else begin  //当前结果为正数，商上1
        UnsignS <= {UnsignS[31:0], 1'b1};
      end
      tmp_r <= tmp_d;
      count <= count - 8'd1;
    end else begin  //计算余数
      if (tmp_r[32]) begin  //余数结果为负，加除数修复
        UnsignR <= tmp_r + UnsignY;
      end else begin
        UnsignR <= tmp_r;
      end
      count <= 8'hf0;
    end

  end

  assign complete = (count == 8'hff);  //商计算完成

  assign result_r = {
    tmp_r[31:0], UnsignX[count]
  };  //相当于不移动被除数，但也做到了低位补充被除数当前运算要补充到剩余余数的数
  assign tmp_sub = result_r - UnsignY;  //余数-除数
  assign tmp_add = result_r + UnsignY;  //余数+除数
  assign tmp_d = tmp_r[32]?tmp_add:tmp_sub;//若上一次余数为负，则选择tmp_add否则选择tmp_sub

  //根据要进行的有无符号计算，对无符号结果进行处理 被除数和除数异号那么商就是负，余数和被除数符号相同
  wire [32:0] TmpS, TmpR;
  assign TmpS = (real_div_signed ? ((real_x_31 == real_y_31) ? UnsignS : ~(UnsignS - 1)) : UnsignS);
  assign TmpR = (real_div_signed ? (real_x_31 ? ~(UnsignR - 1) : UnsignR) : UnsignR);

  assign s = TmpS[31:0];
  assign r = TmpR[31:0];

endmodule
