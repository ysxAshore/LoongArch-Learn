`include "mycpu.h"
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
`define INDEX $clog2(`TLB_NUM)-1:0
`define PS 29:24
`define NE 31

//TLBEHI
`define VPPN 31:13

//TLBELO PALEN=32
`define TLB_V 0
`define TLB_D 1
`define TLB_PLV 3:2
`define TLB_MAT 5:4
`define TLB_G 6
`define TLB_PPN 27:8

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
