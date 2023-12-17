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
//   > File Name   : soc_mini_top.v
//   > Description : SoC, included cpu, 
//                   inst ram, confreg
// 
//           -------------------------
//           |           cpu         |
//           -------------------------
//         inst|                  | data
//             |                  | 
//             |                  |           
//             |                  |           
//      -------------         -----------
//      | inst ram  |         | confreg |
//      -------------         -----------
//
//   > Author      : LOONGSON
//   > Date        : 2017-08-04
//*************************************************************************

`default_nettype none

//for simulation:
//1. if define SIMU_USE_PLL = 1, will use clk_pll to generate cpu_clk,
//   and simulation will be very slow.
//2. usually, please define SIMU_USE_PLL=0 to speed up simulation by assign
//   cpu_clk = clk.
//   at this time, cpu_clk frequency are both 100MHz, same as clk.

`define SIMU_USE_PLL 0 //set 0 to speed up simulation

module soc_mini_top #(
    parameter SIMULATION = 1'b0
) (
    input wire resetn,
    input wire clk,

    input wire [7 : 0] switch,  //输入 低位8个开关
    output wire [15:0] led  //输出  低位16个LED灯
);

  //clk and resetn 为了方便上板 使用clk_pll生产cpu时钟以及使用cpu时钟去同步复位信号
  wire cpu_clk;
  reg  cpu_resetn;
  always @(posedge cpu_clk) begin
    cpu_resetn <= resetn;
  end
  generate
    if (SIMULATION && `SIMU_USE_PLL == 0) begin : speedup_simulation
      assign cpu_clk = clk;
    end else begin : pll
      clk_pll clk_pll (
          .clk_in1  (clk),
          .cpu_clk  (cpu_clk),
          .timer_clk()
      );
    end
  endgenerate

  //cpu inst sram
  wire        cpu_inst_we;
  wire [31:0] cpu_inst_addr;
  wire [31:0] cpu_inst_wdata;
  wire [31:0] cpu_inst_rdata;
  //cpu data sram
  wire        cpu_data_we;
  wire [31:0] cpu_data_addr;
  wire [31:0] cpu_data_wdata;
  wire [31:0] cpu_data_rdata;

  //data sram   这里并没有用到
  wire        data_sram_en;
  wire        data_sram_we;
  wire [31:0] data_sram_addr;
  wire [31:0] data_sram_wdata;
  wire [31:0] data_sram_rdata;

  //conf
  wire        conf_en;
  wire        conf_we;
  wire [31:0] conf_addr;
  wire [31:0] conf_wdata;
  wire [31:0] conf_rdata;
  wire [15:0] conf_led;

  //cpu
  minicpu_top cpu (
      .clk   (cpu_clk),
      .resetn(cpu_resetn),

      .inst_sram_we   (cpu_inst_we),
      .inst_sram_addr (cpu_inst_addr),
      .inst_sram_wdata(cpu_inst_wdata),
      .inst_sram_rdata(cpu_inst_rdata),

      .data_sram_we   (cpu_data_we),
      .data_sram_addr (cpu_data_addr),
      .data_sram_wdata(cpu_data_wdata),
      .data_sram_rdata(cpu_data_rdata)
  );

  assign cpu_data_rdata = (cpu_data_addr == 12'd1024) ? {24'b0, ~switch[7:0]} : 32'b0;//如果读存储地址是十进制的1024，那么就读开关数据（拨上是低电平，拨下是高电平），否则读0

  //inst ram
  inst_ram inst_ram (
      .clk(cpu_clk),
      .we (cpu_inst_we),
      .a  (cpu_inst_addr[17:2]),  //取指地址是2~17位
      .d  (cpu_inst_wdata),
      .spo(cpu_inst_rdata)
  );

  //confreg
  confreg u_confreg (
      .clk       (cpu_clk),
      .resetn    (cpu_resetn),
      .conf_we   (conf_we),
      .conf_wdata(conf_wdata),
      .led       (conf_led)
  );

  assign conf_we    = cpu_data_we && cpu_data_addr == 12'd1028;
  assign conf_wdata = cpu_data_wdata;

  assign led = ~conf_led;//led灯高电平是灭，低电平是亮

endmodule

