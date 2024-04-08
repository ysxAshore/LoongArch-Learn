`timescale 1ns / 1ps
`include "mycpu.h"

module mem_stage (
    input wire clk,
    input wire resetn,

    //与上一级流水线通讯的流水线控制信号
    output wire mem_allowin,
    input wire exe_to_mem_valid,
    input wire [`EXE_TO_MEM_WD-1:0] exe_to_mem_bus,

    //与下一级流水线通讯的流水线控制信号
    input wire wb_allowin,
    output wire mem_to_wb_valid,
    output wire [`MEM_TO_WB_WD-1:0] mem_to_wb_bus,

    //传递给id阶段的RAW相关判断
    output wire [`MEM_TO_ID_WD-1:0] mem_to_id_bus,

    //传递给CSR阶段的信号
    output wire [`MEM_TO_CSR_WD-1:0] mem_to_csr_bus,

    //dataRAM读数据
    input wire [31:0] data_sram_rdata,
    input wire data_sram_data_ok,

    //CSR传递过来的信号 csrRData、tid_out、timer_64_out
    input wire [`CSR_TO_MEM_WD-1:0] csr_to_mem_bus,

    //传递给EXE的刷新信号
    output wire mem_to_exe_flush_excp_ertn,

    //传递给ID的刷新信号
    output wire mem_to_id_flush_excp_ertn,

    //传递给IF的preIF
    output wire [`MEM_TO_IF_WD-1:0] mem_to_if_bus

);

  // mem_reg
  reg mem_valid;
  wire mem_ready_go;
  reg [`EXE_TO_MEM_WD-1:0] mem_data;
  wire flush_excp_ertn;

  assign mem_ready_go = ~((mem_memW | res_from_mem) & ~data_sram_data_ok);
  assign mem_allowin = ~mem_valid | mem_ready_go & wb_allowin;
  assign mem_to_wb_valid = mem_ready_go & mem_valid;
  always @(posedge clk) begin
    if (~resetn | flush_excp_ertn) begin
      mem_valid <= 1'b0;
    end else if (mem_allowin) begin
      mem_valid <= exe_to_mem_valid;
    end
    if (mem_allowin & exe_to_mem_valid) begin
      mem_data <= exe_to_mem_bus;
    end
  end

  //拆解mem_reg数据
  wire mem_memW;
  wire mem_regW;
  wire [4:0] mem_regWAddr;
  wire res_from_mem;
  wire [31:0] mem_aluResult;
  wire [1:0] memINS_rec;
  wire load_sign;
  wire [31:0] DataA;
  wire [31:0] DataB;
  wire [13:0] csr_num;
  wire [1:0] csr_instRec;
  wire mem_excp;
  wire mem_ertn;
  wire [5:0] excp_num;
  wire [1:0] rdcnt_REC;
  wire [31:0] mem_pc;

  assign {mem_memW,mem_regW, mem_regWAddr, res_from_mem, mem_aluResult, memINS_rec, load_sign, DataA, DataB, 
          csr_num, csr_instRec, mem_excp, mem_ertn, excp_num, rdcnt_REC, mem_pc} = mem_data;

  //拆解CSR传递过来的数据
  wire [31:0] csrRData;
  wire [31:0] tid_out;
  wire [63:0] timer_64_out;

  assign {csrRData, tid_out, timer_64_out} = csr_to_mem_bus;

  //获得访存数据
  wire [31:0] mem_memReadData;
  wire [ 7:0] byteReadData = ({8{mem_aluResult[1:0]==2'b00}} & data_sram_rdata[ 7: 0]) |
                            ({8{mem_aluResult[1:0]==2'b01}} & data_sram_rdata[15: 8]) |
                            ({8{mem_aluResult[1:0]==2'b10}} & data_sram_rdata[23:16]) |
                            ({8{mem_aluResult[1:0]==2'b11}} & data_sram_rdata[31:24]) ;
  wire [15:0] halfReadData = ({16{mem_aluResult[1:0]==2'b00}} & data_sram_rdata[15: 0]) |
                             ({16{mem_aluResult[1:0]==2'b10}} & data_sram_rdata[31:16]) ;

  assign mem_memReadData = {32{memINS_rec == 2'b01}} & {{24{load_sign & byteReadData[7]}},byteReadData} |
                           {32{memINS_rec == 2'b10}} & {{16{load_sign & halfReadData[15]}},halfReadData} |
                           {32{memINS_rec == 2'b11}} & data_sram_rdata;

  //处理csr指令
  wire [13:0] csrRAdd;
  wire csrWen;
  wire excpAboutAddr;
  wire [13:0] csrWAdd;
  wire [31:0] csrWData;
  wire [8:0] subcode;
  wire [5:0] code;
  wire [31:0] era;
  wire [31:0] badv_addr;

  assign csrRAdd = csr_num;
  assign csrWen = (csr_instRec == 2'b10 | csr_instRec == 2'b11) & mem_valid;
  assign csrWAdd = csr_num;
  assign csrWData = csr_instRec == 2'b10 ? DataB : 
                    csr_instRec == 2'b11 ? DataB & DataA | ~DataA & csrRData : 32'b0;
  assign excpAboutAddr = excp_num[1] | excp_num[5];
  assign badv_addr = excp_num[5] ? mem_pc : mem_aluResult;
  assign subcode = 9'b0;
  assign code = excp_num[5] ? 6'h08 :
                excp_num[4] ? 6'h0B :
                excp_num[3] ? 6'h0C :
                excp_num[2] ? 6'h0D :
                excp_num[1] ? 6'h09 :
                6'h0;
  assign era = mem_pc;

  //写reg数据
  wire [31:0] mem_regWData = rdcnt_REC == 2'b01 ? tid_out :
                             rdcnt_REC == 2'b10 ? timer_64_out[31:0] :
                             rdcnt_REC == 2'b11 ? timer_64_out[63:32]:
                             res_from_mem ? mem_memReadData : 
                             csr_instRec == 2'b0 ? mem_aluResult : csrRData;

  //触发异常、ertn则刷新ID、EXE，并置preIF的next为新值
  assign flush_excp_ertn = (mem_excp | mem_ertn) & mem_valid;
  assign mem_to_id_flush_excp_ertn = flush_excp_ertn;
  assign mem_to_exe_flush_excp_ertn = flush_excp_ertn;
  assign mem_to_if_bus = {mem_valid & mem_excp, mem_valid & mem_ertn};

  //封包传递给wb_reg数据
  assign mem_to_wb_bus = {mem_regW, mem_valid ? mem_regWAddr : 5'b0, mem_regWData, mem_pc};

  //封包传递给CSR的数据
  assign mem_to_csr_bus = {
    csrRAdd,
    csrWen & mem_valid,
    csrWAdd,
    csrWData,
    mem_excp & mem_valid,
    mem_ertn & mem_valid,
    era,
    subcode,
    code,
    excpAboutAddr & mem_valid,
    badv_addr
  };

  //封包传递给id阶段的数据
  assign mem_to_id_bus = {
    mem_ready_go, mem_to_wb_valid, mem_regW, mem_regWAddr, mem_regWData, mem_pc
  };
endmodule
