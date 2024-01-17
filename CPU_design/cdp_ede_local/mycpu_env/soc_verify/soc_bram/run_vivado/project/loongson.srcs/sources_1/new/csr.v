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
                 {32{d_csrAdd == ERA   }}  & csr_era	    |
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
