// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSIMU_TOP__DPI_H_
#define VERILATED_VSIMU_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ../testbench/difftest.v:185:3
    extern void v_difftest_CSRRegState(char coreid, long long crmd, long long prmd, long long euen, long long ecfg, long long estat, long long era, long long badv, long long eentry, long long tlbidx, long long tlbehi, long long tlbelo0, long long tlbelo1, long long asid, long long pgdl, long long pgdh, long long save0, long long save1, long long save2, long long save3, long long tid, long long tcfg, long long tval, long long ticlr, long long llbctl, long long tlbrentry, long long dmw0, long long dmw1);
    // DPI import at ../testbench/difftest.v:92:3
    extern void v_difftest_ExcpEvent(char coreid, char excp_valid, svBit eret, int intrNo, int cause, long long exceptionPC, int exceptionInst);
    // DPI import at ../testbench/difftest.v:255:3
    extern void v_difftest_GRegState(char coreid, long long gpr_0, long long gpr_1, long long gpr_2, long long gpr_3, long long gpr_4, long long gpr_5, long long gpr_6, long long gpr_7, long long gpr_8, long long gpr_9, long long gpr_10, long long gpr_11, long long gpr_12, long long gpr_13, long long gpr_14, long long gpr_15, long long gpr_16, long long gpr_17, long long gpr_18, long long gpr_19, long long gpr_20, long long gpr_21, long long gpr_22, long long gpr_23, long long gpr_24, long long gpr_25, long long gpr_26, long long gpr_27, long long gpr_28, long long gpr_29, long long gpr_30, long long gpr_31);
    // DPI import at ../testbench/difftest.v:50:3
    extern void v_difftest_InstrCommit(char coreid, char index, svBit valid, long long pc, int instr, svBit skip, svBit is_TLBFILL, char TLBFILL_index, svBit is_CNTinst, long long timer_64_value, svBit wen, char wdest, long long wdata, svBit csr_rstat, int csr_data);
    // DPI import at ../testbench/difftest.v:164:3
    extern void v_difftest_LoadEvent(char coreid, char index, char valid, long long paddr, long long vaddr);
    // DPI import at ../testbench/difftest.v:140:3
    extern void v_difftest_StoreEvent(char coreid, char index, char valid, long long storePAddr, long long storeVAddr, long long storeData);
    // DPI import at ../testbench/difftest.v:117:3
    extern void v_difftest_TrapEvent(char coreid, svBit valid, char code, long long pc, long long cycleCnt, long long instrCnt);

#ifdef __cplusplus
}
#endif

#endif  // guard
