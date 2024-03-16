# C6 五级流水CPU的精确中断异常实现

## 目录

-   [1 CSR实现](#1-CSR实现)
    -   [1.1 使用Verilog头文件定义CSR寄存器域](#11-使用Verilog头文件定义CSR寄存器域)
    -   [1.2 使用Verilog设计文件实现CSR的RW](#12-使用Verilog设计文件实现CSR的RW)
-   [2 流水阶段增量开发——EXP12](#2-流水阶段增量开发EXP12)
    -   [2.1 IF阶段代码修改](#21-IF阶段代码修改)
    -   [2.2 ID阶段代码修改](#22-ID阶段代码修改)
    -   [2.3 EXE阶段代码修改](#23-EXE阶段代码修改)
    -   [2.4 MEM阶段代码修改](#24-MEM阶段代码修改)
    -   [2.5 WB阶段代码修改](#25-WB阶段代码修改)
    -   [2.6 hazard阶段代码修改](#26-hazard阶段代码修改)
-   [3 流水阶段增量开发——EXP13](#3-流水阶段增量开发EXP13)
    -   [3.1 IF阶段增量开发——支持ADEF异常](#31-IF阶段增量开发支持ADEF异常)
    -   [3.2 ID阶段增量开发——支持RDCNT、BREAK指令、定时器中断、软中断](#32-ID阶段增量开发支持RDCNTBREAK指令定时器中断软中断)
    -   [3.3 EXE阶段增量开发——支持ALE异常、根据d\_rdcnt\_inst选择写寄存器数据](#33-EXE阶段增量开发支持ALE异常根据d_rdcnt_inst选择写寄存器数据)
    -   [3.4 MEM阶段增量开发](#34-MEM阶段增量开发)
    -   [3.5 WB阶段增量开发](#35-WB阶段增量开发)
    -   [3.6 hazard模块增量开发](#36-hazard模块增量开发)
-   [4 重点记录](#4-重点记录)

> 参考资料
>
> [4 特权资源架构概述](https://www.wolai.com/hrLyJkjGtpENXeqK1btNgP "4 特权资源架构概述")
>
> [6 例外与中断](https://www.wolai.com/b7B4bvyhbv42DkoBwe6aKb "6 例外与中断")
>
> [7 控制状态寄存器CSR](https://www.wolai.com/hfAQovN8p4tkzBTxQsdqgn "7 控制状态寄存器CSR")

## 1 CSR实现

### 1.1 使用Verilog头文件定义CSR寄存器域

使用`` `define  ``宏命令来优化CSR实现过程中对寄存器域的使用——使用``寄存器[`域名]``代替`寄存器[位段]`

这里省略了需要RW或R整个寄存器的一些CSR：比如ERA等

```verilog
//定义CSR各域对应的位段，从而可以在.v文件中直接使用`域名来代替数组位段

//CRMD
`define PLV 1:0
`define IE 2
`define DA 3
`define PG 4
`define DATF 6:5
`define DATM 8:7

//PRMD
`define PPLV 1:0
`define PIE 2

//EUEN
`define FPE 0

//ECFG
`define LIE 12:0
`define LIE_9_0 9:0
`define LIE_12_11 12:11

//ESTAT
`define IS 12:0
`define IS_1_0 1:0
`define IS_9_2 9:2
`define ECODE 21:16
`define ESUBCODE 30:22

//EENTRY
`define EENTRY_VA 31:6

//TLBIDX n为5
`define INDEX 4:0
`define PS 29:24
`define NE 31

//TLBEHI
`define VPPN 31:13

//TLBELO PALEN=36
`define TLB_V 0
`define TLB_D 1
`define TLB_PLV 3:2
`define TLB_MAT 5:4
`define TLB_G 6
`define TLB_PPN 31:8

//ASID
`define TLB_ASID 9:0
`define TLB_ASIDBITS 23:16

//PGDL
`define PGDL_BASE 31:12

//PGDH
`define PGDH_BASE 31:12

//PGD
`define PGD_BASE 31:12

//TLBEENTRY
`define TLBEENTRY_VA 31:6

//DMW
`define DMW_PLV0 0
`define DMW_PLV3 3
`define DMW_MAT 5:4
`define DMW_PSEG 27:25
`define DMW_VSEG 31:29

//CPUID
`define COREID 8:0

//LLBCTL
`define ROLLB 0
`define WCLLB 1
`define KLO 2

//TCFG n是32
`define EN 0
`define PERIODIC 1
`define INITVAL 31:2 

//TICLR
`define CLR 0

```

其中关于TLB域和TCFG域的边界值和做了以下定义：

1.  TLBIDX的n值为5→32个TLB项
2.  TLBELO的PALEN为36
3.  TCFG的n值为32

### 1.2 使用Verilog设计文件实现CSR的RW

不考虑TLB、CACHE的csr代码如下：

```verilog
`timescale 1ns / 1ps
`include "csr.vh"

module csr (
    input clk,
    input resetn,

    //译码阶段需要读CSR寄存器——类似于直接读通用寄存器
    input  [13:0] d_csrAdd,
    output [31:0] d_csrRead,

    //写回阶段写CSR
    input W_csr_en,
    input [13:0] W_csrWAdd,
    input [31:0] W_csrWData,

    //输出的定时器编号 为了实现RDCNT系列指令
    output [31:0] tid_out,
    output [63:0] timer_64_out,

    //外部输入的8个硬中断中断源 对应csr.estat.is[9:2] 来自外设 
    input [7:0] interrupt,
    output has_int,  //表示有中断请求——当做一个特殊的异常处理

    //进行异常的响应 来自写回阶段
    input W_excp,
    input W_excp_tlbrefill,
    //进行ertn的响应 来自写回阶段
    input W_ertn,
    //输入给csr.era的服务程序返回地址 来自写回阶段
    input [31:0] W_era,
    //输入给csr.estat的异常编号 来自写回阶段
    input [8:0] W_subcode,
    input [5:0] W_code,
    //输入给csr.badv 的adef异常
    input [31:0] W_badv_pc,
    input W_excp_adef,
    //ll sc设置llbit 来自写回阶段
    input W_llbit,
    input W_llbit_wen,

    //输出给id阶段，作为next_pc的选择
    output [31:0] eentry_out,
    output [31:0] tlbrentry_out,
    output [31:0] era_out,

    //输出给各个需要当前特权等级的阶段
    output [1:0] plv
);
  //模块内部使用的常量使用localparam定义，不能通过模块例化修改
  //使用localparam定义csr寄存器的地址
  localparam CRMD = 14'h0;
  localparam PRMD = 14'h1;
  localparam EUEN = 14'h2;
  localparam ECFG = 14'h4;
  localparam ESTAT = 14'h5;
  localparam ERA = 14'h6;
  localparam BADV = 14'h7;
  localparam EENTRY = 14'hc;
  localparam TLBIDX = 14'h10;
  localparam TLBEHI = 14'h11;
  localparam TLBELO0 = 14'h12;
  localparam TLBELO1 = 14'h13;
  localparam ASID = 14'h18;
  localparam PGDL = 14'h19;
  localparam PGDH = 14'h1a;
  localparam PGD = 14'h1b;
  localparam CPUID = 14'h20;
  localparam SAVE0 = 14'h30;
  localparam SAVE1 = 14'h31;
  localparam SAVE2 = 14'h32;
  localparam SAVE3 = 14'h33;
  localparam TID = 14'h40;
  localparam TCFG = 14'h41;
  localparam TVAL = 14'h42;
  localparam CNTC = 14'h43;  //还不知道有什么用
  localparam TICLR = 14'h44;
  localparam LLBCTL = 14'h60;
  localparam TLBRENTRY = 14'h88;
  localparam CTAG = 14'h98;
  localparam BRK = 14'h100;
  localparam DISABLE_CACHE = 14'h101;
  localparam DMW0 = 14'h180;
  localparam DMW1 = 14'h181;


  //定义各个csr寄存器的写信号
  //cpuid、pgd、tval只有读属性
  wire crmd_wen = W_csr_en & (W_csrWAdd == CRMD);
  wire prmd_wen = W_csr_en & (W_csrWAdd == PRMD);
  wire euen_wen = W_csr_en & (W_csrWAdd == EUEN);
  wire ecfg_wen = W_csr_en & (W_csrWAdd == ECFG);
  wire estat_wen = W_csr_en & (W_csrWAdd == ESTAT);
  wire era_wen = W_csr_en & (W_csrWAdd == ERA);
  wire badv_wen = W_csr_en & (W_csrWAdd == BADV);
  wire eentry_wen = W_csr_en & (W_csrWAdd == EENTRY);
  wire tlbidx_wen = W_csr_en & (W_csrWAdd == TLBIDX);
  wire tlbehi_wen = W_csr_en & (W_csrWAdd == TLBEHI);
  wire tlbelo0_wen = W_csr_en & (W_csrWAdd == TLBELO0);
  wire tlbelo1_wen = W_csr_en & (W_csrWAdd == TLBELO1);
  wire asid_wen = W_csr_en & (W_csrWAdd == ASID);
  wire pgdl_wen = W_csr_en & (W_csrWAdd == PGDL);
  wire pgdh_wen = W_csr_en & (W_csrWAdd == PGDH);
  wire save0_wen = W_csr_en & (W_csrWAdd == SAVE0);
  wire save1_wen = W_csr_en & (W_csrWAdd == SAVE1);
  wire save2_wen = W_csr_en & (W_csrWAdd == SAVE2);
  wire save3_wen = W_csr_en & (W_csrWAdd == SAVE3);
  wire tid_wen = W_csr_en & (W_csrWAdd == TID);
  wire tcfg_wen = W_csr_en & (W_csrWAdd == TCFG);
  wire cntc_wen = W_csr_en & (W_csrWAdd == CNTC);
  wire ticlr_wen = W_csr_en & (W_csrWAdd == TICLR);
  wire llbctl_wen = W_csr_en & (W_csrWAdd == LLBCTL);
  wire tlbrentry_wen = W_csr_en & (W_csrWAdd == TLBRENTRY);
  wire ctag_wen = W_csr_en & (W_csrWAdd == CTAG);
  wire dmw0_wen = W_csr_en & (W_csrWAdd == DMW0);
  wire dmw1_wen = W_csr_en & (W_csrWAdd == DMW1);
  wire brk_wen = W_csr_en & (W_csrWAdd == BRK);
  wire disable_cache_wen = W_csr_en & (W_csrWAdd == DISABLE_CACHE);

  reg [31:0] csr_crmd;
  reg [31:0] csr_prmd;
  reg [31:0] csr_euen;
  reg [31:0] csr_ecfg;
  reg [31:0] csr_estat;
  reg [31:0] csr_era;
  reg [31:0] csr_badv;
  reg [31:0] csr_eentry;
  reg [31:0] csr_tlbidx;
  reg [31:0] csr_tlbehi;
  reg [31:0] csr_tlbelo0;
  reg [31:0] csr_tlbelo1;
  reg [31:0] csr_asid;
  reg [31:0] csr_pgdl;
  reg [31:0] csr_pgdh;
  reg [31:0] csr_cpuid;
  reg [31:0] csr_save0;
  reg [31:0] csr_save1;
  reg [31:0] csr_save2;
  reg [31:0] csr_save3;
  reg [31:0] csr_tid;
  reg [31:0] csr_tcfg;
  reg [31:0] csr_tval;
  reg [31:0] csr_cntc;
  reg [31:0] csr_ticlr;
  reg [31:0] csr_llbctl;
  reg [31:0] csr_tlbrentry;
  reg [31:0] csr_dmw0;
  reg [31:0] csr_dmw1;
  reg [31:0] csr_brk;
  reg [31:0] csr_disable_cache;
  wire [31:0] csr_pgd;

  //RDCNT系列指令
  reg [63:0] timer_64;
  always @(posedge clk) begin
    if (~resetn) begin
      timer_64 <= 64'b0;
    end else begin
      timer_64 <= timer_64 + 1'b1;
    end
  end

  //crmd
  always @(posedge clk) begin
    if (~resetn) begin
      csr_crmd[`PLV]  <= 2'b0;
      csr_crmd[`IE]   <= 1'b0;
      csr_crmd[`DA]   <= 1'b1;
      csr_crmd[`PG]   <= 1'b0;
      csr_crmd[`DATF] <= 2'b0;
      csr_crmd[`DATM] <= 2'b0;
      csr_crmd[31:9]  <= 23'b0;
    end else if (W_excp) begin
      csr_crmd[`PLV] <= 2'b0;
      csr_crmd[`IE]  <= 1'b0;
      if (W_excp_tlbrefill) begin
        csr_crmd[`DA] <= 1'b1;
        csr_crmd[`PG] <= 1'b0;
      end
    end else if (W_ertn) begin
      csr_crmd[`PLV] <= csr_prmd[`PPLV];
      csr_crmd[`IE]  <= csr_prmd[`PIE];
      if (csr_estat[`ECODE] == 6'h3f) begin  //重填异常
        csr_crmd[`DA] <= 1'b0;
        csr_crmd[`PG] <= 1'b1;
      end
    end else if (crmd_wen) begin
      csr_crmd[`PLV]  <= W_csrWData[`PLV];
      csr_crmd[`IE]   <= W_csrWData[`IE];
      csr_crmd[`DA]   <= W_csrWData[`DA];
      csr_crmd[`PG]   <= W_csrWData[`PG];
      csr_crmd[`DATF] <= W_csrWData[`DATF];
      csr_crmd[`DATM] <= W_csrWData[`DATM];
    end
  end

  //prmd
  always @(posedge clk) begin
    if (~resetn) begin
      csr_prmd[31:3] <= 29'b0;
    end else if (W_excp) begin
      csr_prmd[`PPLV] <= csr_crmd[`PLV];
      csr_prmd[`PIE]  <= csr_crmd[`IE];
    end else if (prmd_wen) begin
      csr_prmd[`PPLV] <= W_csrWData[`PPLV];
      csr_prmd[`PIE]  <= W_csrWData[`PIE];
    end
  end

  //euen 目前不实现浮点，故不会有写euen的指令
  always @(posedge clk) begin
    if (~resetn) begin
      csr_euen <= 32'b0;
    end else if (euen_wen) begin
      csr_euen[`FPE] <= W_csrWData[`FPE];
    end
  end

  //ecfg
  always @(posedge clk) begin
    if (~resetn) begin
      csr_ecfg <= 32'b0;
    end else if (ecfg_wen) begin
      csr_ecfg[`LIE_9_0]   <= W_csrWData[`LIE_9_0];
      csr_ecfg[`LIE_12_11] <= W_csrWData[`LIE_12_11];
    end
  end

  //estat
  always @(posedge clk) begin
    if (~resetn) begin
      csr_estat[`IS_1_0] <= 2'b0;
      csr_estat[`IS_9_2] <= 8'b0;
      csr_estat[10] <= 1'b0;  //手册没写，但是应该是也需要复位的
      csr_estat[12] <= 1'b0;  //手册没写，复位也需要复位核间中断，因为单核所以手册没写
      csr_estat[15:13] <= 3'b0;
      csr_estat[31] <= 1'b0;
    end else begin
      //根据外设硬中断源interrupt，赋值csr_estat[`IS_9_2]
      csr_estat[`IS_9_2] <= interrupt;
      //定时器中断——当倒计时为0且TCFG.En使能，置位定时器中断csr_estat[11];同时写ticlr.clr域为1清除定时器中断
      if (ticlr_wen & W_csrWData[`CLR]) begin
        csr_estat[11] <= 1'b0;
      end else if (csr_tcfg[`EN] & csr_tval == 32'b0) begin
        csr_estat[11] <= 1'b1;
      end
      if (W_excp) begin
        csr_estat[`ECODE] <= W_code;
        csr_estat[`ESUBCODE] <= W_subcode;
      end else if (estat_wen) begin
        csr_estat[`IS_1_0] <= W_csrWData[`IS_1_0];
      end
    end
  end

  //era
  always @(posedge clk) begin
    if (W_excp) begin
      csr_era <= W_era;
    end else if (era_wen) begin
      csr_era <= W_csrWData;
    end
  end

  //badv 先不实现完全
  always @(posedge clk) begin
    if (badv_wen) begin
      csr_badv <= W_csrWData;
    end else if (W_excp_adef) begin
      csr_badv <= W_badv_pc;
    end
  end

  //eentry
  always @(posedge clk) begin
    if (~resetn) begin
      csr_eentry[5:0] <= 6'b0;
    end else if (eentry_wen) begin
      csr_eentry[`EENTRY_VA] <= W_csrWData[`EENTRY_VA];
    end
  end

  //cpuid LA32R只实现单核，因此CoreID默认为0
  always @(posedge clk) begin
    if (~resetn) begin
      csr_cpuid[`COREID] <= 9'b0;
      csr_cpuid[31:9] <= 23'b0;
    end
  end

  //save
  always @(posedge clk) begin
    if (save0_wen) begin
      csr_save0 <= W_csrWData;
    end
    if (save1_wen) begin
      csr_save1 <= W_csrWData;
    end
    if (save2_wen) begin
      csr_save2 <= W_csrWData;
    end
    if (save3_wen) begin
      csr_save3 <= W_csrWData;
    end
  end

  //llbit
  reg llbit;
  always @(posedge clk) begin
    if (~resetn) begin
      llbit <= 1'b0;
      csr_llbctl[`KLO] <= 1'b0;
      csr_llbctl[31:3] <= 29'b0;
    end else if (W_ertn) begin
      if (csr_llbctl[`KLO]) begin
        csr_llbctl[`KLO] <= 1'b0;
      end else begin
        llbit <= 1'b0;
      end
    end else if (llbctl_wen) begin
      csr_llbctl[`KLO] <= W_csrWData[`KLO];
      if (W_csrWData[`WCLLB] == 1'b1) begin
        csr_llbctl[`WCLLB] <= W_csrWData[`WCLLB] == 1'b1;
        llbit <= 1'b0;
      end
    end else if (W_llbit_wen) begin
      llbit <= W_llbit;
    end
  end

  //tlbidx 没实现完整
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tlbidx[23:5] <= 11'b0;
      csr_tlbidx[30]   <= 1'b0;
    end else if (tlbidx_wen) begin
      csr_tlbidx[`INDEX] <= W_csrWData[`INDEX];
      csr_tlbidx[`PS] <= W_csrWData[`PS];
      csr_tlbidx[`NE] <= W_csrWData[`NE];
    end
  end

  //tlbehi 没实现完整
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tlbehi[12:0] <= 13'b0;
    end else if (tlbehi_wen) begin
      csr_tlbehi[`VPPN] <= W_csrWData[`VPPN];
    end
  end

  //tlbelo0 没实现完整
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tlbelo0[7] <= 1'b0;
    end else if (tlbelo0_wen) begin
      csr_tlbelo0[`TLB_V]   <= W_csrWData[`TLB_V];
      csr_tlbelo0[`TLB_D]   <= W_csrWData[`TLB_D];
      csr_tlbelo0[`TLB_PLV] <= W_csrWData[`TLB_PLV];
      csr_tlbelo0[`TLB_MAT] <= W_csrWData[`TLB_MAT];
      csr_tlbelo0[`TLB_G]   <= W_csrWData[`TLB_G];
      csr_tlbelo0[`TLB_PPN] <= W_csrWData[`TLB_PPN];
    end
  end

  //tlbelo1 没实现完整
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tlbelo1[7] <= 1'b0;
    end else if (tlbelo0_wen) begin
      csr_tlbelo1[`TLB_V]   <= W_csrWData[`TLB_V];
      csr_tlbelo1[`TLB_D]   <= W_csrWData[`TLB_D];
      csr_tlbelo1[`TLB_PLV] <= W_csrWData[`TLB_PLV];
      csr_tlbelo1[`TLB_MAT] <= W_csrWData[`TLB_MAT];
      csr_tlbelo1[`TLB_G]   <= W_csrWData[`TLB_G];
      csr_tlbelo1[`TLB_PPN] <= W_csrWData[`TLB_PPN];
    end
  end

  //asid 没实现完整 少了tlbrd指令写读取TLB表项的ASID域值
  always @(posedge clk) begin
    if (~resetn) begin
      csr_asid[15:10] <= 6'b0;
      csr_asid[31:24] <= 8'b0;
      //ASID域位宽为10——9:0
      csr_asid[`TLB_ASIDBITS] <= 8'd10;
    end else if (asid_wen) begin
      csr_asid[`TLB_ASID] <= W_csrWData[`TLB_ASID];
    end
  end

  //pgdl
  always @(posedge clk) begin
    if (~resetn) begin
      csr_pgdl[11:0] <= 12'b0;
    end else if (pgdl_wen) begin
      csr_pgdl[`PGDL_BASE] <= W_csrWData[`PGDL_BASE];
    end
  end

  //pgdh
  always @(posedge clk) begin
    if (~resetn) begin
      csr_pgdh[11:0] <= 12'b0;
    end else if (pgdh_wen) begin
      csr_pgdh[`PGDH_BASE] <= W_csrWData[`PGDH_BASE];
    end
  end

  //pgd
  assign csr_pgd = csr_badv[31] ? csr_pgdh : csr_pgdl;

  //tlbrentry
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tlbrentry[5:0] <= 6'b0;
    end else if (tlbrentry_wen) begin
      csr_tlbrentry[`TLBEENTRY_VA] <= W_csrWData[`TLBEENTRY_VA];
    end
  end

  //dmw0
  always @(posedge clk) begin
    if (~resetn) begin
      csr_dmw0[`DMW_PLV0] <= 1'b0;
      csr_dmw0[2:1] <= 2'b0;
      csr_dmw0[`DMW_PLV3] <= 1'b0;
      csr_dmw0[24:6] <= 19'b0;
      csr_dmw0[28] <= 1'b0;
    end else if (dmw0_wen) begin
      csr_dmw0[`DMW_PLV0] <= W_csrWData[`DMW_PLV0];
      csr_dmw0[`DMW_PLV3] <= W_csrWData[`DMW_PLV3];
      csr_dmw0[`DMW_MAT]  <= W_csrWData[`DMW_MAT];
      csr_dmw0[`DMW_PSEG] <= W_csrWData[`DMW_PSEG];
      csr_dmw0[`DMW_VSEG] <= W_csrWData[`DMW_VSEG];
    end
  end

  //dmw1
  always @(posedge clk) begin
    if (~resetn) begin
      csr_dmw1[`DMW_PLV0] <= 1'b0;
      csr_dmw1[2:1] <= 2'b0;
      csr_dmw1[`DMW_PLV3] <= 1'b0;
      csr_dmw1[24:6] <= 19'b0;
      csr_dmw1[28] <= 1'b0;
    end else if (dmw1_wen) begin
      csr_dmw1[`DMW_PLV0] <= W_csrWData[`DMW_PLV0];
      csr_dmw1[`DMW_PLV3] <= W_csrWData[`DMW_PLV3];
      csr_dmw1[`DMW_MAT]  <= W_csrWData[`DMW_MAT];
      csr_dmw1[`DMW_PSEG] <= W_csrWData[`DMW_PSEG];
      csr_dmw1[`DMW_VSEG] <= W_csrWData[`DMW_VSEG];
    end
  end

  //tid 处理器核复位时将其复位成与CSR.CPUID.COREID相同的值 单核即0
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tid <= 32'b0;
    end else if (tid_wen) begin
      csr_tid <= W_csrWData;
    end
  end

  //tcfg
  always @(posedge clk) begin
    if (~resetn) begin
      csr_tcfg[`EN] <= 1'b0;
    end else if (tcfg_wen) begin
      csr_tcfg[`EN] <= W_csrWData[`EN];
      csr_tcfg[`PERIODIC] <= W_csrWData[`PERIODIC];
      csr_tcfg[`INITVAL] <= W_csrWData[`INITVAL];
      csr_tval <= {W_csrWData[`INITVAL], 2'b0};
    end
  end

  //tval n是32
  always @(posedge clk) begin
    if (csr_tcfg[`EN] == 1'b1) begin
      if (csr_tval != 32'b0) begin
        csr_tval <= csr_tval - 32'b1;
      end else if (csr_tval == 32'b0) begin
        csr_tval <= csr_tcfg[`PERIODIC] ? {csr_tcfg[`INITVAL], 2'b0} : 32'hffffffff;
      end
    end
  end

  //ticlr
  always @(posedge clk) begin
    if (~resetn) begin
      csr_ticlr <= 32'b0;
    end
  end

  //cntc
  always @(posedge clk) begin
    if (~resetn) begin
      csr_cntc <= 32'b0;
    end else if (cntc_wen) begin
      csr_cntc <= W_csrWData;
    end
  end

  //output port
  assign d_csrRead = {32{d_csrAdd == CRMD}} & csr_crmd |
                 {32{d_csrAdd == PRMD }}  & csr_prmd    |
                 {32{d_csrAdd == ECFG  }}  & csr_ecfg    |
                 {32{d_csrAdd == ESTAT }}  & csr_estat   |
                 {32{d_csrAdd == ERA   }}  & csr_era      |
                 {32{d_csrAdd == BADV  }}  & csr_badv    |
                 {32{d_csrAdd == EENTRY}}  & csr_eentry  |
                 {32{d_csrAdd == TLBIDX}}  & csr_tlbidx  |
                 {32{d_csrAdd == TLBEHI}}  & csr_tlbehi  |
                 {32{d_csrAdd == TLBELO0}} & csr_tlbelo0 |
                 {32{d_csrAdd == TLBELO1}} & csr_tlbelo1 |
                 {32{d_csrAdd == ASID  }}  & csr_asid    |
                 {32{d_csrAdd == PGDL  }}  & csr_pgdl    |
                 {32{d_csrAdd == PGDH  }}  & csr_pgdh    |
                 {32{d_csrAdd == PGD   }}  & csr_pgd     |
                 {32{d_csrAdd == CPUID }}  & csr_cpuid   |
                 {32{d_csrAdd == SAVE0 }}  & csr_save0   |
                 {32{d_csrAdd == SAVE1 }}  & csr_save1   |
                 {32{d_csrAdd == SAVE2 }}  & csr_save2   |
                 {32{d_csrAdd == SAVE3 }}  & csr_save3   |
                 {32{d_csrAdd == TID   }}  & csr_tid     |
                 {32{d_csrAdd == TCFG  }}  & csr_tcfg    |
                 {32{d_csrAdd == CNTC  }}  & csr_cntc    |
                 {32{d_csrAdd == TICLR }}  & csr_ticlr   |
                 {32{d_csrAdd == LLBCTL}}  & {csr_llbctl[31:1], llbit} |
                 {32{d_csrAdd == TVAL  }}  & csr_tval    |
                 {32{d_csrAdd == TLBRENTRY}} & csr_tlbrentry   |
                 {32{d_csrAdd == DMW0}}    & csr_dmw0    |
                 {32{d_csrAdd == DMW1}}    & csr_dmw1    ;
  assign tid_out = csr_tid;
  assign timer_64_out = timer_64 + {{32{csr_cntc[31]}}, csr_cntc};
  assign has_int = csr_crmd[`IE] & ((csr_ecfg[`LIE] & csr_estat[`IS]) != 13'b0);
  assign eentry_out = csr_eentry;
  assign tlbrentry_out = csr_tlbrentry;
  assign era_out = csr_era;
  assign plv = {2{W_excp}} & 2'b0 |   
               {2{W_ertn}} & csr_prmd[`PPLV] |
               {2{crmd_wen}} & W_csrWData[`PLV]   |
               {2{!W_excp && !W_ertn && !crmd_wen}} & csr_crmd[`PLV];
endmodule


```

下面进行具体分析：

-   CRMD
    1.  复位时，置CRMD.DA为1，CRMD.PLV、IE、DATF、DATM、0域为0
    2.  W\_excp触发异常时，置CRMD.PLV、IE为0。如果是TLB重填异常，那么还需要置CRMD.DA为1，PG为0
    3.  W\_ertn执行ERTN指令时，置CRMD.PLV、IE为PRMD.PPLV、PLE的值。如果当前正在执行的服务程序是重填服务程序，那么还需要置CRMD.DA为0，CRMD.PG为1
    4.  如果写crmd\_wen信号有效时，则根据写csr数据W\_csrWData对应域信息更新csr\_crmd
    ```verilog
      //crmd
      always @(posedge clk) begin
        if (~resetn) begin
          csr_crmd[`PLV]  <= 2'b0;
          csr_crmd[`IE]   <= 1'b0;
          csr_crmd[`DA]   <= 1'b1;
          csr_crmd[`PG]   <= 1'b0;
          csr_crmd[`DATF] <= 2'b0;
          csr_crmd[`DATM] <= 2'b0;
          csr_crmd[31:9]  <= 23'b0;
        end else if (W_excp) begin
          csr_crmd[`PLV] <= 2'b0;
          csr_crmd[`IE]  <= 1'b0;
          if (W_excp_tlbrefill) begin
            csr_crmd[`DA] <= 1'b1;
            csr_crmd[`PG] <= 1'b0;
          end
        end else if (W_ertn) begin
          csr_crmd[`PLV] <= csr_prmd[`PPLV];
          csr_crmd[`IE]  <= csr_prmd[`PIE];
          if (csr_estat[`ECODE] == 6'h3f) begin  //重填异常
            csr_crmd[`DA] <= 1'b0;
            csr_crmd[`PG] <= 1'b1;
          end
        end else if (crmd_wen) begin
          csr_crmd[`PLV]  <= W_csrWData[`PLV];
          csr_crmd[`IE]   <= W_csrWData[`IE];
          csr_crmd[`DA]   <= W_csrWData[`DA];
          csr_crmd[`PG]   <= W_csrWData[`PG];
          csr_crmd[`DATF] <= W_csrWData[`DATF];
          csr_crmd[`DATM] <= W_csrWData[`DATM];
        end
      end
    ```
-   PRMD
    1.  复位时将PRMD的0域置0
    2.  当W\_excp有效触发异常时，使用CRMD.PLV和CRMD.IE更新PRMD.PPLV和PRMD.PIE
    3.  当写PRMD信号prmd\_wen有效时，使用W\_csrWData对应域值更新PRMD对应域
    ```verilog
      //prmd
      always @(posedge clk) begin
        if (~resetn) begin
          csr_prmd[31:3] <= 29'b0;
        end else if (W_excp) begin
          csr_prmd[`PPLV] <= csr_crmd[`PLV];
          csr_prmd[`PIE]  <= csr_crmd[`IE];
        end else if (prmd_wen) begin
          csr_prmd[`PPLV] <= W_csrWData[`PPLV];
          csr_prmd[`PIE]  <= W_csrWData[`PIE];
        end
      end
    ```
-   euen
    1.  复位时，将csr\_euen全置0
    2.  当写EUEN信号euen\_wen有效时，使用W\_csrWData对应域值更新csr\_euen
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_euen <= 32'b0;
        end else if (euen_wen) begin
          csr_euen[`FPE] <= W_csrWData[`FPE];
        end
      end
    ```
-   ecfg
    1.  复位时，将csr\_ecfg全置0
    2.  当写ECFG信号ecfg\_wen有效时，使用W\_csrWData对应域值更新csr\_ecfg
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_ecfg <= 32'b0;
        end else if (ecfg_wen) begin
          csr_ecfg[`LIE_9_0]   <= W_csrWData[`LIE_9_0];
          csr_ecfg[`LIE_12_11] <= W_csrWData[`LIE_12_11];
        end
      end
    ```
-   estat
    1.  复位时将ESTAT域的IS\_1\_0、0域置位0

        除此之外，手册上并没有指出，但是结合实际开发的单核CPU，将IS\_9\_2、核间中断、定时器中断置位0
    2.  复位信号无效时，将ESTAT域的IS\_9\_2置位外部输入interrupt的值
    3.  复位信号无效时，如果有写TICLR寄存器且对应W\_csrWData的CLR域值为1，即表示需要将定时器中断复位——csr\_estat\[11]置0；如果定时器计时使能且定时器计数值为0，即表示定时器中断有效——csr\_estat\[11]置1
    4.  当触发异常时，会根据Code、subcode更新csr\_estat的ECODE、ESUBCODE域
    5.  当写ESTAT信号estat\_wen有效时，根据W\_csrWData的IS\_1\_0域更新ESTAT对应值
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_estat[`IS_1_0] <= 2'b0;
          csr_estat[`IS_9_2] <= 8'b0;
          csr_estat[10] <= 1'b0;  //手册没写，但是应该是也需要复位的
          csr_estat[12] <= 1'b0;  //手册没写，复位也需要复位核间中断，因为单核所以手册没写
          csr_estat[15:13] <= 3'b0;
          csr_estat[31] <= 1'b0;
        end else begin
          //根据外设硬中断源interrupt，赋值csr_estat[`IS_9_2]
          csr_estat[`IS_9_2] <= interrupt;
          //定时器中断——当倒计时为0且TCFG.En使能，置位定时器中断csr_estat[11];同时写ticlr.clr域为1清除定时器中断
          if (ticlr_wen & W_csrWData[`CLR]) begin
            csr_estat[11] <= 1'b0;
          end else if (csr_tcfg[`EN] & csr_tval == 32'b0) begin
            csr_estat[11] <= 1'b1;
          end
          if (W_excp) begin
            csr_estat[`ECODE] <= W_code;
            csr_estat[`ESUBCODE] <= W_subcode;
          end else if (estat_wen) begin
            csr_estat[`IS_1_0] <= W_csrWData[`IS_1_0];
          end
        end
      end
    ```
-   era
    1.  当触发异常时，根据写回阶段输入的W\_era值更新csr\_era
    2.  当写era信号era\_wen有效时，更新W\_csrWData至csr\_era
    ```verilog
      always @(posedge clk) begin
        if (W_excp) begin
          csr_era <= W_era;
        end else if (era_wen) begin
          csr_era <= W_csrWData;
        end
      end
    ```
-   badv——未实现完全
    1.  当写badv信号badv\_wen有效时，更新W\_csrWData至csr\_badv
    2.  当发生ADEF和ALE异常时，需要写badv，前者写异常指令地址后者写访存地址
    ```verilog
     always @(posedge clk) begin
        if (badv_wen) begin
          csr_badv <= W_csrWData;
        end else if (W_excp_adef) begin
          csr_badv <= W_badv_pc;
        end
      end

    ```
-   eentry
    1.  当复位信号有效时，置csr\_eentry的0域为0
    2.  当写eentry信号eentry\_wen有效时，更新W\_csrWData对应域值至csr\_eentry
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_eentry[5:0] <= 6'b0;
        end else if (eentry_wen) begin
          csr_eentry[`EENTRY_VA] <= W_csrWData[`EENTRY_VA];
        end
      end
    ```
-   cpuid
    1.  因为只开发单核CPU，所以当复位信号有效时，会置csr\_cpuid的0域和COREID域均为0
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_cpuid[`COREID] <= 9'b0;
          csr_cpuid[31:9] <= 23'b0;
        end
      end
    ```
-   save
    1.  当save0\~3写信号有效时，会置W\_csrWData至csr\_save0\~3中
    ```verilog
      always @(posedge clk) begin
        if (save0_wen) begin
          csr_save0 <= W_csrWData;
        end
        if (save1_wen) begin
          csr_save1 <= W_csrWData;
        end
        if (save2_wen) begin
          csr_save2 <= W_csrWData;
        end
        if (save3_wen) begin
          csr_save3 <= W_csrWData;
        end
      end
    ```
-   llbit
    1.  当复位信号有效时，置llbit、LLBCTL的KLO域和0域为0
    2.  当执行ERTN指令时，如果LLBIT的KLO域为1那么不清零llbit，而是复位KLO域值；否则清零llbit
    3.  当LLBCTL的写信号llbctl\_wen有效时，会根据W\_csrWData对应KLO域的值更新LLBCTL。并且如果W\_csrWData对应WCLLB域值为1时(向LLBCTL.WCLLB写1)，那么会更新LLBCTL.WCLLB，且复位llbit
    4.  当llbit的写信号W\_llbit\_wen有效时，会根据W\_llbit更新llbit
    ```verilog
      reg llbit;
      always @(posedge clk) begin
        if (~resetn) begin
          llbit <= 1'b0;
          csr_llbctl[`KLO] <= 1'b0;
          csr_llbctl[31:3] <= 29'b0;
        end else if (W_ertn) begin
          if (csr_llbctl[`KLO]) begin
            csr_llbctl[`KLO] <= 1'b0;
          end else begin
            llbit <= 1'b0;
          end
        end else if (llbctl_wen) begin
          csr_llbctl[`KLO] <= W_csrWData[`KLO];
          if (W_csrWData[`WCLLB] == 1'b1) begin
            csr_llbctl[`WCLLB] <= W_csrWData[`WCLLB] == 1'b1;
            llbit <= 1'b0;
          end
        end else if (W_llbit_wen) begin
          llbit <= W_llbit;
        end
      end
    ```
-   tibidx——未实现完整
    1.  当复位信号有效时，置TLBIDX的0域为0
    2.  当写信号tlbidx\_wen有效时，根据W\_csrWData对应域的值更新csr\_tlbidx
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tlbidx[23:5] <= 11'b0;
          csr_tlbidx[30]   <= 1'b0;
        end else if (tlbidx_wen) begin
          csr_tlbidx[`INDEX] <= W_csrWData[`INDEX];
          csr_tlbidx[`PS] <= W_csrWData[`PS];
          csr_tlbidx[`NE] <= W_csrWData[`NE];
        end
      end
    ```
-   tibhi——未实现完整
    1.  当复位信号有效时，置TLBHI的0域为0
    2.  当写信号tlbhi\_wen有效时，根据W\_csrWData对应域的值更新csr\_tlbhi
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tlbehi[12:0] <= 13'b0;
        end else if (tlbehi_wen) begin
          csr_tlbehi[`VPPN] <= W_csrWData[`VPPN];
        end
      end
    ```
-   tibelo0——未实现完整
    1.  当复位信号有效时，置TLBELO0的0域为0
    2.  当写信号tlbelo0\_wen有效时，根据W\_csrWData对应域的值更新csr\_tlbelo0
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tlbelo0[7] <= 1'b0;
        end else if (tlbelo0_wen) begin
          csr_tlbelo0[`TLB_V]   <= W_csrWData[`TLB_V];
          csr_tlbelo0[`TLB_D]   <= W_csrWData[`TLB_D];
          csr_tlbelo0[`TLB_PLV] <= W_csrWData[`TLB_PLV];
          csr_tlbelo0[`TLB_MAT] <= W_csrWData[`TLB_MAT];
          csr_tlbelo0[`TLB_G]   <= W_csrWData[`TLB_G];
          csr_tlbelo0[`TLB_PPN] <= W_csrWData[`TLB_PPN];
        end
      end
    ```
-   tibelo1——未实现完整
    1.  当复位信号有效时，置TLBELO1的0域为0
    2.  当写信号tlbelo1\_wen有效时，根据W\_csrWData对应域的值更新csr\_tlbelo1
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tlbelo1[7] <= 1'b0;
        end else if (tlbelo0_wen) begin
          csr_tlbelo1[`TLB_V]   <= W_csrWData[`TLB_V];
          csr_tlbelo1[`TLB_D]   <= W_csrWData[`TLB_D];
          csr_tlbelo1[`TLB_PLV] <= W_csrWData[`TLB_PLV];
          csr_tlbelo1[`TLB_MAT] <= W_csrWData[`TLB_MAT];
          csr_tlbelo1[`TLB_G]   <= W_csrWData[`TLB_G];
          csr_tlbelo1[`TLB_PPN] <= W_csrWData[`TLB_PPN];
        end
      end
    ```
-   asid——未实现完整
    1.  当复位信号有效时，置ASID的0域为0；且ASID域位宽固定为0\~9因此ASID.ASIDBITS值为10
    2.  当写信号asid\_wen有效时，根据W\_csrWData对应域的值更新csr\_asid
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_asid[15:10] <= 6'b0;
          csr_asid[31:24] <= 8'b0;
          //ASID域位宽为10——9:0
          csr_asid[`TLB_ASIDBITS] <= 8'd10;
        end else if (asid_wen) begin
          csr_asid[`TLB_ASID] <= W_csrWData[`TLB_ASID];
        end
      end
    ```
-   pgdl
    1.  当复位信号有效时，置PGDL的0域为0
    2.  当写信号pgdl\_wen有效时，根据W\_csrWData对应域的值更新csr\_pgdl
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_pgdl[11:0] <= 12'b0;
        end else if (pgdl_wen) begin
          csr_pgdl[`PGDL_BASE] <= W_csrWData[`PGDL_BASE];
        end
      end
    ```
-   pgdh
    1.  当复位信号有效时，置PGDH的0域为0
    2.  当写信号pgdh\_wen有效时，根据W\_csrWData对应域的值更新csr\_pgdh
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_pgdh[11:0] <= 12'b0;
        end else if (pgdh_wen) begin
          csr_pgdh[`PGDH_BASE] <= W_csrWData[`PGDH_BASE];
        end
      end
    ```
-   pgd

    如果BADV\[31]是0，那么PGD=PGDL，否则PGD=PGDH
    ```verilog
      assign csr_pgd = csr_badv[31] ? csr_pgdh : csr_pgdl;
    ```
-   dmw0
    1.  当复位信号有效时，置DMW0的0域为0
    2.  当写信号dmw0\_wen有效时，根据W\_csrWData对应域的值更新csr\_dmw0
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_dmw0[`DMW_PLV0] <= 1'b0;
          csr_dmw0[2:1] <= 2'b0;
          csr_dmw0[`DMW_PLV3] <= 1'b0;
          csr_dmw0[24:6] <= 19'b0;
          csr_dmw0[28] <= 1'b0;
        end else if (dmw0_wen) begin
          csr_dmw0[`DMW_PLV0] <= W_csrWData[`DMW_PLV0];
          csr_dmw0[`DMW_PLV3] <= W_csrWData[`DMW_PLV3];
          csr_dmw0[`DMW_MAT]  <= W_csrWData[`DMW_MAT];
          csr_dmw0[`DMW_PSEG] <= W_csrWData[`DMW_PSEG];
          csr_dmw0[`DMW_VSEG] <= W_csrWData[`DMW_VSEG];
        end
      end
    ```
-   dmw1
    1.  当复位信号有效时，置DMW1的0域为0
    2.  当写信号dmw1\_wen有效时，根据W\_csrWData对应域的值更新csr\_dmw1
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_dmw1[`DMW_PLV0] <= 1'b0;
          csr_dmw1[2:1] <= 2'b0;
          csr_dmw1[`DMW_PLV3] <= 1'b0;
          csr_dmw1[24:6] <= 19'b0;
          csr_dmw1[28] <= 1'b0;
        end else if (dmw1_wen) begin
          csr_dmw1[`DMW_PLV0] <= W_csrWData[`DMW_PLV0];
          csr_dmw1[`DMW_PLV3] <= W_csrWData[`DMW_PLV3];
          csr_dmw1[`DMW_MAT]  <= W_csrWData[`DMW_MAT];
          csr_dmw1[`DMW_PSEG] <= W_csrWData[`DMW_PSEG];
          csr_dmw1[`DMW_VSEG] <= W_csrWData[`DMW_VSEG];
        end
      end
    ```
-   tlbrentry
    1.  当复位信号有效时，置TLBRENTRY的0域为0
    2.  当写信号tlbrentry\_wen有效时，根据W\_csrWData对应域的值更新csr\_tlbrentry
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tlbrentry[5:0] <= 6'b0;
        end else if (tlbrentry_wen) begin
          csr_tlbrentry[`TLBEENTRY_VA] <= W_csrWData[`TLBEENTRY_VA];
        end
      end
    ```
-   tid
    1.  当复位信号有效时，将csr\_tid置为CPUID的值——单核即为0
    2.  当写信号tid\_wen有效时，根据W\_csrWData更新csr\_tid
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tid <= 32'b0;
        end else if (tid_wen) begin
          csr_tid <= W_csrWData;
        end
      end
    ```
-   tcfg
    1.  复位时，将TCFG.EN置为0
    2.  当写信号tcfg\_wen有效时，根据W\_csrWData对应域值更新csr\_tcfg

        注意这里也因为TCFG.INITVAL的更新从而更新了TVAL
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_tcfg[`EN] <= 1'b0;
        end else if (tcfg_wen) begin
          csr_tcfg[`EN] <= W_csrWData[`EN];
          csr_tcfg[`PERIODIC] <= W_csrWData[`PERIODIC];
          csr_tcfg[`INITVAL] <= W_csrWData[`INITVAL];
          csr_tval <= {W_csrWData[`INITVAL], 2'b0};
        end
      end
    ```
-   tval

    因为tval的初始值更新放在了tcfg中，所以这里只写了tval的计时语句块

    当TCFG.EN高电平时，表示允许定时器计时，从而：

    如果定时器值不为0，那么自身递减1

    如果定时器值为0，那么根据TCFG.PERIODIC选择是否再开始计时[^注释1]
    ```verilog
      always @(posedge clk) begin
        if (csr_tcfg[`EN] == 1'b1) begin
          if (csr_tval != 32'b0) begin
            csr_tval <= csr_tval - 32'b1;
          end else if (csr_tval == 32'b0) begin
            csr_tval <= csr_tcfg[`PERIODIC] ? {csr_tcfg[`INITVAL], 2'b0} : 32'hffffffff;
          end
        end
      end
    ```
-   ticlr

    因为TICLR的CLR位读永远是1，所以复位时全置0

    而写CLR的信号只是用于清定时器中断，在ESTAT中已实现
    ```verilog
      always @(posedge clk) begin
        if (~resetn) begin
          csr_ticlr <= 32'b0;
        end
      end
    ```
-   output port——未实现完整
    ```verilog
      //output port
      assign d_csrRead = {32{d_csrAdd == CRMD}} & csr_crmd |
                     {32{d_csrAdd == PRMD }}  & csr_prmd    |
                     {32{d_csrAdd == ECFG  }}  & csr_ecfg    |
                     {32{d_csrAdd == ESTAT }}  & csr_estat   |
                     {32{d_csrAdd == ERA   }}  & csr_era      |
                     {32{d_csrAdd == BADV  }}  & csr_badv    |
                     {32{d_csrAdd == EENTRY}}  & csr_eentry  |
                     {32{d_csrAdd == TLBIDX}}  & csr_tlbidx  |
                     {32{d_csrAdd == TLBEHI}}  & csr_tlbehi  |
                     {32{d_csrAdd == TLBELO0}} & csr_tlbelo0 |
                     {32{d_csrAdd == TLBELO1}} & csr_tlbelo1 |
                     {32{d_csrAdd == ASID  }}  & csr_asid    |
                     {32{d_csrAdd == PGDL  }}  & csr_pgdl    |
                     {32{d_csrAdd == PGDH  }}  & csr_pgdh    |
                     {32{d_csrAdd == PGD   }}  & csr_pgd     |
                     {32{d_csrAdd == CPUID }}  & csr_cpuid   |
                     {32{d_csrAdd == SAVE0 }}  & csr_save0   |
                     {32{d_csrAdd == SAVE1 }}  & csr_save1   |
                     {32{d_csrAdd == SAVE2 }}  & csr_save2   |
                     {32{d_csrAdd == SAVE3 }}  & csr_save3   |
                     {32{d_csrAdd == TID   }}  & csr_tid     |
                     {32{d_csrAdd == TCFG  }}  & csr_tcfg    |
                     {32{d_csrAdd == CNTC  }}  & csr_cntc    |
                     {32{d_csrAdd == TICLR }}  & csr_ticlr   |
                     {32{d_csrAdd == LLBCTL}}  & {csr_llbctl[31:1], llbit} |
                     {32{d_csrAdd == TVAL  }}  & csr_tval    |
                     {32{d_csrAdd == TLBRENTRY}} & csr_tlbrentry   |
                     {32{d_csrAdd == DMW0}}    & csr_dmw0    |
                     {32{d_csrAdd == DMW1}}    & csr_dmw1    ;
      assign tid_out = csr_tid;
      assign timer_64_out = timer_64;
      assign has_int = csr_crmd[`IE] & ((csr_ecfg[`LIE] & csr_estat[`IS]) != 13'b0);
      assign eentry_out = csr_eentry;
      assign tlbrentry_out = csr_tlbrentry;
      assign era_out = csr_era;
      assign plv = {2{W_excp}} & 2'b0 |   
                   {2{W_ertn}} & csr_prmd[`PPLV] |
                   {2{crmd_wen}} & W_csrWData[`PLV]   |
                   {2{!W_excp && !W_ertn && !crmd_wen}} & csr_crmd[`PLV];
    ```

## 2 流水阶段增量开发——EXP12

### 2.1 IF阶段代码修改

```verilog
`timescale 1ns / 1ps

module IF_stage (
    input clk,
    input resetn,
    input F_stall,
    input F_excp_stall,
    input F_div_mod_stall,
    input [31:0] d_pc_next,

    output [31:0] F_pcAddr,
    output [31:0] F_pcPlus4
);
  parameter WIDTH_PC = 32;
  pc_flopenr u_pc_flopenr (
      .clk   (clk),
      .rst   (~resetn),
      .enable(~F_stall & ~F_div_mod_stall & ~F_excp_stall),
      .d     (d_pc_next),
      .q     (F_pcAddr)
  );

  assign F_pcPlus4 = F_pcAddr + 32'h4;
endmodule

```

主要是在原来IF的基础上增加了触发异常/中断以及ERTN时的IF阻塞

### 2.2 ID阶段代码修改

```verilog
`timescale 1ns / 1ps


module ID_stage (
    input clk,
    input resetn,
    input [7:0] interrupt,

    input D_stall,
    input D_div_mod_stall,
    input D_excp_stall,
    input [31:0] F_inst,
    input [31:0] F_pcAddr,
    input [31:0] F_pcPlus4,

    input [1:0] D_forwardA,
    input [1:0] D_forwardB,
    input [1:0] D_forwardCSR,

    input E_take_bOrj,

    input [31:0] e_aluResult,
    input [31:0] E_csrWData,
    input [31:0] M_aluResult,
    input [31:0] M_csrWData,
    input [31:0] m_memReadData,

    input W_regW,
    input [4:0] W_regWAdd,
    input [31:0] w_regWData,
    input W_csr_en,
    input [13:0] W_csrWAdd,
    input [31:0] W_csrWData,
    input W_excp,
    input W_excp_tlbrefill,
    input W_ertn,
    input [31:0] W_era,
    input [8:0] W_subcode,
    input [5:0] W_code,
    input W_llbit,
    input W_llbit_wen,


    output [31:0] D_pcAddr,
    output [31:0] d_pc_next,
    output [31:0] d_aluSrc1,
    output [31:0] d_aluSrc2,
    output [4:0] d_regWAdd,
    output d_regW,
    output d_res_from_mem,
    output [11:0] d_aluOP,
    output d_memReadE,
    d_memWriteE,
    output [3:0] d_memReadW,
    d_memWriteW,
    output [31:0] d_regDataB,
    output d_mul_alu,
    output d_mul_div_sign,
    output d_mul_high,
    output d_is_mod,
    output d_div_mod_alu,
    output [31:0] d_csr_data,
    output d_csr_inst,
    output [4:0] d_regAddA,
    output [4:0] d_regAddB,
    output d_branch,
    output d_loadu,
    output d_take_bOrj,
    output [13:0] d_csrAdd,
    output [31:0] d_csrWData,
    output d_csr_en,
    output d_ertn,
    output d_excp,
    output [7:0] d_excp_num,
    output d_excp_or_ertn
);
  wire [31:0] inst;
  wire [31:0] D_pcPlus4;

  parameter WIDTH_ID_INIT = 96;
  flopenr #(
      .WIDTH(WIDTH_ID_INIT)
  ) id_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~D_stall & ~D_div_mod_stall & ~D_excp_stall),  //阻塞——complete_delay + 前递 + 分支
      .d({F_inst, F_pcAddr, F_pcPlus4}),
      .q({inst, D_pcAddr, D_pcPlus4})
  );

  reg wait_expcF;
  always @(posedge clk) begin
    if (~resetn) begin
      wait_expcF <= 1'b0;
    end else begin
      wait_expcF <= W_excp;
    end
  end
  wire [ 5:0] d_op_31_26;  //inst[31:26]
  wire [ 3:0] d_op_25_22;  //inst[25:22]
  wire [ 1:0] d_op_21_20;  //inst[21:20]
  wire [ 4:0] d_op_19_15;  //inst[19:15]
  wire [ 4:0] d_rd;  //inst的rd编码
  wire [ 4:0] d_rj;  //inst的rj编码
  wire [ 4:0] d_rk;  //inst的rk编码
  wire [11:0] d_i12;  //inst中的12位立即数
  wire [13:0] d_i14;
  wire [19:0] d_i20;  //inst中的20位立即数
  wire [15:0] d_i16;  //inst中的16位立即数
  wire [25:0] d_i26;  //inst中的26位立即数

  wire [63:0] d_op_31_26_d;  //6-64译码
  wire [15:0] d_op_25_22_d;  //4-16译码
  wire [ 3:0] d_op_21_20_d;  //2-4译码
  wire [31:0] d_op_19_15_d;  //5-32译码

  assign d_op_31_26 = inst[31:26];
  assign d_op_25_22 = inst[25:22];
  assign d_op_21_20 = inst[21:20];
  assign d_op_19_15 = inst[19:15];

  assign d_rd       = inst[4:0];
  assign d_rj       = inst[9:5];
  assign d_rk       = inst[14:10];

  assign d_i12      = inst[21:10];
  assign d_i14      = inst[23:10];
  assign d_i20      = inst[24:5];
  assign d_i16      = inst[25:10];
  assign d_i26      = {inst[9:0], inst[25:10]};

  decoder_6_64 u_dec0 (
      .in (d_op_31_26),
      .out(d_op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in (d_op_25_22),
      .out(d_op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in (d_op_21_20),
      .out(d_op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in (d_op_19_15),
      .out(d_op_19_15_d)
  );

  wire inst_rdcntid = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_rdcntvl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_rdcntvh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h19 & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_add = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h00] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sub = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h02] & ~E_take_bOrj & ~wait_expcF;
  wire inst_slt = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h04] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sltu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h05] & ~E_take_bOrj & ~wait_expcF;
  wire inst_nor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h08] & ~E_take_bOrj & ~wait_expcF;
  wire inst_and = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h09] & ~E_take_bOrj & ~wait_expcF;
  wire inst_or = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0a] & ~E_take_bOrj & ~wait_expcF;
  wire inst_xor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0b] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sll = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0e] & ~E_take_bOrj & ~wait_expcF;
  wire inst_srl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0f] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sra = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h10] & ~E_take_bOrj & ~wait_expcF;
  wire inst_mul = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h18] & ~E_take_bOrj & ~wait_expcF;
  wire inst_mulh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h19] & ~E_take_bOrj & ~wait_expcF;
  wire inst_mulhu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h1a] & ~E_take_bOrj & ~wait_expcF;
  wire inst_div = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h00] & ~E_take_bOrj & ~wait_expcF;
  wire inst_mod = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h01] & ~E_take_bOrj & ~wait_expcF;
  wire inst_divu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h02] & ~E_take_bOrj & ~wait_expcF;
  wire inst_modu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h03] & ~E_take_bOrj & ~wait_expcF;
  wire inst_break = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h14] & ~E_take_bOrj & ~wait_expcF;
  wire inst_syscall = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h16] & ~E_take_bOrj & ~wait_expcF;
  wire inst_slli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h01] & ~E_take_bOrj & ~wait_expcF;
  wire inst_srli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h09] & ~E_take_bOrj & ~wait_expcF;
  wire inst_srai = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj & ~wait_expcF;
  wire inst_slti = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sltui = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h9] & ~E_take_bOrj & ~wait_expcF;
  wire inst_addi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'ha] & ~E_take_bOrj & ~wait_expcF;
  wire inst_andi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hd] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'he] & ~E_take_bOrj & ~wait_expcF;
  wire inst_xori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hf] & ~E_take_bOrj & ~wait_expcF;
  wire inst_csrrd = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_csrwr = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h01 & ~E_take_bOrj & ~wait_expcF;
  wire inst_csrxchg = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & ~inst_csrrd & ~inst_csrwr  & ~E_take_bOrj & ~wait_expcF;
  wire inst_cacop = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expcF;
  wire inst_tlbsrch = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0a & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_tlbrd = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0b & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_tlbwr = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0c & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_tlbfill = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0d & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_ertn = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0e & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expcF;
  wire inst_idle = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj & ~wait_expcF;
  wire inst_invtlb = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h13] & ~E_take_bOrj & ~wait_expcF;
  wire inst_lu12i = d_op_31_26_d[6'h05] & ~inst[25] & ~E_take_bOrj & ~wait_expcF;
  wire inst_pcaddu12i = d_op_31_26_d[6'h07] & ~inst[25] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ll = d_op_31_26_d[6'h08] & ~inst[25] & ~inst[24] & ~E_take_bOrj & ~wait_expcF;
  wire inst_sc = d_op_31_26_d[6'h08] & ~inst[25] & inst[24] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ld_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h0] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ld_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h1] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ld_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h2] & ~E_take_bOrj & ~wait_expcF;
  wire inst_st_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h4] & ~E_take_bOrj & ~wait_expcF;
  wire inst_st_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h5] & ~E_take_bOrj & ~wait_expcF;
  wire inst_st_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h6] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ld_bu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ld_hu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h9] & ~E_take_bOrj & ~wait_expcF;
  wire inst_preld = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'hb] & ~E_take_bOrj & ~wait_expcF;
  wire inst_dbar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h04] & ~E_take_bOrj & ~wait_expcF;
  wire inst_ibar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h05] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bceqz = d_op_31_26_d[6'h12] & ~inst[9] & ~inst[8] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bcnez = d_op_31_26_d[6'h12] & ~inst[9] & inst[8] & ~E_take_bOrj & ~wait_expcF;
  wire inst_jirl = d_op_31_26_d[6'h13] & ~E_take_bOrj & ~wait_expcF;
  wire inst_b = d_op_31_26_d[6'h14] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bl = d_op_31_26_d[6'h15] & ~E_take_bOrj & ~wait_expcF;
  wire inst_beq = d_op_31_26_d[6'h16] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bne = d_op_31_26_d[6'h17] & ~E_take_bOrj & ~wait_expcF;
  wire inst_blt = d_op_31_26_d[6'h18] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bge = d_op_31_26_d[6'h19] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bltu = d_op_31_26_d[6'h1a] & ~E_take_bOrj & ~wait_expcF;
  wire inst_bgeu = d_op_31_26_d[6'h1b] & ~E_take_bOrj & ~wait_expcF;

  wire [1:0] d_selPC;
  wire d_src1_is_pc;
  wire d_src2_is_4;
  wire d_src2_is_imm;
  wire d_src_reg_is_rd;
  wire d_dst_is_r1;
  wire d_need_si12;
  wire d_need_si14;
  wire d_need_ui12;
  wire d_need_si16;
  wire d_need_si20;
  wire d_need_si26;
  wire d_rjEqrd;
  wire d_rjLTrd;
  wire d_rjLTrdU;

  assign d_regW = ~inst_st_b    &
                    ~inst_st_h    &
                    ~inst_st_w    &
                    ~inst_beq     &
                    ~inst_bne     &
                    ~inst_blt     &
                    ~inst_bge     &
                    ~inst_bltu    &
                    ~inst_bgeu    &
                    ~inst_b       &
                    ~inst_syscall &
                    ~inst_tlbsrch &
                    ~inst_tlbrd   &
                    ~inst_tlbwr   &
                    ~inst_tlbfill &
                    ~inst_invtlb  &
                    ~inst_cacop   &
                    ~inst_preld   &
                    ~inst_dbar    &
                    ~inst_ibar     & ~E_take_bOrj & ~wait_expcF;
  assign d_loadu = inst_ld_bu | inst_ld_hu;
  assign d_selPC[0] = (inst_bl 
                    | inst_b 
                    | (inst_beq & d_rjEqrd) 
                    | (inst_bne & ~d_rjEqrd)
                    | (inst_blt & d_rjLTrd)
                    | (inst_bge & ~d_rjLTrd)
                    | (inst_bltu & d_rjLTrdU)
                    | (inst_bgeu & ~d_rjLTrdU));
  assign d_selPC[1] = inst_jirl;
  assign d_aluOP[0] =  inst_add    |
                    inst_addi   |
                    inst_ld_b     |
                    inst_ld_h     |
                    inst_ld_w     |
                    inst_st_b     |
                    inst_st_h     |
                    inst_st_w     |
                    inst_ld_bu    |
                    inst_ld_hu    |
                    inst_ll     |
                    inst_sc     |
                    inst_jirl     |
                    inst_bl       |
                    inst_pcaddu12i|
                    inst_cacop    |
                    inst_preld;
  assign d_aluOP[1] = inst_sub;
  assign d_aluOP[2] = inst_slt | inst_slti;
  assign d_aluOP[3] = inst_sltu | inst_sltui;
  assign d_aluOP[4] = inst_and | inst_andi;
  assign d_aluOP[5] = inst_nor;
  assign d_aluOP[6] = inst_or | inst_ori;
  assign d_aluOP[7] = inst_xor | inst_xori;
  assign d_aluOP[8] = inst_sll | inst_slli;
  assign d_aluOP[9] = inst_srl | inst_srli;
  assign d_aluOP[10] = inst_sra | inst_srai;
  assign d_aluOP[11] = inst_lu12i;
  assign d_memReadE = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[0] = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[1] = inst_ld_h | inst_ld_w | inst_ld_hu;
  assign d_memReadW[2] = inst_ld_w;
  assign d_memReadW[3] = inst_ld_w;
  assign d_memWriteE = inst_st_b | inst_st_h | inst_st_w;
  assign d_memWriteW[0] = inst_st_b | inst_st_h | inst_st_w;
  assign d_memWriteW[1] = inst_st_h;
  assign d_memWriteW[2] = inst_st_w;
  assign d_memWriteW[3] = inst_st_w;
  assign d_src1_is_pc = inst_jirl | inst_bl | inst_pcaddu12i;
  assign d_src2_is_4 = inst_jirl | inst_bl;
  assign d_src2_is_imm =  inst_slli    |
                        inst_srli      |
                        inst_srai      |
                        inst_addi      |
                        inst_slti      |
                        inst_sltui     |
                        inst_andi      |
                        inst_ori       |
                        inst_xori      |
                        inst_pcaddu12i |
                        inst_ld_b      |
                        inst_ld_h      |
                        inst_ld_w      |
                        inst_ld_bu     |
                        inst_ld_hu     |
                        inst_st_b      |
                        inst_st_h      |
                        inst_st_w      |
                        inst_ll        |
                        inst_sc        |
                        inst_lu12i     |
                        inst_cacop     |
                        inst_bl        |
                        inst_jirl      |
                        inst_preld     ;
  assign d_res_from_mem = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_src_reg_is_rd =  inst_beq    |
                        inst_bne    |
                        inst_blt    |
                        inst_bltu   |
                        inst_bge    |
                        inst_bgeu   |
                        inst_st_b   |
                        inst_st_h   |
                        inst_st_w   |
                        inst_sc     |
                        inst_csrwr  |
                        inst_csrxchg;
  assign d_dst_is_r1 = inst_bl;
  assign d_need_si12 = inst_addi |
                    inst_ld_b   |
                    inst_ld_h   |
                    inst_ld_w   |
                    inst_st_b   |
                    inst_st_h   |
                    inst_st_w   |
                    inst_ld_bu  |
                    inst_ld_hu  |
                    inst_slti   |
                    inst_sltui  |
                    inst_cacop  |
                    inst_preld  ;
  assign d_need_si14 = inst_ll | inst_sc;
  assign d_need_ui12 = inst_andi | inst_ori | inst_xori;
  assign d_need_si16 = inst_jirl |
                    inst_beq  |
                    inst_bne  |
                    inst_blt  |
                    inst_bge  |
                    inst_bltu |
                    inst_bgeu;
  assign d_need_si20 = inst_lu12i | inst_pcaddu12i;
  assign d_need_si26 = inst_b | inst_bl;
  assign d_mul_div_sign = inst_mul | inst_mulh | inst_div | inst_mod;
  assign d_div_mod_alu = inst_mod | inst_div | inst_modu | inst_divu;
  assign d_mul_alu = inst_mul | inst_mulh | inst_mulhu;
  assign d_is_mod = inst_mod | inst_modu;
  assign d_mul_high = inst_mulh | inst_mulhu;
  assign d_branch = inst_beq | inst_bne | inst_bge | inst_blt | inst_bgeu | inst_bltu;
  assign d_take_bOrj = ~(d_selPC == 2'b00);  //使得ertn在第二个周期即计算完成


  wire [31:0] d_regDataA;
  wire [31:0] d__regDataA;
  wire [31:0] d__regDataB;
  wire [31:0] d_imm;
  wire [31:0] d_br_offs;
  wire [31:0] d_jirl_offs;
  wire [31:0] d_pcBranch;
  wire [31:0] d_pcJ;
  assign d_regAddA = d_rj;
  assign d_regAddB = d_src_reg_is_rd ? d_rd : d_rk;
  assign d_regWAdd = d_dst_is_r1 ? 5'h1 : d_rd;
  assign d_imm = d_src2_is_4 ? 32'h4 : 
                (d_need_si20 ? {d_i20[19:0],12'b0} : 
                (d_need_ui12 ? {20'b0,d_i12[11:0]} : 
                (d_need_si14 ? {{18{d_i14[13]}},d_i14} : 
                {{20{d_i12[11]}},d_i12[11:0]})));
  assign d_pcJ = d_regDataA + d_jirl_offs;
  assign d_pcBranch = D_pcAddr + d_br_offs;
  assign d_br_offs = d_need_si26 ? {{4{d_i26[25]}},d_i26[25:0],2'b0} : {{14{d_i16[15]}},d_i16[15:0],2'b0};
  assign d_jirl_offs = {{14{d_i16[15]}}, d_i16[15:0], 2'b0};
  assign d_aluSrc1 = d_src1_is_pc ? D_pcAddr : d_regDataA;
  assign d_aluSrc2 = d_src2_is_imm ? d_imm : d_regDataB;

  wire [31:0] cmp_a, cmp_b, res;
  wire cmp_c;
  assign d_rjEqrd = d_regDataA === d_regDataB;
  assign cmp_a = d_regDataA;
  assign cmp_b = ~d_regDataB;
  adder adder_init (
      .a(cmp_a),
      .b(cmp_b),
      .cin(1'b1),
      .res(res),
      .cout(cmp_c)
  );
  assign d_rjLTrd = (d_regDataA[31] & ~d_regDataB[31]) | 
                    ((d_regDataA[31] ~^ d_regDataB[31]) & res[31]);
  assign d_rjLTrdU = ~cmp_c;

  regfile regfile_init (
      .clk(~clk),
      .raddr1(d_regAddA),
      .rdata1(d__regDataA),
      .raddr2(d_regAddB),
      .rdata2(d__regDataB),
      .we(W_regW),
      .waddr(W_regWAdd),
      .wdata(w_regWData)
  );
  assign d_regDataA = D_forwardA == 2'b11 ? e_aluResult : 
                      (D_forwardA == 2'b10 ? m_memReadData :
                      (D_forwardA == 2'b01 ? M_aluResult :
                      d__regDataA));
  assign d_regDataB = D_forwardB == 2'b11 ? e_aluResult : 
                      (D_forwardB == 2'b10 ? m_memReadData :
                      (D_forwardB == 2'b01 ? M_aluResult :
                      d__regDataB));

  wire [31:0] d__csr_data;
  wire d_tid_out;
  wire d_timer_64_out;
  wire d_has_int;
  wire d_excp;
  wire d_excp_tlbrefill;
  wire d_ertn;
  wire d_llbit;
  wire d_llbit_wenl;
  wire [31:0] d_eentry_out;
  wire [31:0] d_tlbrentry_out;
  wire [31:0] d_era_out;
  wire d_plv;
  csr u_csr (
      .clk             (clk),
      .resetn          (resetn),
      .d_csrAdd        (d_csrAdd),
      .d_csrRead       (d__csr_data),
      .W_csr_en        (W_csr_en),
      .W_csrWAdd       (W_csrWAdd),
      .W_csrWData      (W_csrWData),
      .tid_out         (d_tid_out),
      .timer_64_out    (d_timer_64_out),
      .interrupt       (interrupt),
      .has_int         (d_has_int),
      .W_excp          (W_excp & ~W_ertn),
      .W_excp_tlbrefill(W_excp_tlbrefill),
      .W_ertn          (W_ertn),
      .W_era           (W_era),
      .W_subcode       (W_subcode),
      .W_code          (W_code),
      .W_llbit         (W_llbit),
      .W_llbit_wen     (W_llbit_wen),
      .eentry_out      (d_eentry_out),
      .tlbrentry_out   (d_tlbrentry_out),
      .era_out         (d_era_out),
      .plv             (d_plv)
  );
  assign d_csrAdd = d_i14;
  assign d_csr_data = {32{D_forwardCSR == 2'b11}} & E_csrWData |
                      {32{D_forwardCSR == 2'b10}} & M_csrWData |
                      {32{D_forwardCSR == 2'b01}} & W_csrWData |
                      {32{D_forwardCSR == 2'b00}} & d__csr_data;
  assign d_csr_inst = inst_csrwr | inst_csrrd | inst_csrxchg;
  assign d_csrWData = inst_csrwr ? d_regDataB : (d_regDataB & d_regDataA) | (d_csr_data & ~d_regDataA);
  assign d_csr_en = inst_csrwr | inst_csrxchg;
  wire syscall_excp = inst_syscall;
  assign d_ertn = inst_ertn;
  assign d_excp = syscall_excp | d_has_int;  //这里把ertn和excp合并来给hazard产生阻塞信号
  assign d_excp_num = {6'b0, syscall_excp, d_has_int};
  assign d_excp_or_ertn = d_excp | d_ertn;
  //因此异常入口需要满足W_excp & ~W_ertn 的情况
  //软件实现了对ERA的加4还是不加
  assign d_pc_next = W_excp ? d_eentry_out :
                    (W_ertn ? d_era_out: 
                    (d_selPC[1] ? d_pcJ : 
                    (d_selPC[0] ? d_pcBranch : 
                    F_pcPlus4)));
endmodule


```

在原来的基础上增加了下面的工作

1.  增加了CSR的模块例化，以及对应端口的流水传递
2.  增加了读取CSR数据的前递逻辑、CSRXCHG、CSRWR写数据的实现
    ```verilog
      assign d_csr_data = {32{D_forwardCSR == 2'b11}} & E_csrWData |
                          {32{D_forwardCSR == 2'b10}} & M_csrWData |
                          {32{D_forwardCSR == 2'b01}} & W_csrWData |
                          {32{D_forwardCSR == 2'b00}} & d__csr_data;
      assign d_csrWData = inst_csrwr ? d_regDataB : (d_regDataB & d_regDataA) | (d_csr_data & ~d_regDataA);   
    ```
3.  根据异常/中断服务程序入口地址以及返回地址，更改下一个指令PC的实现
    ```verilog
      assign d_pc_next = W_excp & ~W_ertn ? d_eentry_out :
                        (W_ertn ? d_era_out: 
                        (d_selPC[1] ? d_pcJ : 
                        (d_selPC[0] ? d_pcBranch : 
                        F_pcPlus4)));
    ```
4.  增加了IF-ID流水线寄存器的EXCP、ERTN阻塞
5.  增加了清空下一个EXE的译码信号

    使用寄存器保留W\_excp信号，然后在下一个周期时ID的译码指令均为0写寄存器信号亦为0

### 2.3 EXE阶段代码修改

```verilog
`timescale 1ns / 1ps

module EXE_stage (
    input clk,
    input resetn,
    input E_fresh,
    input E_div_mod_stall,

    input [31:0] D_pcAddr,
    input [31:0] d_aluSrc1,
    input [31:0] d_aluSrc2,
    input [4:0] d_regWAdd,
    input d_regW,
    input d_res_from_mem,
    input [11:0] d_aluOP,
    input d_memReadE,
    d_memWriteE,
    input [3:0] d_memReadW,
    d_memWriteW,
    input [31:0] d_regDataB,
    input d_mul_alu,
    input d_mul_div_sign,
    input d_mul_high,
    input d_is_mod,
    input d_div_mod_alu,
    input [31:0] d_csr_data,
    input d_csr_inst,
    input d_loadu,
    input d_take_bOrj,
    input [13:0] d_csrAdd,
    input [31:0] d_csrWData,
    input d_csr_en,
    input d_ertn,
    input d_excp,
    input [7:0] d_excp_num,

    output [31:0] E_pcAddr,
    output e_complete_delay,
    output [31:0] e_aluResult,
    output [4:0] E_regWAdd,
    output E_regW,
    output E_res_from_mem,
    output E_memReadE,
    E_memWriteE,
    output [3:0] E_memReadW,
    E_memWriteW,
    output [31:0] E_memWriteData,
    output E_div_mod_alu,
    output E_loadu,
    output [31:0] E_csr_data,
    output E_csr_inst,
    output E_take_bOrj,
    output [13:0] E_csrAdd,
    output [31:0] E_csrWData,
    output E_csr_en,
    output E_ertn,
    output E_excp,
    output [7:0] E_excp_num
);
  wire [31:0] E_aluSrc1, E_aluSrc2;
  wire [11:0] E_aluOP;
  wire E_mul_alu;
  wire E_mul_div_sign;
  wire E_mul_high;
  wire E_is_mod;


  parameter WIDTH_EX_init = 264;
  flopenrc #(
      .WIDTH(WIDTH_EX_init)
  ) flopenrc_EX1 (
      .clk(clk),
      .rst(~resetn),
      .clear(E_fresh),
      .enable(~E_div_mod_stall),
      .d({
        d_aluSrc1,
        d_aluSrc2,
        d_regWAdd,
        d_regW,
        d_res_from_mem,
        d_aluOP,
        d_memReadE,
        d_memWriteE,
        d_memReadW,
        d_memWriteW,
        d_regDataB,
        d_mul_alu,
        d_mul_div_sign,
        d_mul_high,
        d_is_mod,
        d_div_mod_alu,
        d_csr_data,
        d_csr_inst,
        D_pcAddr,
        d_loadu,
        d_take_bOrj,
        d_csr_en,
        d_csrAdd,
        d_csrWData,
        d_ertn,
        d_excp,
        d_excp_num
      }),
      .q({
        E_aluSrc1,
        E_aluSrc2,
        E_regWAdd,
        E_regW,
        E_res_from_mem,
        E_aluOP,
        E_memReadE,
        E_memWriteE,
        E_memReadW,
        E_memWriteW,
        E_memWriteData,
        E_mul_alu,
        E_mul_div_sign,
        E_mul_high,
        E_is_mod,
        E_div_mod_alu,
        E_csr_data,
        E_csr_inst,
        E_pcAddr,
        E_loadu,
        E_take_bOrj,
        E_csr_en,
        E_csrAdd,
        E_csrWData,
        E_ertn,
        E_excp,
        E_excp_num
      })
  );
  wire [31:0] aluResult;
  alu alu_init (
      .alu_op(E_aluOP),
      .alu_src1(E_aluSrc1),
      .alu_src2(E_aluSrc2),
      .alu_result(aluResult)
  );

  wire [63:0] mul_result;
  mul mul_inst (
      .mul_clk(clk),
      .reset(~resetn),
      .mul_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .result(mul_result)
  );

  wire [31:0] s;
  wire [31:0] r;
  div div_init (
      .div_clk(clk),
      .reset(~resetn),
      .div(E_div_mod_alu),
      .div_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .s(s),
      .r(r),
      .complete_delay(e_complete_delay)
  );

  wire [31:0] div_mod_res_reg = E_div_mod_alu ? (E_is_mod ? r : s) : aluResult;
  wire [31:0] e_csr_data = E_csr_inst ? E_csr_data : div_mod_res_reg;
  assign e_aluResult = E_mul_alu ? (E_mul_high ? mul_result[63:32] : mul_result[31:0]) : e_csr_data;

endmodule

```

在原来的基础上增加了下面的工作

1.  增加了流水的信号传递
2.  提前了写GR数据是来自csr\_data还是aluresult的选择

    因为会涉及到CSR数据和CR数据的前递——比如i指令是需要将CSR数据加载到GR中，i+1指令用到了这个GR寄存器，那么就需要前递这个GR寄存器，因此在EXE阶段就需要前递。为了简化逻辑，将GR之间的前递和这种涉及到CSR的前递合并，将csr\_data和alu的值的选择提前到这里进行

### 2.4 MEM阶段代码修改

```verilog
`timescale 1ns / 1ps
module MEM_stage (
    input clk,
    input resetn,
    input M_div_mod_stall,
    input M_expc_fresh,

    input [31:0] E_pcAddr,
    input [31:0] e_aluResult,
    input [4:0] E_regWAdd,
    input E_regW,
    input E_res_from_mem,
    input E_memReadE,
    E_memWriteE,
    input [3:0] E_memReadW,
    input [3:0] E_memWriteW,
    input [31:0] E_memWriteData,
    input [31:0] E_csr_data,
    input E_csr_inst,
    input E_loadu,
    input [13:0] E_csrAdd,
    input [31:0] E_csrWData,
    input E_csr_en,
    input E_ertn,
    input E_excp,
    input [7:0] E_excp_num,

    input [31:0] memReadData,

    output M_memReadE,
    M_memWriteE,
    output [4:0] M_regWAdd,
    output M_regW,
    output M_res_from_mem,
    output [31:0] M_memAdd,
    output [31:0] M_aluResult,
    output [31:0] m_memReadData,
    output [31:0] m_memWriteData,
    output [31:0] M_pcAddr,
    output [31:0] M_csr_data,
    output M_csr_inst,
    output [13:0] M_csrAdd,
    output [31:0] M_csrWData,
    output M_csr_en,
    output M_ertn,
    output M_excp,
    output [7:0] M_excp_num
);
  wire [31:0] M_memWriteData;
  wire [3:0] M_memReadW, M_memWriteW;
  wire M_loadu;

  parameter WIDTH = 268;
  flopenrc #(
      .WIDTH(WIDTH)
  ) u_flopenrc (
      .clk(clk),
      .rst(~resetn),
      .enable(~M_div_mod_stall),
      .clear(M_expc_fresh),
      .d({
        E_pcAddr,
        e_aluResult,
        E_regWAdd,
        E_regW,
        E_res_from_mem,
        E_memReadE,
        E_memWriteE,
        E_memReadW,
        E_memWriteW,
        E_memWriteData,
        E_csr_data,
        E_csr_inst,
        E_loadu,
        e_aluResult,
        E_csr_en,
        E_csrAdd,
        E_csrWData,
        E_ertn,
        E_excp,
        E_excp_num
      }),
      .q({
        M_pcAddr,
        M_aluResult,
        M_regWAdd,
        M_regW,
        M_res_from_mem,
        M_memReadE,
        M_memWriteE,
        M_memReadW,
        M_memWriteW,
        M_memWriteData,
        M_csr_data,
        M_csr_inst,
        M_loadu,
        M_memAdd,
        M_csr_en,
        M_csrAdd,
        M_csrWData,
        M_ertn,
        M_excp,
        M_excp_num
      })
  );


  wire [31:0] mem_byteStored = M_aluResult[1:0] == 2'b00 ? {memReadData[31:8],M_memWriteData[7:0]} :
                              (M_aluResult[1:0] == 2'b01 ? {memReadData[31:16],M_memWriteData[7:0],memReadData[7:0]} :
                              (M_aluResult[1:0] == 2'b10 ? {memReadData[31:24],M_memWriteData[7:0],memReadData[15:0]} :
                              {M_memWriteData[7:0],memReadData[23:0]}));
  wire [31:0] mem_halfStored = {32{M_aluResult[1:0] == 2'b00}} & {memReadData[31:16],M_memWriteData[15:0]} |
                               {32{M_aluResult[1:0] == 2'b10}} & {M_memWriteData[15:0],memReadData[15:0]};
  assign m_memWriteData = M_memWriteW[3] ? M_memWriteData : (M_memWriteW[1] ? mem_halfStored : mem_byteStored);

  wire [7:0] mem_byteLoaded = ({8{M_aluResult[1:0]==2'b00}} & memReadData[ 7: 0]) |
                            ({8{M_aluResult[1:0]==2'b01}} & memReadData[15: 8]) |
                            ({8{M_aluResult[1:0]==2'b10}} & memReadData[23:16]) |
                            ({8{M_aluResult[1:0]==2'b11}} & memReadData[31:24]) ;
  wire [15:0] mem_halfLoaded = ({16{M_aluResult[1:0]==2'b00}} & memReadData[15: 0]) |
                             ({16{M_aluResult[1:0]==2'b10}} & memReadData[31:16]) ;
  assign m_memReadData = M_memReadW[3] ? memReadData :
                         (M_memReadW[1] ? (M_loadu ? {16'b0,mem_halfLoaded} : {{16{mem_halfLoaded[15]}},mem_halfLoaded}) :
                         (M_memReadW[0] ? (M_loadu ? {24'b0,mem_byteLoaded} : {{24{mem_byteLoaded[7]}},mem_byteLoaded}) : 32'b0));
endmodule

```

在原来的基础上只是增加了流水信号的传递、将flopenr改为了flopencr，clear信号为excp/ertn所产生的清除信号

### 2.5 WB阶段代码修改

```verilog
`timescale 1ns / 1ps

module WB_stage (
    input clk,
    input resetn,
    input W_div_mod_stall,
    input W_expc_fresh,

    input [31:0] M_aluResult,
    input M_regW,
    input M_res_from_mem,
    input [4:0] M_regWAdd,
    input [31:0] M_memReadData,
    input [31:0] M_csr_data,
    input M_csr_inst,
    input [31:0] M_pcAddr,
    input [13:0] M_csrAdd,
    input [31:0] M_csrWData,
    input M_csr_en,
    input M_ertn,
    input M_excp,
    input [7:0] M_excp_num,

    output W_regW,
    output [4:0] W_regWAdd,
    output [31:0] w_regWData,
    output [31:0] W_pcAddr,
    output [13:0] W_csrAdd,
    output [31:0] W_csrWData,
    output W_csr_en,
    output W_ertn,
    output W_excp,
    output W_excp_or_ertn,
    output [7:0] W_excp_num,
    output [5:0] W_code,
    output [8:0] W_subcode,
    output [31:0] W_era
);
  wire [31:0] W_aluResult;
  wire [31:0] W_memReadData;
  wire [31:0] W_csr_data;
  wire w_regW;
  wire W_res_from_mem;
  wire W_csr_inst;

  parameter WIDTH_WB = 203;
  flopenrc #(
      .WIDTH(WIDTH_WB)
  ) WB_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~W_div_mod_stall),
      .clear(W_expc_fresh),
      .d({
        M_aluResult,
        M_regW,
        M_res_from_mem,
        M_regWAdd,
        M_memReadData,
        M_csr_data,
        M_csr_inst,
        M_pcAddr,
        M_csr_en,
        M_csrAdd,
        M_csrWData,
        M_ertn,
        M_excp,
        M_excp_num
      }),
      .q({
        W_aluResult,
        w_regW,
        W_res_from_mem,
        W_regWAdd,
        W_memReadData,
        W_csr_data,
        W_csr_inst,
        W_pcAddr,
        W_csr_en,
        W_csrAdd,
        W_csrWData,
        W_ertn,
        W_excp,
        W_excp_num
      })
  );
  assign W_regW = w_regW & ~W_div_mod_stall;
  assign w_regWData = W_res_from_mem ? W_memReadData : W_aluResult;
  assign W_code = {6{W_excp_num[0]}} & 6'h0 | {6{W_excp_num[1]}} & 6'hb;
  assign W_subcode = 9'b0;
  assign W_era = W_pcAddr;  //era是当前引起异常或者中断的PC
  assign W_excp_or_ertn = W_ertn | W_excp;

endmodule

```

在原来的基础上增加了流水信号的传递、flopenr改为flopencr——clear信号是excp/ertn产生的以及W\_code、W\_subcode、W\_era等输出给csr的信号

### 2.6 hazard阶段代码修改

```verilog
`timescale 1ns / 1ps

module hazard (
    input [ 4:0] d_regAddA,
    input [ 4:0] d_regAddB,
    input [13:0] d_csrWAdd,

    input  d_excp_or_ertn,
    // input  d_excp_tlbrefill,
    input  W_excp_or_ertn,
    // input  W_excp_tlbrefill,
    output F_excp_stall,
    output D_excp_stall,

    input E_div_mod_alu,
    input e_complete_delay,
    input E_res_from_mem,
    input M_res_from_mem,
    input d_branch,
    input E_regW,
    E_csr_en,
    input M_regW,
    M_csr_en,
    input W_regW,
    W_csr_en,
    input [4:0] E_regWAdd,
    input [13:0] E_csrWAdd,
    input [4:0] M_regWAdd,
    input [13:0] M_csrWAdd,
    input [4:0] W_regWAdd,
    input [13:0] W_csrWAdd,

    output F_stall,
    D_stall,
    E_fresh,
    F_div_mod_stall,
    D_div_mod_stall,
    E_div_mod_stall,
    M_div_mod_stall,
    W_div_mod_stall,
    M_expc_fresh,
    W_expc_fresh,

    output [1:0] D_forwardA,
    D_forwardB,
    D_forwardCSR
);
  wire lwStall, branchStall;
  assign D_forwardA = (E_regWAdd == d_regAddA) & d_regAddA != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_regW ? 2'b01 : 2'b00);

  assign D_forwardB = (E_regWAdd == d_regAddB) & d_regAddB != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_regW ? 2'b01 : 2'b00);
  assign D_forwardCSR = (E_csrWAdd == d_csrWAdd) & E_csr_en ? 2'b11 : 
                      ((M_csrWAdd == d_csrWAdd) & M_csr_en ? 2'b10 :
                      (W_csrWAdd == d_csrWAdd) & W_csr_en ? 2'b01 : 2'b00);

  //稍微的处理延迟——便于观察
  //load id和exe
  //branch 判断寄存器分支——rj和rk
  assign #1 lwStall = (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd) & E_res_from_mem;
  //在clk下降沿写寄存器，上升沿读——先写后读，所以是1->0->1
  assign #1 branchStall = d_branch & 
                        (E_regW & (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd)|
                        M_res_from_mem & (d_regAddA == M_regWAdd | d_regAddB == M_regWAdd));
  assign #1 D_stall = lwStall | branchStall;
  assign #1 F_stall = D_stall;
  assign #1 E_fresh = D_stall | W_excp_or_ertn;
  assign #1 D_div_mod_stall = E_div_mod_alu & ~e_complete_delay;
  assign #1 F_div_mod_stall = D_div_mod_stall;
  assign #1 E_div_mod_stall = D_div_mod_stall;
  assign #1 M_div_mod_stall = D_div_mod_stall;
  assign #1 W_div_mod_stall = D_div_mod_stall;
  assign #1 D_excp_stall = ~W_excp_or_ertn & (d_excp_or_ertn);
  assign #1 F_excp_stall = D_excp_stall;
  assign #1 W_expc_fresh = W_excp_or_ertn;
  assign #1 M_expc_fresh = W_expc_fresh;
endmodule


```

1.  根据W\_excp\_or\_ertn信号，产生了F、D阶段的阻塞信号以及E、M、W阶段的清除信号
2.  根据D、E、M、W阶段的csrAdd和csr\_en信号，产生了读csr数据的前递逻辑

## 3 流水阶段增量开发——EXP13

### 3.1 IF阶段增量开发——支持ADEF异常

```verilog
`timescale 1ns / 1ps

module IF_stage (
    input clk,
    input resetn,
    input F_stall,
    input F_excp_stall,
    input F_div_mod_stall,
    input [31:0] d_pc_next,

    output f_ADEF_excp,
    output [31:0] F_pcAddr,
    output [31:0] F_pcPlus4
);
  parameter WIDTH_PC = 32;
  pc_flopenr u_pc_flopenr (
      .clk   (clk),
      .rst   (~resetn),
      .enable(~F_stall & ~F_div_mod_stall & ~F_excp_stall),
      .d     (d_pc_next),
      .q     (F_pcAddr)
  );
  assign F_pcPlus4 = F_pcAddr + 32'h4;
  assign f_ADEF_excp = F_pcAddr[0] | F_pcAddr[1];//取指地址错异常——即末两位不全为0
endmodule

```

ADEF异常的触发条件是：地址不是4字节对齐的，即地址末两位不全为0

当触发ADEF异常时，需要阻塞IF阶段——在hazard模块中实现

### 3.2 ID阶段增量开发——支持RDCNT、BREAK指令、定时器中断、软中断

```verilog
`timescale 1ns / 1ps


module ID_stage (
    input clk,
    input resetn,
    input [7:0] interrupt,

    input f_ADEF_excp,

    input D_stall,
    input D_div_mod_stall,
    input D_excp_stall,
    input [31:0] F_inst,
    input [31:0] F_pcAddr,
    input [31:0] F_pcPlus4,

    input [1:0] D_forwardA,
    input [1:0] D_forwardB,
    input [1:0] D_forwardCSR,
    input [1:0] D_forwardTID,

    input E_take_bOrj,
    input [31:0] E_pcAddr,

    input [31:0] e_aluResult,
    input [31:0] E_csrWData,
    input [31:0] M_aluResult,
    input [31:0] M_csrWData,
    input [31:0] m_memReadData,

    input W_regW,
    input [4:0] W_regWAdd,
    input [31:0] w_regWData,
    input W_csr_en,
    input [13:0] W_csrWAdd,
    input [31:0] W_csrWData,
    input W_excp,
    input W_excp_tlbrefill,
    input W_ertn,
    input [31:0] W_era,
    input [8:0] W_subcode,
    input [5:0] W_code,
    input W_llbit,
    input W_llbit_wen,
    input [31:0] W_badv_pc,
    input W_excp_adef,


    output [31:0] D_pcAddr,
    output [31:0] d_pc_next,
    output [31:0] d_aluSrc1,
    output [31:0] d_aluSrc2,
    output [4:0] d_regWAdd,
    output d_regW,
    output d_res_from_mem,
    output [11:0] d_aluOP,
    output d_memReadE,
    d_memWriteE,
    output [3:0] d_memReadW,
    d_memWriteW,
    output [31:0] d_regDataB,
    output d_mul_alu,
    output d_mul_div_sign,
    output d_mul_high,
    output d_is_mod,
    output d_div_mod_alu,
    output [31:0] d_csr_data,
    output d_csr_inst,
    output [4:0] d_regAddA,
    output [4:0] d_regAddB,
    output d_branch,
    output d_loadu,
    output d_take_bOrj,
    output [13:0] d_csrAdd,
    output [31:0] d_csrWData,
    output d_csr_en,
    output d_ertn,
    output d_excp,
    output [7:0] d_excp_num,
    output d_excp_or_ertn,
    output [31:0] d_era,
    output [31:0] d_tid_out,
    output [63:0] d_timer_64_out,
    output [1:0] d_rdcnt_inst,
    output d_inst_rdcntid,
    output [31:0] rdcnt_val
);
  wire [31:0] inst;
  wire [31:0] D_pcPlus4;

  wire D_adef_excp;

  parameter WIDTH_ID_INIT = 97;
  flopenr #(
      .WIDTH(WIDTH_ID_INIT)
  ) id_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~D_stall & ~D_div_mod_stall & ~D_excp_stall),  //阻塞——complete_delay + 前递 + 分支
      .d({F_inst, F_pcAddr, F_pcPlus4, f_ADEF_excp}),
      .q({inst, D_pcAddr, D_pcPlus4, D_adef_excp})
  );

  reg wait_expc_ertn_F;
  reg branch_int;
  always @(posedge clk) begin
    if (~resetn) begin
      wait_expc_ertn_F <= 1'b0;
      branch_int <= 1'b0;
    end else begin
      wait_expc_ertn_F <= W_excp | W_ertn;
      branch_int <= ~(d_selPC == 2'b00) & d_excp;
    end
  end
  wire [ 5:0] d_op_31_26;  //inst[31:26]
  wire [ 3:0] d_op_25_22;  //inst[25:22]
  wire [ 1:0] d_op_21_20;  //inst[21:20]
  wire [ 4:0] d_op_19_15;  //inst[19:15]
  wire [ 4:0] d_rd;  //inst的rd编码
  wire [ 4:0] d_rj;  //inst的rj编码
  wire [ 4:0] d_rk;  //inst的rk编码
  wire [11:0] d_i12;  //inst中的12位立即数
  wire [13:0] d_i14;
  wire [19:0] d_i20;  //inst中的20位立即数
  wire [15:0] d_i16;  //inst中的16位立即数
  wire [25:0] d_i26;  //inst中的26位立即数

  wire [63:0] d_op_31_26_d;  //6-64译码
  wire [15:0] d_op_25_22_d;  //4-16译码
  wire [ 3:0] d_op_21_20_d;  //2-4译码
  wire [31:0] d_op_19_15_d;  //5-32译码

  assign d_op_31_26 = inst[31:26];
  assign d_op_25_22 = inst[25:22];
  assign d_op_21_20 = inst[21:20];
  assign d_op_19_15 = inst[19:15];

  assign d_rd       = inst[4:0];
  assign d_rj       = inst[9:5];
  assign d_rk       = inst[14:10];

  assign d_i12      = inst[21:10];
  assign d_i14      = inst[23:10];
  assign d_i20      = inst[24:5];
  assign d_i16      = inst[25:10];
  assign d_i26      = {inst[9:0], inst[25:10]};

  decoder_6_64 u_dec0 (
      .in (d_op_31_26),
      .out(d_op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in (d_op_25_22),
      .out(d_op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in (d_op_21_20),
      .out(d_op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in (d_op_19_15),
      .out(d_op_19_15_d)
  );

  wire inst_rdcntid = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_rdcntvl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h18 & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_rdcntvh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h0] & d_rk == 5'h19 & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_add = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h00] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sub = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h02] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_slt = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h04] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sltu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h05] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_nor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h08] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_and = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h09] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_or = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0a] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_xor = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0b] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sll = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0e] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_srl = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h0f] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sra = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h10] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_mul = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h18] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_mulh = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h19] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_mulhu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h1] &d_op_19_15_d[5'h1a] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_div = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h00] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_mod = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h01] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_divu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h02] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_modu = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h03] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_break = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h14] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_syscall = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h0] & d_op_21_20_d[2'h2] &d_op_19_15_d[5'h16] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_slli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h01] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_srli = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h09] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_srai = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_slti = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sltui = d_op_31_26_d[6'h00] & d_op_25_22_d[4'h9] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_addi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'ha] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_andi = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hd] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'he] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_xori = d_op_31_26_d[6'h00] & d_op_25_22_d[4'hf] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_csrrd = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_csrwr = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & d_rj == 5'h01 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_csrxchg = d_op_31_26_d[6'h01] & ~inst[25] & ~inst[24] & ~inst_csrrd & ~inst_csrwr  & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_cacop = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_tlbsrch = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0a & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_tlbrd = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0b & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_tlbwr = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0c & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_tlbfill = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0d & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ertn = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h10] & d_rk == 5'h0e & d_rj == 5'h00 & d_rd == 5'h00 & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_idle = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h11] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_invtlb = d_op_31_26_d[6'h01] & d_op_25_22_d[4'h9] & d_op_21_20_d[2'h0] & d_op_19_15_d[5'h13] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_lu12i = d_op_31_26_d[6'h05] & ~inst[25] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_pcaddu12i = d_op_31_26_d[6'h07] & ~inst[25] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ll = d_op_31_26_d[6'h08] & ~inst[25] & ~inst[24] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_sc = d_op_31_26_d[6'h08] & ~inst[25] & inst[24] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ld_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h0] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ld_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h1] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ld_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h2] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_st_b = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h4] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_st_h = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h5] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_st_w = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h6] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ld_bu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h8] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ld_hu = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'h9] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_preld = d_op_31_26_d[6'h0a] & d_op_25_22_d[4'hb] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_dbar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h04] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_ibar = d_op_31_26_d[6'h0e] & d_op_25_22_d[4'h1] & d_op_21_20_d[2'h3] & d_op_19_15_d[5'h05] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bceqz = d_op_31_26_d[6'h12] & ~inst[9] & ~inst[8] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bcnez = d_op_31_26_d[6'h12] & ~inst[9] & inst[8] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_jirl = d_op_31_26_d[6'h13] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_b = d_op_31_26_d[6'h14] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bl = d_op_31_26_d[6'h15] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_beq = d_op_31_26_d[6'h16] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bne = d_op_31_26_d[6'h17] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_blt = d_op_31_26_d[6'h18] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bge = d_op_31_26_d[6'h19] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bltu = d_op_31_26_d[6'h1a] & ~E_take_bOrj & ~wait_expc_ertn_F;
  wire inst_bgeu = d_op_31_26_d[6'h1b] & ~E_take_bOrj & ~wait_expc_ertn_F;

  wire inst_valid = inst_add       |
                    inst_sub       |
                    inst_slt       |
                    inst_sltu      |
                    inst_nor       |
                    inst_and       |
                    inst_or        |
                    inst_xor       |
                    inst_sll       |
                    inst_srl       |
                    inst_sra       |
                    inst_mul       |
                    inst_mulh      |
                    inst_mulhu     |
                    inst_div       |
                    inst_mod       |
                    inst_divu      |
                    inst_modu      |
                    inst_break     |
                    inst_syscall   |
                    inst_slli      |
                    inst_srli      |
                    inst_srai      |
                    inst_idle      |
                    inst_slti      |
                    inst_sltui     |
                    inst_addi      |
                    inst_andi      |
                    inst_ori       |
                    inst_xori      |
                    inst_ld_b      |
                    inst_ld_h      |
                    inst_ld_w      |
                    inst_st_b      |
                    inst_st_h      |
                    inst_st_w      |
                    inst_ld_bu     |
                    inst_ld_hu     |
                    inst_ll        |
                    inst_sc        |
                    inst_jirl      |
                    inst_b         |
                    inst_bl        |
                    inst_beq       |
                    inst_bne       |
                    inst_blt       |
                    inst_bge       |
                    inst_bltu      |
                    inst_bgeu      |
                    inst_lu12i     |
                    inst_pcaddu12i |
                    inst_csrrd     |
                    inst_csrwr     |
                    inst_csrxchg   |
                    inst_rdcntid   |
                    inst_rdcntvh   |
                    inst_rdcntvl   |
                    inst_ertn      |
                    inst_cacop     |
                    inst_preld     |
                    inst_dbar      |
                    inst_ibar      |
                    inst_tlbsrch   |
                    inst_tlbrd     |
                    inst_tlbwr     |
                    inst_tlbfill   |
                    (inst_invtlb &  (d_rd == 5'd0 | 
                                     d_rd == 5'd1 | 
                                     d_rd == 5'd2 | 
                                     d_rd == 5'd3 | 
                                     d_rd == 5'd4 |
                                     d_rd == 5'd5 | 
                                     d_rd == 5'd6));//invtlb valid op;

  wire [1:0] d_selPC;
  wire d_src1_is_pc;
  wire d_src2_is_4;
  wire d_src2_is_imm;
  wire d_src_reg_is_rd;
  wire d_dst_is_r1;
  wire d_dst_is_rj;
  wire d_need_si12;
  wire d_need_si14;
  wire d_need_ui12;
  wire d_need_si16;
  wire d_need_si20;
  wire d_need_si26;
  wire d_rjEqrd;
  wire d_rjLTrd;
  wire d_rjLTrdU;

  assign d_regW =   inst_valid    &
                    ~inst_st_b    &
                    ~inst_st_h    &
                    ~inst_st_w    &
                    ~inst_beq     &
                    ~inst_bne     &
                    ~inst_blt     &
                    ~inst_bge     &
                    ~inst_bltu    &
                    ~inst_bgeu    &
                    ~inst_b       &
                    ~inst_syscall &
                    ~inst_tlbsrch &
                    ~inst_tlbrd   &
                    ~inst_tlbwr   &
                    ~inst_tlbfill &
                    ~inst_invtlb  &
                    ~inst_cacop   &
                    ~inst_preld   &
                    ~inst_dbar    &
                    ~inst_ibar    & ~D_adef_excp & ~E_take_bOrj & ~wait_expc_ertn_F;
  assign d_loadu = inst_ld_bu | inst_ld_hu;
  assign d_selPC[0] = (inst_bl 
                    | inst_b 
                    | (inst_beq & d_rjEqrd) 
                    | (inst_bne & ~d_rjEqrd)
                    | (inst_blt & d_rjLTrd)
                    | (inst_bge & ~d_rjLTrd)
                    | (inst_bltu & d_rjLTrdU)
                    | (inst_bgeu & ~d_rjLTrdU));
  assign d_selPC[1] = inst_jirl;
  assign d_aluOP[0] =  inst_add    |
                    inst_addi   |
                    inst_ld_b     |
                    inst_ld_h     |
                    inst_ld_w     |
                    inst_st_b     |
                    inst_st_h     |
                    inst_st_w     |
                    inst_ld_bu    |
                    inst_ld_hu    |
                    inst_ll     |
                    inst_sc     |
                    inst_jirl     |
                    inst_bl       |
                    inst_pcaddu12i|
                    inst_cacop    |
                    inst_preld;
  assign d_aluOP[1] = inst_sub;
  assign d_aluOP[2] = inst_slt | inst_slti;
  assign d_aluOP[3] = inst_sltu | inst_sltui;
  assign d_aluOP[4] = inst_and | inst_andi;
  assign d_aluOP[5] = inst_nor;
  assign d_aluOP[6] = inst_or | inst_ori;
  assign d_aluOP[7] = inst_xor | inst_xori;
  assign d_aluOP[8] = inst_sll | inst_slli;
  assign d_aluOP[9] = inst_srl | inst_srli;
  assign d_aluOP[10] = inst_sra | inst_srai;
  assign d_aluOP[11] = inst_lu12i;
  assign d_memReadE = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[0] = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_memReadW[1] = inst_ld_h | inst_ld_w | inst_ld_hu;
  assign d_memReadW[2] = inst_ld_w;
  assign d_memReadW[3] = inst_ld_w;
  assign d_memWriteE = (inst_st_b | inst_st_h | inst_st_w) & ~D_adef_excp;
  assign d_memWriteW[0] = inst_st_b | inst_st_h | inst_st_w;
  assign d_memWriteW[1] = inst_st_h | inst_st_w;
  assign d_memWriteW[2] = inst_st_w;
  assign d_memWriteW[3] = inst_st_w;
  assign d_src1_is_pc = inst_jirl | inst_bl | inst_pcaddu12i;
  assign d_src2_is_4 = inst_jirl | inst_bl;
  assign d_src2_is_imm =  inst_slli    |
                        inst_srli      |
                        inst_srai      |
                        inst_addi      |
                        inst_slti      |
                        inst_sltui     |
                        inst_andi      |
                        inst_ori       |
                        inst_xori      |
                        inst_pcaddu12i |
                        inst_ld_b      |
                        inst_ld_h      |
                        inst_ld_w      |
                        inst_ld_bu     |
                        inst_ld_hu     |
                        inst_st_b      |
                        inst_st_h      |
                        inst_st_w      |
                        inst_ll        |
                        inst_sc        |
                        inst_lu12i     |
                        inst_cacop     |
                        inst_bl        |
                        inst_jirl      |
                        inst_preld     ;
  assign d_res_from_mem = inst_ld_b | inst_ld_h | inst_ld_w | inst_ld_bu | inst_ld_hu;
  assign d_src_reg_is_rd =  inst_beq    |
                        inst_bne    |
                        inst_blt    |
                        inst_bltu   |
                        inst_bge    |
                        inst_bgeu   |
                        inst_st_b   |
                        inst_st_h   |
                        inst_st_w   |
                        inst_sc     |
                        inst_csrwr  |
                        inst_csrxchg;
  assign d_dst_is_r1 = inst_bl;
  assign d_dst_is_rj = inst_rdcntid;
  assign d_need_si12 = inst_addi |
                    inst_ld_b   |
                    inst_ld_h   |
                    inst_ld_w   |
                    inst_st_b   |
                    inst_st_h   |
                    inst_st_w   |
                    inst_ld_bu  |
                    inst_ld_hu  |
                    inst_slti   |
                    inst_sltui  |
                    inst_cacop  |
                    inst_preld  ;
  assign d_need_si14 = inst_ll | inst_sc;
  assign d_need_ui12 = inst_andi | inst_ori | inst_xori;
  assign d_need_si16 = inst_jirl |
                    inst_beq  |
                    inst_bne  |
                    inst_blt  |
                    inst_bge  |
                    inst_bltu |
                    inst_bgeu;
  assign d_need_si20 = inst_lu12i | inst_pcaddu12i;
  assign d_need_si26 = inst_b | inst_bl;
  assign d_mul_div_sign = inst_mul | inst_mulh | inst_div | inst_mod;
  assign d_div_mod_alu = inst_mod | inst_div | inst_modu | inst_divu;
  assign d_mul_alu = inst_mul | inst_mulh | inst_mulhu;
  assign d_is_mod = inst_mod | inst_modu;
  assign d_mul_high = inst_mulh | inst_mulhu;
  assign d_branch = inst_beq | inst_bne | inst_bge | inst_blt | inst_bgeu | inst_bltu;
  assign d_take_bOrj = ~(d_selPC == 2'b00);  //使得ertn在第二个周期即计算完成


  wire [31:0] d_regDataA;
  wire [31:0] d__regDataA;
  wire [31:0] d__regDataB;
  wire [31:0] d_imm;
  wire [31:0] d_br_offs;
  wire [31:0] d_jirl_offs;
  wire [31:0] d_pcBranch;
  wire [31:0] d_pcJ;
  assign d_regAddA = d_rj;
  assign d_regAddB = d_src_reg_is_rd ? d_rd : d_rk;
  assign d_regWAdd = d_dst_is_r1 ? 5'h1 : (d_dst_is_rj ? d_rj : d_rd);
  assign d_imm = d_src2_is_4 ? 32'h4 : 
                (d_need_si20 ? {d_i20[19:0],12'b0} : 
                (d_need_ui12 ? {20'b0,d_i12[11:0]} : 
                (d_need_si14 ? {{18{d_i14[13]}},d_i14} : 
                {{20{d_i12[11]}},d_i12[11:0]})));
  assign d_pcJ = d_regDataA + d_jirl_offs;
  assign d_pcBranch = D_pcAddr + d_br_offs;
  assign d_br_offs = d_need_si26 ? {{4{d_i26[25]}},d_i26[25:0],2'b0} : {{14{d_i16[15]}},d_i16[15:0],2'b0};
  assign d_jirl_offs = {{14{d_i16[15]}}, d_i16[15:0], 2'b0};
  assign d_aluSrc1 = d_src1_is_pc ? D_pcAddr : d_regDataA;
  assign d_aluSrc2 = d_src2_is_imm ? d_imm : d_regDataB;

  wire [31:0] cmp_a, cmp_b, res;
  wire cmp_c;
  assign d_rjEqrd = d_regDataA === d_regDataB;
  assign cmp_a = d_regDataA;
  assign cmp_b = ~d_regDataB;
  adder adder_init (
      .a(cmp_a),
      .b(cmp_b),
      .cin(1'b1),
      .res(res),
      .cout(cmp_c)
  );
  assign d_rjLTrd = (d_regDataA[31] & ~d_regDataB[31]) | 
                    ((d_regDataA[31] ~^ d_regDataB[31]) & res[31]);
  assign d_rjLTrdU = ~cmp_c;

  regfile regfile_init (
      .clk(~clk),
      .raddr1(d_regAddA),
      .rdata1(d__regDataA),
      .raddr2(d_regAddB),
      .rdata2(d__regDataB),
      .we(W_regW),
      .waddr(W_regWAdd),
      .wdata(w_regWData)
  );
  assign d_regDataA = D_forwardA == 2'b11 ? e_aluResult : 
                      (D_forwardA == 2'b10 ? m_memReadData :
                      (D_forwardA == 2'b01 ? M_aluResult :
                      d__regDataA));
  assign d_regDataB = D_forwardB == 2'b11 ? e_aluResult : 
                      (D_forwardB == 2'b10 ? m_memReadData :
                      (D_forwardB == 2'b01 ? M_aluResult :
                      d__regDataB));

  wire [31:0] d__csr_data;
  wire d_has_int;
  wire d_excp_tlbrefill;
  wire d_llbit;
  wire d_llbit_wenl;
  wire [31:0] d_eentry_out;
  wire [31:0] d_tlbrentry_out;
  wire [31:0] d_era_out;
  wire [1:0] d_plv;
  wire d_privilege_ins;

  wire d_SYS_excp;
  wire d_BRK_excp;
  wire d_INE_excp;
  wire d_IPE_excp;

  csr u_csr (
      .clk             (clk),
      .resetn          (resetn),
      .d_csrAdd        (d_csrAdd),
      .d_csrRead       (d__csr_data),
      .W_csr_en        (W_csr_en),
      .W_csrWAdd       (W_csrWAdd),
      .W_csrWData      (W_csrWData),
      .tid_out         (d_tid_out),
      .timer_64_out    (d_timer_64_out),
      .interrupt       (interrupt),
      .has_int         (d_has_int),
      .W_excp          (W_excp & ~W_ertn),
      .W_excp_tlbrefill(W_excp_tlbrefill),
      .W_ertn          (W_ertn),
      .W_era           (W_era),
      .W_badv_pc       (W_badv_pc),
      .W_excp_adef     (W_excp_adef),
      .W_subcode       (W_subcode),
      .W_code          (W_code),
      .W_llbit         (W_llbit),
      .W_llbit_wen     (W_llbit_wen),
      .eentry_out      (d_eentry_out),
      .tlbrentry_out   (d_tlbrentry_out),
      .era_out         (d_era_out),
      .plv             (d_plv)
  );
  assign d_csrAdd = d_i14;
  assign d_csr_data = {32{D_forwardCSR == 2'b11}} & E_csrWData |
                      {32{D_forwardCSR == 2'b10}} & M_csrWData |
                      {32{D_forwardCSR == 2'b01}} & W_csrWData |
                      {32{D_forwardCSR == 2'b00}} & d__csr_data;
  assign d_csr_inst = inst_csrwr | inst_csrrd | inst_csrxchg;
  assign d_csrWData = inst_csrwr ? d_regDataB : (d_regDataB & d_regDataA) | (d_csr_data & ~d_regDataA);
  assign d_csr_en = (inst_csrwr | inst_csrxchg) & ~D_adef_excp;

  assign d_SYS_excp = inst_syscall & ~E_take_bOrj & ~wait_expc_ertn_F;
  assign d_BRK_excp = inst_break & ~E_take_bOrj & ~wait_expc_ertn_F;
  assign d_INE_excp = ~inst_valid & ~E_take_bOrj & ~wait_expc_ertn_F & F_pcAddr != 32'h1bff_fffc & D_pcAddr != 32'h1bfffffc;
  assign d_privilege_ins = inst_csrrd    |
                     inst_csrwr    |
                     inst_csrxchg  |
                     inst_cacop    |
                     inst_tlbsrch  |
                     inst_tlbrd    |
                     inst_tlbwr    |
                     inst_tlbfill  |
                     inst_invtlb   |
                     inst_ertn     |
                     inst_idle     ;
  assign d_IPE_excp = ~(d_plv == 2'b00) & d_privilege_ins & ~E_take_bOrj & ~wait_expc_ertn_F;
  assign d_ertn = inst_ertn;
  assign d_excp = (((d_has_int & ~E_take_bOrj) | (branch_int)) | D_adef_excp | d_SYS_excp | d_BRK_excp | d_INE_excp | d_IPE_excp) & ~wait_expc_ertn_F ;  //这里把ertn和excp合并来给hazard产生阻塞信号
  assign d_excp_num = {
    d_has_int, D_adef_excp, d_SYS_excp, d_BRK_excp, d_INE_excp, d_IPE_excp, 1'b0, 1'b0
  };
  assign d_excp_or_ertn = d_excp | d_ertn;
  assign d_inst_rdcntid = inst_rdcntid;
  assign d_rdcnt_inst[0] = inst_rdcntid | inst_rdcntvh;
  assign d_rdcnt_inst[1] = inst_rdcntvl | inst_rdcntvh;

  assign rdcnt_val = (d_rdcnt_inst == 2'b01) ? (D_forwardTID == 2'b11 ? E_csrWData :
                                               (D_forwardTID == 2'b10 ? M_csrWData : 
                                               (D_forwardTID == 2'b01 ? W_csrWData : d_tid_out))) :
                     (d_rdcnt_inst == 2'b10 ? d_timer_64_out[31:0] : d_timer_64_out[32:0]);

  //因此异常入口需要满足W_excp & ~W_ertn 的情况
  //软件实现了对ERA的加4还是不加
  assign d_pc_next = W_excp ? d_eentry_out :
                    (W_ertn ? d_era_out: 
                    (d_selPC[1] ? d_pcJ : 
                    (d_selPC[0] ? d_pcBranch : 
                    F_pcPlus4)));
  assign d_era = E_take_bOrj ? E_pcAddr : D_pcAddr;
endmodule

```

1.  RDCNTID指令是需要读取csr\_tid，设计csr时csr\_tid的值输出tid\_out为wire型，因此需要前递保存最新更新的（RDCNTID在WB阶段时的tid），所以设计了tid数据的前递
2.  rdcntvl和rdcntvh数据的选择，并向后传递d\_rdcnt\_inst，用于EXE阶段写寄存器数据的选择
3.  规整EXCP和EXCPNUM

    目前实现了中断（2个软中断、8个硬中断）、adef、syscall、break、ine、ipe、ale

### 3.3 EXE阶段增量开发——支持ALE异常、根据d\_rdcnt\_inst选择写寄存器数据

```verilog
`timescale 1ns / 1ps

module EXE_stage (
    input clk,
    input resetn,
    input E_fresh,
    input E_div_mod_stall,

    input [31:0] D_pcAddr,
    input [31:0] d_aluSrc1,
    input [31:0] d_aluSrc2,
    input [4:0] d_regWAdd,
    input d_regW,
    input d_res_from_mem,
    input [11:0] d_aluOP,
    input d_memReadE,
    d_memWriteE,
    input [3:0] d_memReadW,
    d_memWriteW,
    input [31:0] d_regDataB,
    input d_mul_alu,
    input d_mul_div_sign,
    input d_mul_high,
    input d_is_mod,
    input d_div_mod_alu,
    input [31:0] d_csr_data,
    input d_csr_inst,
    input d_loadu,
    input d_take_bOrj,
    input [13:0] d_csrAdd,
    input [31:0] d_csrWData,
    input d_csr_en,
    input d_ertn,
    input d_excp,
    input [7:0] d_excp_num,
    input d_inst_rdcnt,
    input [31:0] d_rdcntVal,
    input [31:0] d_era,
    input [1:0] d_rdcnt_inst,
    input [31:0] rdcnt_val,

    output [31:0] E_pcAddr,
    output e_complete_delay,
    output [31:0] e_aluResult,
    output [4:0] E_regWAdd,
    output E_regW,
    output E_res_from_mem,
    output E_memReadE,
    E_memWriteE,
    output [3:0] E_memReadW,
    E_memWriteW,
    output [31:0] E_memWriteData,
    output E_div_mod_alu,
    output E_loadu,
    output [31:0] E_csr_data,
    output E_csr_inst,
    output E_take_bOrj,
    output [13:0] E_csrAdd,
    output [31:0] E_csrWData,
    output E_csr_en,
    output E_ertn,
    output E_excp,
    output [7:0] E_excp_num,
    output e_ALE_excp,
    output [31:0] E_era,
    output [31:0] e_badv_add,
    output [1:0] E_rdcnt_inst
);
  wire [31:0] E_aluSrc1, E_aluSrc2;
  wire [11:0] E_aluOP;
  wire E_mul_alu;
  wire E_mul_div_sign;
  wire E_mul_high;
  wire E_is_mod;
  wire e_excp;
  wire [7:0] e_excp_num;
  wire E__regW;
  wire [31:0] E_rdcnt_val;

  parameter WIDTH_EX_init = 330;
  flopenrc #(
      .WIDTH(WIDTH_EX_init)
  ) flopenrc_EX1 (
      .clk(clk),
      .rst(~resetn),
      .clear(E_fresh),
      .enable(~E_div_mod_stall),
      .d({
        d_aluSrc1,
        d_aluSrc2,
        d_regWAdd,
        d_regW,
        d_res_from_mem,
        d_aluOP,
        d_memReadE,
        d_memWriteE,
        d_memReadW,
        d_memWriteW,
        d_regDataB,
        d_mul_alu,
        d_mul_div_sign,
        d_mul_high,
        d_is_mod,
        d_div_mod_alu,
        d_csr_data,
        d_csr_inst,
        D_pcAddr,
        d_loadu,
        d_take_bOrj,
        d_csr_en,
        d_csrAdd,
        d_csrWData,
        d_ertn,
        d_excp,
        d_excp_num,
        d_era,
        d_rdcnt_inst,
        rdcnt_val
      }),
      .q({
        E_aluSrc1,
        E_aluSrc2,
        E_regWAdd,
        E__regW,
        E_res_from_mem,
        E_aluOP,
        E_memReadE,
        E_memWriteE,
        E_memReadW,
        E_memWriteW,
        E_memWriteData,
        E_mul_alu,
        E_mul_div_sign,
        E_mul_high,
        E_is_mod,
        E_div_mod_alu,
        E_csr_data,
        E_csr_inst,
        E_pcAddr,
        E_loadu,
        E_take_bOrj,
        E_csr_en,
        E_csrAdd,
        E_csrWData,
        E_ertn,
        e_excp,
        e_excp_num,
        E_era,
        E_rdcnt_inst,
        E_rdcnt_val
      })
  );
  wire [31:0] aluResult;
  alu alu_init (
      .alu_op(E_aluOP),
      .alu_src1(E_aluSrc1),
      .alu_src2(E_aluSrc2),
      .alu_result(aluResult)
  );

  wire [63:0] mul_result;
  mul mul_inst (
      .mul_clk(clk),
      .reset(~resetn),
      .mul_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .result(mul_result)
  );

  wire [31:0] s;
  wire [31:0] r;
  div div_init (
      .div_clk(clk),
      .reset(~resetn),
      .div(E_div_mod_alu),
      .div_signed(E_mul_div_sign),
      .x(E_aluSrc1),
      .y(E_aluSrc2),
      .s(s),
      .r(r),
      .complete_delay(e_complete_delay)
  );


  wire [31:0] div_mod_res_reg = E_div_mod_alu ? (E_is_mod ? r : s) : (~(E_rdcnt_inst == 2'b00) ? E_rdcnt_val : aluResult);
  wire [31:0] e_csr_data = E_csr_inst ? E_csr_data : div_mod_res_reg;
  assign e_aluResult = E_mul_alu ? (E_mul_high ? mul_result[63:32] : mul_result[31:0]) : e_csr_data;

  wire [1:0] e_mem_size;
  assign e_mem_size[0] = ~E_memReadW[3] & ~E_memReadW[1] & E_memReadW[0] | ~E_memWriteW[3] & ~E_memWriteW[1] & E_memWriteW[0];
  assign e_mem_size[1] = ~E_memReadW[3] & E_memReadW[1] | ~E_memWriteW[3] & E_memWriteW[1];
  assign e_ALE_excp = (E_memReadE | E_memWriteE) & ((e_mem_size[0] &  1'b0)        | 
                                       (e_mem_size[1] &  aluResult[0])           | 
                                       (!e_mem_size   & (aluResult[0] | aluResult[1]))) ;
  assign E_excp = e_ALE_excp | e_excp;
  assign E_regW = E__regW & ~e_ALE_excp;  //当访存地址错误时，那么load就不写寄存器
  assign E_excp_num = {e_excp_num[7:2], e_ALE_excp, 1'b0};
  assign e_badv_add = e_ALE_excp ? aluResult : E_era;
  
endmodule

```

1.  当E\_rdcnt\_inst非全0时，选择E\_rdcnt\_val，否则选择aluResult
2.  根据读写存储位宽，判断ALE异常是否发生

    读写字数据时，地址4字节对齐——低两位全0

    读写半字数据时，地址2字节对齐——LSB为0

    读写字节数据时，地址1字节对齐——低两位任意，不会有ALE异常发生
3.  更新写寄存器信号——ALE异常发生时不再写寄存器
    更新excp和excp\_num信号
    更新写csr\_badv数据——csr\_badv是写取指地址错误的异常指令地址、写访存错误的访存地址

### 3.4 MEM阶段增量开发

```verilog
`timescale 1ns / 1ps
module MEM_stage (
    input clk,
    input resetn,
    input M_div_mod_stall,
    input M_expc_fresh,

    input [31:0] E_pcAddr,
    input [31:0] e_aluResult,
    input [4:0] E_regWAdd,
    input E_regW,
    input E_res_from_mem,
    input E_memReadE,
    E_memWriteE,
    input [3:0] E_memReadW,
    input [3:0] E_memWriteW,
    input [31:0] E_memWriteData,
    input [31:0] E_csr_data,
    input E_csr_inst,
    input E_loadu,
    input [13:0] E_csrAdd,
    input [31:0] E_csrWData,
    input E_csr_en,
    input E_ertn,
    input E_excp,
    input [7:0] E_excp_num,
    input [31:0] E_era,
    input [31:0] e_badv_add,

    input [31:0] memReadData,

    output M_memReadE,
    M_memWriteE,
    output [4:0] M_regWAdd,
    output M_regW,
    output M_res_from_mem,
    output [31:0] M_memAdd,
    output [31:0] M_aluResult,
    output [31:0] m_memReadData,
    output [31:0] m_memWriteData,
    output [31:0] M_pcAddr,
    output [31:0] M_csr_data,
    output M_csr_inst,
    output [13:0] M_csrAdd,
    output [31:0] M_csrWData,
    output M_csr_en,
    output M_ertn,
    output M_excp,
    output [7:0] M_excp_num,
    output [31:0] M_era,
    output [31:0] M_badv_add
);
  wire [31:0] M_memWriteData;
  wire [3:0] M_memReadW, M_memWriteW;
  wire M_loadu;
  wire m_memWriteE;

  parameter WIDTH = 332;
  flopenrc #(
      .WIDTH(WIDTH)
  ) u_flopenrc (
      .clk(clk),
      .rst(~resetn),
      .enable(~M_div_mod_stall),
      .clear(M_expc_fresh),
      .d({
        E_pcAddr,
        e_aluResult,
        E_regWAdd,
        E_regW,
        E_res_from_mem,
        E_memReadE,
        E_memWriteE,
        E_memReadW,
        E_memWriteW,
        E_memWriteData,
        E_csr_data,
        E_csr_inst,
        E_loadu,
        e_aluResult,
        E_csr_en,
        E_csrAdd,
        E_csrWData,
        E_ertn,
        E_excp,
        E_excp_num,
        E_era,
        e_badv_add
      }),
      .q({
        M_pcAddr,
        M_aluResult,
        M_regWAdd,
        M_regW,
        M_res_from_mem,
        M_memReadE,
        m_memWriteE,
        M_memReadW,
        M_memWriteW,
        M_memWriteData,
        M_csr_data,
        M_csr_inst,
        M_loadu,
        M_memAdd,
        M_csr_en,
        M_csrAdd,
        M_csrWData,
        M_ertn,
        M_excp,
        M_excp_num,
        M_era,
        M_badv_add
      })
  );


  wire [31:0] mem_byteStored = M_aluResult[1:0] == 2'b00 ? {memReadData[31:8],M_memWriteData[7:0]} :
                              (M_aluResult[1:0] == 2'b01 ? {memReadData[31:16],M_memWriteData[7:0],memReadData[7:0]} :
                              (M_aluResult[1:0] == 2'b10 ? {memReadData[31:24],M_memWriteData[7:0],memReadData[15:0]} :
                              {M_memWriteData[7:0],memReadData[23:0]}));
  wire [31:0] mem_halfStored = {32{M_aluResult[1:0] == 2'b00}} & {memReadData[31:16],M_memWriteData[15:0]} |
                               {32{M_aluResult[1:0] == 2'b10}} & {M_memWriteData[15:0],memReadData[15:0]};
  assign m_memWriteData = M_memWriteW[3] ? M_memWriteData : (M_memWriteW[1] ? mem_halfStored : mem_byteStored);

  wire [7:0] mem_byteLoaded = ({8{M_aluResult[1:0]==2'b00}} & memReadData[ 7: 0]) |
                            ({8{M_aluResult[1:0]==2'b01}} & memReadData[15: 8]) |
                            ({8{M_aluResult[1:0]==2'b10}} & memReadData[23:16]) |
                            ({8{M_aluResult[1:0]==2'b11}} & memReadData[31:24]) ;
  wire [15:0] mem_halfLoaded = ({16{M_aluResult[1:0]==2'b00}} & memReadData[15: 0]) |
                             ({16{M_aluResult[1:0]==2'b10}} & memReadData[31:16]) ;
  assign m_memReadData = M_memReadW[3] ? memReadData :
                         (M_memReadW[1] ? (M_loadu ? {16'b0,mem_halfLoaded} : {{16{mem_halfLoaded[15]}},mem_halfLoaded}) :
                         (M_memReadW[0] ? (M_loadu ? {24'b0,mem_byteLoaded} : {{24{mem_byteLoaded[7]}},mem_byteLoaded}) : 32'b0));
  assign M_memWriteE = m_memWriteE & ~M_excp_num[1];
endmodule

```

1.  增加了M\_era和M\_badv\_add的传递

    M\_era的增加是因为存在分支指令发生异常且采取分支，那么在下一个时钟周期，异常的地址是E\_pcAddr而不是D\_pcAddr

    M\_badv\_add的增加是写csr\_badv的选择
2.  增加了写存信号的设置，当ale异常发生时，不写存

### 3.5 WB阶段增量开发

```verilog
`timescale 1ns / 1ps

module WB_stage (
    input clk,
    input resetn,
    input W_div_mod_stall,
    input W_expc_fresh,

    input [31:0] M_aluResult,
    input M_regW,
    input M_res_from_mem,
    input [4:0] M_regWAdd,
    input [31:0] M_memReadData,
    input [31:0] M_csr_data,
    input M_csr_inst,
    input [31:0] M_pcAddr,
    input [13:0] M_csrAdd,
    input [31:0] M_csrWData,
    input M_csr_en,
    input M_ertn,
    input M_excp,
    input [7:0] M_excp_num,
    input [31:0] M_era,
    input [31:0] M_badv_add,

    output W_regW,
    output [4:0] W_regWAdd,
    output [31:0] w_regWData,
    output [31:0] W_pcAddr,
    output [13:0] W_csrAdd,
    output [31:0] W_csrWData,
    output W_csr_en,
    output W_ertn,
    output W_excp,
    output W_excp_or_ertn,
    output [7:0] W_excp_num,
    output [5:0] W_code,
    output [8:0] W_subcode,
    output [31:0] W_era,
    output [31:0] W_badv_pc,
    output W_excp_adef
);
  wire [31:0] W_aluResult;
  wire [31:0] W_memReadData;
  wire [31:0] W_csr_data;
  wire w_regW;
  wire W_res_from_mem;
  wire W_csr_inst;

  parameter WIDTH_WB = 267;
  flopenrc #(
      .WIDTH(WIDTH_WB)
  ) WB_init (
      .clk(clk),
      .rst(~resetn),
      .enable(~W_div_mod_stall),
      .clear(W_expc_fresh),
      .d({
        M_aluResult,
        M_regW,
        M_res_from_mem,
        M_regWAdd,
        M_memReadData,
        M_csr_data,
        M_csr_inst,
        M_pcAddr,
        M_csr_en,
        M_csrAdd,
        M_csrWData,
        M_ertn,
        M_excp,
        M_excp_num,
        M_era,
        M_badv_add
      }),
      .q({
        W_aluResult,
        w_regW,
        W_res_from_mem,
        W_regWAdd,
        W_memReadData,
        W_csr_data,
        W_csr_inst,
        W_pcAddr,
        W_csr_en,
        W_csrAdd,
        W_csrWData,
        W_ertn,
        W_excp,
        W_excp_num,
        W_era  //era是当前引起异常或者中断的PC
        , W_badv_pc
      })
  );
  assign W_regW = w_regW & ~W_div_mod_stall;
  assign w_regWData = W_res_from_mem ? W_memReadData : W_aluResult;
  assign W_code = {6{W_excp_num[1] & ~W_excp_num[2] & ~W_excp_num[3] & ~W_excp_num[4] & ~W_excp_num[5] & ~W_excp_num[6] & ~W_excp_num[7]}} & 6'h09 | 
                  {6{W_excp_num[2] & ~W_excp_num[3] & ~W_excp_num[4] & ~W_excp_num[5] & ~W_excp_num[6] & ~W_excp_num[7]}} & 6'h0e |
                  {6{W_excp_num[3] & ~W_excp_num[4] & ~W_excp_num[5] & ~W_excp_num[6] & ~W_excp_num[7]}} & 6'h0d | 
                  {6{W_excp_num[4] & ~W_excp_num[5] & ~W_excp_num[6] & ~W_excp_num[7]}} & 6'h0c |
                  {6{W_excp_num[5] & ~W_excp_num[6] & ~W_excp_num[7]}} & 6'h0b |
                  {6{W_excp_num[6] & ~W_excp_num[7]}} & 6'h08 |
                  {6{W_excp_num[7]}} & 6'h00; //数编号索引越大优先级越高

  assign W_subcode = 9'b0;
  assign W_excp_or_ertn = W_ertn | W_excp;
  assign W_excp_adef = W_excp_num[6] | W_excp_num[1];
endmodule

```

1.  写csr\_badv的信号W\_excp\_adef
2.  写csr\_stat的W\_code和W\_subcode

### 3.6 hazard模块增量开发

```verilog
`timescale 1ns / 1ps

module hazard (
    input [ 4:0] d_regAddA,
    input [ 4:0] d_regAddB,
    input [13:0] d_csrWAdd,

    input f_ADEF_excp,
    input d_inst_rdcntid,
    input e_ALE_excp,

    input  d_excp_or_ertn,
    // input  d_excp_tlbrefill,
    input  W_excp_or_ertn,
    // input  W_excp_tlbrefill,
    output F_excp_stall,
    output D_excp_stall,

    input E_div_mod_alu,
    input e_complete_delay,
    input E_res_from_mem,
    input M_res_from_mem,
    input d_branch,
    input E_regW,
    E_csr_en,
    input M_regW,
    M_csr_en,
    input W_regW,
    W_csr_en,
    input [4:0] E_regWAdd,
    input [13:0] E_csrWAdd,
    input [4:0] M_regWAdd,
    input [13:0] M_csrWAdd,
    input [4:0] W_regWAdd,
    input [13:0] W_csrWAdd,

    output F_stall,
    D_stall,
    E_fresh,
    F_div_mod_stall,
    D_div_mod_stall,
    E_div_mod_stall,
    M_div_mod_stall,
    W_div_mod_stall,
    M_expc_fresh,
    W_expc_fresh,

    output [1:0] D_forwardA,
    D_forwardB,
    D_forwardCSR,
    D_forwardTID
);
  wire lwStall, branchStall;
  assign D_forwardA = (E_regWAdd == d_regAddA) & d_regAddA != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_regW ? 2'b01 : 2'b00);

  assign D_forwardB = (E_regWAdd == d_regAddB) & d_regAddB != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_regW ? 2'b01 : 2'b00);
  assign D_forwardCSR = (E_csrWAdd == d_csrWAdd) & E_csr_en ? 2'b11 : 
                      ((M_csrWAdd == d_csrWAdd) & M_csr_en ? 2'b10 :
                      (W_csrWAdd == d_csrWAdd) & W_csr_en ? 2'b01 : 2'b00);
  assign D_forwardTID = d_inst_rdcntid & (E_csrWAdd == 14'h40) & E_csr_en ? 2'b11:
                        (d_inst_rdcntid & (M_csrWAdd == 14'h40) & M_csr_en ? 2'b10 :
                        (d_inst_rdcntid & (W_csrWAdd == 14'h40) & W_csr_en  ? 2'b01 :
                        2'b00));
  //稍微的处理延迟——便于观察
  //load id和exe
  //branch 判断寄存器分支——rj和rk
  assign #1 lwStall = (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd) & E_res_from_mem;
  //在clk下降沿写寄存器，上升沿读——先写后读，所以是1->0->1 d取操作数但是
  // assign #1 branchStall = d_branch & 
  //                       (E_regW & (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd)|
  //                       M_res_from_mem & (d_regAddA == M_regWAdd | d_regAddB == M_regWAdd));
  assign #1 D_stall = lwStall;
  assign #1 F_stall = D_stall;
  assign #1 E_fresh = D_stall | W_excp_or_ertn;
  assign #1 D_div_mod_stall = E_div_mod_alu & ~e_complete_delay;
  assign #1 F_div_mod_stall = D_div_mod_stall;
  assign #1 E_div_mod_stall = D_div_mod_stall | e_ALE_excp;
  assign #1 M_div_mod_stall = D_div_mod_stall;
  assign #1 W_div_mod_stall = D_div_mod_stall;
  assign #1 D_excp_stall = ~W_excp_or_ertn & (d_excp_or_ertn | e_ALE_excp);
  assign #1 F_excp_stall = D_excp_stall | (f_ADEF_excp & ~W_excp_or_ertn);
  assign #1 W_expc_fresh = W_excp_or_ertn;
  assign #1 M_expc_fresh = W_expc_fresh;
endmodule

```

1.  触发ADEF异常时，阻塞IF阶段
    触发ALE异常，阻塞IF、ID、EXE
2.  TID数据的前递
3.  因为流水线的前递是发生在前半段，所以并不需要图中的branchstall，省去以后流水线的效率有提高

## 4 重点记录

1.  旧的CSR不只是译码时读，在后面的3个周期都可以读，或者说也涉及到了前递
2.  CSR数据与GR数据之间的前递
3.  异常/中断阻塞IF、ID，清空EXE、MEM、WB，并清空下一个周期的EXE
4.  5'b0寄存器不前递
5.  异常的优先级

    取指大于译码大于执行
6.  取消f\_adef\_excp导致的F\_excp\_stall

    assign #1 F\_excp\_stall = D\_excp\_stall | (f\_ADEF\_excp & \~W\_excp\_or\_ertn);

[^注释1]: 是否需要复位TCFG.EN还不知道
