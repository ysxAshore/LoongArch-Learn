`timescale 1ns / 1ps

module scroller #(parameter CNT_1S = 27'd10000)
                 (input clk,
                  input resetn,
                  output reg [15:0] led);
    
    reg [26:0] cnt;
    always @(posedge clk)//处理块
    begin
        if (!resetn)//低电平复位
        begin
            led <= 16'hfffe;//LED灯是高电平的，0灭1亮，初始时前16个灯亮，最后一个灭
            cnt = 27'b0;
        end
        else if (cnt == CNT_1S)//计时到1s
        begin
            led <= {led[14:0],led[15]};//循环左移实现跑马灯
            cnt = 27'b0;
            end else
            begin
            cnt = cnt + 1;
        end
            end
            endmodule
