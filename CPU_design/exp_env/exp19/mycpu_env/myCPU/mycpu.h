`define TLB_NUM 16
`define IF_TO_ID_WD 68
`define ID_TO_IF_WD 34
`define ID_TO_EXE_WD 199
`define EXE_TO_MEM_WD 176
`define MEM_TO_WB_WD 70
`define WB_TO_ID_WD 71
`define EXE_TO_ID_WD 41
`define MEM_TO_ID_WD 72
`define MEM_TO_CSR_WD 247 + $clog2(`TLB_NUM)
`define CSR_TO_MEM_WD 217 + $clog2(`TLB_NUM)
`define MEM_TO_IF_WD 36
`define CSR_TO_IF_WD 124
`define CSR_TO_EXE_WD 47
`define EXE_TO_TLB_WD 36
`define TLB_TO_MEM_WD 90 + $clog2(`TLB_NUM)
`define MEM_TO_TLB_WD 90 + $clog2(`TLB_NUM) + $clog2(`TLB_NUM)
`define TLB_TO_IF_WD 33 + $clog2(`TLB_NUM)
`define IF_TO_TLB_WD 30