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
