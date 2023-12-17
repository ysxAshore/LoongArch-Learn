/*------------------------------------------------------------------------------
--------------------------------------------------------------------------------
Copyright (c) 2016, Loongson Technology Corporation Limited.

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

3. Neither the name of Loongson Technology Corporation Limited nor the names of
its contributors may be used to endorse or promote products derived from this
software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL LOONGSON TECHNOLOGY CORPORATION LIMITED BE LIABLE
TO ANY PARTY FOR DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------
------------------------------------------------------------------------------*/

//*************************************************************************
//   > File Name   : confreg.v
//   > Description : Control module of
//                   16 red leds.
//
//   > Author      : LOONGSON
//   > Date        : 2017-08-04
//*************************************************************************


//该CPU没有设置数据存储器，对于CPU所发出的写存储器指令STW，所采取的直观做法是将写数据写到LED灯上——当CPU发出写信号且写地址是1028时表示写数据到LED
//因此conf_wdata是来自于CPU的写存储器数据,conf_we是来自于CPU的写信号且给定写地址是十进制的1028,clk,resetn也都与CPU的clk，resetn相同
module confreg (
    input  wire        clk,
    input  wire        resetn,
    input  wire        conf_we,
    input  wire [31:0] conf_wdata,
    output wire [15:0] led
);

  reg [31:0] led_data;

  wire write_led = conf_we;
  assign led = led_data[15:0];
  always @(posedge clk) begin
    if (!resetn) begin
      led_data <= 32'h0;
    end else if (write_led) begin
      led_data <= conf_wdata[31:0];
    end
  end

endmodule
