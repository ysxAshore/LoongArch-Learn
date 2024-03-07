`define TLB_NUM 16
`define IF_TO_ID_WD 65
`define ID_TO_IF_WD 34
`define ID_TO_EXE_WD 191
`define EXE_TO_MEM_WD 168
`define MEM_TO_WB_WD 70
`define WB_TO_ID_WD 71
`define EXE_TO_ID_WD 41
`define MEM_TO_ID_WD 72
`define MEM_TO_CSR_WD 245 + $clog2(`TLB_NUM)
`define CSR_TO_MEM_WD 217 + $clog2(`TLB_NUM)
`define MEM_TO_IF_WD 35
`define CSR_TO_IF_WD 64
`define CSR_TO_EXE_WD 29
`define EXE_TO_TLB_WD 36
`define TLB_TO_MEM_WD 90 + $clog2(`TLB_NUM)
`define MEM_TO_TLB_WD 90 + $clog2(`TLB_NUM) + $clog2(`TLB_NUM)