`define TLB_NUM 32
`define IF_TO_ID_WD 68
`define ID_TO_IF_WD 34
`define ID_TO_EXE_WD 255
`define EXE_TO_MEM_WD 296 + $clog2(`TLB_NUM)
`define MEM_TO_WB_WD 102
`define WB_TO_ID_WD 71
`define EXE_TO_ID_WD 45
`define MEM_TO_ID_WD 72
`define MEM_TO_CSR_WD 249 + $clog2(`TLB_NUM)
`define CSR_TO_MEM_WD 217 + $clog2(`TLB_NUM)
`define MEM_TO_IF_WD 43
`define CSR_TO_IF_WD 129
`define CSR_TO_EXE_WD 52
`define EXE_TO_TLB_WD 36
`define TLB_TO_MEM_WD 89
`define MEM_TO_TLB_WD 90 + $clog2(`TLB_NUM) + $clog2(`TLB_NUM)
`define TLB_TO_IF_WD 33 + $clog2(`TLB_NUM)
`define IF_TO_TLB_WD 30