// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024unit.h"

extern "C" void v_difftest_InstrCommit(char coreid, char index, svBit valid, long long pc, int instr, svBit skip, svBit is_TLBFILL, char TLBFILL_index, svBit is_CNTinst, long long timer_64_value, svBit wen, char wdest, long long wdata, svBit csr_rstat, int csr_data);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ is_TLBFILL, CData/*7:0*/ TLBFILL_index, CData/*0:0*/ is_CNTinst, QData/*63:0*/ timer_64_value, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata, CData/*0:0*/ csr_rstat, IData/*31:0*/ csr_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int instr__Vcvt;
    for (size_t instr__Vidx = 0; instr__Vidx < 1; ++instr__Vidx) instr__Vcvt = instr;
    svBit skip__Vcvt;
    for (size_t skip__Vidx = 0; skip__Vidx < 1; ++skip__Vidx) skip__Vcvt = skip;
    svBit is_TLBFILL__Vcvt;
    for (size_t is_TLBFILL__Vidx = 0; is_TLBFILL__Vidx < 1; ++is_TLBFILL__Vidx) is_TLBFILL__Vcvt = is_TLBFILL;
    char TLBFILL_index__Vcvt;
    for (size_t TLBFILL_index__Vidx = 0; TLBFILL_index__Vidx < 1; ++TLBFILL_index__Vidx) TLBFILL_index__Vcvt = TLBFILL_index;
    svBit is_CNTinst__Vcvt;
    for (size_t is_CNTinst__Vidx = 0; is_CNTinst__Vidx < 1; ++is_CNTinst__Vidx) is_CNTinst__Vcvt = is_CNTinst;
    long long timer_64_value__Vcvt;
    for (size_t timer_64_value__Vidx = 0; timer_64_value__Vidx < 1; ++timer_64_value__Vidx) timer_64_value__Vcvt = timer_64_value;
    svBit wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    char wdest__Vcvt;
    for (size_t wdest__Vidx = 0; wdest__Vidx < 1; ++wdest__Vidx) wdest__Vcvt = wdest;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    svBit csr_rstat__Vcvt;
    for (size_t csr_rstat__Vidx = 0; csr_rstat__Vidx < 1; ++csr_rstat__Vidx) csr_rstat__Vcvt = csr_rstat;
    int csr_data__Vcvt;
    for (size_t csr_data__Vidx = 0; csr_data__Vidx < 1; ++csr_data__Vidx) csr_data__Vcvt = csr_data;
    v_difftest_InstrCommit(coreid__Vcvt, index__Vcvt, valid__Vcvt, pc__Vcvt, instr__Vcvt, skip__Vcvt, is_TLBFILL__Vcvt, TLBFILL_index__Vcvt, is_CNTinst__Vcvt, timer_64_value__Vcvt, wen__Vcvt, wdest__Vcvt, wdata__Vcvt, csr_rstat__Vcvt, csr_data__Vcvt);
}

extern "C" void v_difftest_ExcpEvent(char coreid, char excp_valid, svBit eret, int intrNo, int cause, long long exceptionPC, int exceptionInst);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ excp_valid, CData/*0:0*/ eret, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, IData/*31:0*/ exceptionInst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char excp_valid__Vcvt;
    for (size_t excp_valid__Vidx = 0; excp_valid__Vidx < 1; ++excp_valid__Vidx) excp_valid__Vcvt = excp_valid;
    svBit eret__Vcvt;
    for (size_t eret__Vidx = 0; eret__Vidx < 1; ++eret__Vidx) eret__Vcvt = eret;
    int intrNo__Vcvt;
    for (size_t intrNo__Vidx = 0; intrNo__Vidx < 1; ++intrNo__Vidx) intrNo__Vcvt = intrNo;
    int cause__Vcvt;
    for (size_t cause__Vidx = 0; cause__Vidx < 1; ++cause__Vidx) cause__Vcvt = cause;
    long long exceptionPC__Vcvt;
    for (size_t exceptionPC__Vidx = 0; exceptionPC__Vidx < 1; ++exceptionPC__Vidx) exceptionPC__Vcvt = exceptionPC;
    int exceptionInst__Vcvt;
    for (size_t exceptionInst__Vidx = 0; exceptionInst__Vidx < 1; ++exceptionInst__Vidx) exceptionInst__Vcvt = exceptionInst;
    v_difftest_ExcpEvent(coreid__Vcvt, excp_valid__Vcvt, eret__Vcvt, intrNo__Vcvt, cause__Vcvt, exceptionPC__Vcvt, exceptionInst__Vcvt);
}

extern "C" void v_difftest_TrapEvent(char coreid, svBit valid, char code, long long pc, long long cycleCnt, long long instrCnt);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    char code__Vcvt;
    for (size_t code__Vidx = 0; code__Vidx < 1; ++code__Vidx) code__Vcvt = code;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long cycleCnt__Vcvt;
    for (size_t cycleCnt__Vidx = 0; cycleCnt__Vidx < 1; ++cycleCnt__Vidx) cycleCnt__Vcvt = cycleCnt;
    long long instrCnt__Vcvt;
    for (size_t instrCnt__Vidx = 0; instrCnt__Vidx < 1; ++instrCnt__Vidx) instrCnt__Vcvt = instrCnt;
    v_difftest_TrapEvent(coreid__Vcvt, valid__Vcvt, code__Vcvt, pc__Vcvt, cycleCnt__Vcvt, instrCnt__Vcvt);
}

extern "C" void v_difftest_StoreEvent(char coreid, char index, char valid, long long storePAddr, long long storeVAddr, long long storeData);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ storePAddr, QData/*63:0*/ storeVAddr, QData/*63:0*/ storeData) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    char valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long storePAddr__Vcvt;
    for (size_t storePAddr__Vidx = 0; storePAddr__Vidx < 1; ++storePAddr__Vidx) storePAddr__Vcvt = storePAddr;
    long long storeVAddr__Vcvt;
    for (size_t storeVAddr__Vidx = 0; storeVAddr__Vidx < 1; ++storeVAddr__Vidx) storeVAddr__Vcvt = storeVAddr;
    long long storeData__Vcvt;
    for (size_t storeData__Vidx = 0; storeData__Vidx < 1; ++storeData__Vidx) storeData__Vcvt = storeData;
    v_difftest_StoreEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, storePAddr__Vcvt, storeVAddr__Vcvt, storeData__Vcvt);
}

extern "C" void v_difftest_LoadEvent(char coreid, char index, char valid, long long paddr, long long vaddr);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ paddr, QData/*63:0*/ vaddr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    char valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long paddr__Vcvt;
    for (size_t paddr__Vidx = 0; paddr__Vidx < 1; ++paddr__Vidx) paddr__Vcvt = paddr;
    long long vaddr__Vcvt;
    for (size_t vaddr__Vidx = 0; vaddr__Vidx < 1; ++vaddr__Vidx) vaddr__Vcvt = vaddr;
    v_difftest_LoadEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, paddr__Vcvt, vaddr__Vcvt);
}

extern "C" void v_difftest_CSRRegState(char coreid, long long crmd, long long prmd, long long euen, long long ecfg, long long estat, long long era, long long badv, long long eentry, long long tlbidx, long long tlbehi, long long tlbelo0, long long tlbelo1, long long asid, long long pgdl, long long pgdh, long long save0, long long save1, long long save2, long long save3, long long tid, long long tcfg, long long tval, long long ticlr, long long llbctl, long long tlbrentry, long long dmw0, long long dmw1);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ crmd, QData/*63:0*/ prmd, QData/*63:0*/ euen, QData/*63:0*/ ecfg, QData/*63:0*/ estat, QData/*63:0*/ era, QData/*63:0*/ badv, QData/*63:0*/ eentry, QData/*63:0*/ tlbidx, QData/*63:0*/ tlbehi, QData/*63:0*/ tlbelo0, QData/*63:0*/ tlbelo1, QData/*63:0*/ asid, QData/*63:0*/ pgdl, QData/*63:0*/ pgdh, QData/*63:0*/ save0, QData/*63:0*/ save1, QData/*63:0*/ save2, QData/*63:0*/ save3, QData/*63:0*/ tid, QData/*63:0*/ tcfg, QData/*63:0*/ tval, QData/*63:0*/ ticlr, QData/*63:0*/ llbctl, QData/*63:0*/ tlbrentry, QData/*63:0*/ dmw0, QData/*63:0*/ dmw1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    long long crmd__Vcvt;
    for (size_t crmd__Vidx = 0; crmd__Vidx < 1; ++crmd__Vidx) crmd__Vcvt = crmd;
    long long prmd__Vcvt;
    for (size_t prmd__Vidx = 0; prmd__Vidx < 1; ++prmd__Vidx) prmd__Vcvt = prmd;
    long long euen__Vcvt;
    for (size_t euen__Vidx = 0; euen__Vidx < 1; ++euen__Vidx) euen__Vcvt = euen;
    long long ecfg__Vcvt;
    for (size_t ecfg__Vidx = 0; ecfg__Vidx < 1; ++ecfg__Vidx) ecfg__Vcvt = ecfg;
    long long estat__Vcvt;
    for (size_t estat__Vidx = 0; estat__Vidx < 1; ++estat__Vidx) estat__Vcvt = estat;
    long long era__Vcvt;
    for (size_t era__Vidx = 0; era__Vidx < 1; ++era__Vidx) era__Vcvt = era;
    long long badv__Vcvt;
    for (size_t badv__Vidx = 0; badv__Vidx < 1; ++badv__Vidx) badv__Vcvt = badv;
    long long eentry__Vcvt;
    for (size_t eentry__Vidx = 0; eentry__Vidx < 1; ++eentry__Vidx) eentry__Vcvt = eentry;
    long long tlbidx__Vcvt;
    for (size_t tlbidx__Vidx = 0; tlbidx__Vidx < 1; ++tlbidx__Vidx) tlbidx__Vcvt = tlbidx;
    long long tlbehi__Vcvt;
    for (size_t tlbehi__Vidx = 0; tlbehi__Vidx < 1; ++tlbehi__Vidx) tlbehi__Vcvt = tlbehi;
    long long tlbelo0__Vcvt;
    for (size_t tlbelo0__Vidx = 0; tlbelo0__Vidx < 1; ++tlbelo0__Vidx) tlbelo0__Vcvt = tlbelo0;
    long long tlbelo1__Vcvt;
    for (size_t tlbelo1__Vidx = 0; tlbelo1__Vidx < 1; ++tlbelo1__Vidx) tlbelo1__Vcvt = tlbelo1;
    long long asid__Vcvt;
    for (size_t asid__Vidx = 0; asid__Vidx < 1; ++asid__Vidx) asid__Vcvt = asid;
    long long pgdl__Vcvt;
    for (size_t pgdl__Vidx = 0; pgdl__Vidx < 1; ++pgdl__Vidx) pgdl__Vcvt = pgdl;
    long long pgdh__Vcvt;
    for (size_t pgdh__Vidx = 0; pgdh__Vidx < 1; ++pgdh__Vidx) pgdh__Vcvt = pgdh;
    long long save0__Vcvt;
    for (size_t save0__Vidx = 0; save0__Vidx < 1; ++save0__Vidx) save0__Vcvt = save0;
    long long save1__Vcvt;
    for (size_t save1__Vidx = 0; save1__Vidx < 1; ++save1__Vidx) save1__Vcvt = save1;
    long long save2__Vcvt;
    for (size_t save2__Vidx = 0; save2__Vidx < 1; ++save2__Vidx) save2__Vcvt = save2;
    long long save3__Vcvt;
    for (size_t save3__Vidx = 0; save3__Vidx < 1; ++save3__Vidx) save3__Vcvt = save3;
    long long tid__Vcvt;
    for (size_t tid__Vidx = 0; tid__Vidx < 1; ++tid__Vidx) tid__Vcvt = tid;
    long long tcfg__Vcvt;
    for (size_t tcfg__Vidx = 0; tcfg__Vidx < 1; ++tcfg__Vidx) tcfg__Vcvt = tcfg;
    long long tval__Vcvt;
    for (size_t tval__Vidx = 0; tval__Vidx < 1; ++tval__Vidx) tval__Vcvt = tval;
    long long ticlr__Vcvt;
    for (size_t ticlr__Vidx = 0; ticlr__Vidx < 1; ++ticlr__Vidx) ticlr__Vcvt = ticlr;
    long long llbctl__Vcvt;
    for (size_t llbctl__Vidx = 0; llbctl__Vidx < 1; ++llbctl__Vidx) llbctl__Vcvt = llbctl;
    long long tlbrentry__Vcvt;
    for (size_t tlbrentry__Vidx = 0; tlbrentry__Vidx < 1; ++tlbrentry__Vidx) tlbrentry__Vcvt = tlbrentry;
    long long dmw0__Vcvt;
    for (size_t dmw0__Vidx = 0; dmw0__Vidx < 1; ++dmw0__Vidx) dmw0__Vcvt = dmw0;
    long long dmw1__Vcvt;
    for (size_t dmw1__Vidx = 0; dmw1__Vidx < 1; ++dmw1__Vidx) dmw1__Vcvt = dmw1;
    v_difftest_CSRRegState(coreid__Vcvt, crmd__Vcvt, prmd__Vcvt, euen__Vcvt, ecfg__Vcvt, estat__Vcvt, era__Vcvt, badv__Vcvt, eentry__Vcvt, tlbidx__Vcvt, tlbehi__Vcvt, tlbelo0__Vcvt, tlbelo1__Vcvt, asid__Vcvt, pgdl__Vcvt, pgdh__Vcvt, save0__Vcvt, save1__Vcvt, save2__Vcvt, save3__Vcvt, tid__Vcvt, tcfg__Vcvt, tval__Vcvt, ticlr__Vcvt, llbctl__Vcvt, tlbrentry__Vcvt, dmw0__Vcvt, dmw1__Vcvt);
}

extern "C" void v_difftest_GRegState(char coreid, long long gpr_0, long long gpr_1, long long gpr_2, long long gpr_3, long long gpr_4, long long gpr_5, long long gpr_6, long long gpr_7, long long gpr_8, long long gpr_9, long long gpr_10, long long gpr_11, long long gpr_12, long long gpr_13, long long gpr_14, long long gpr_15, long long gpr_16, long long gpr_17, long long gpr_18, long long gpr_19, long long gpr_20, long long gpr_21, long long gpr_22, long long gpr_23, long long gpr_24, long long gpr_25, long long gpr_26, long long gpr_27, long long gpr_28, long long gpr_29, long long gpr_30, long long gpr_31);

VL_INLINE_OPT void Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    long long gpr_0__Vcvt;
    for (size_t gpr_0__Vidx = 0; gpr_0__Vidx < 1; ++gpr_0__Vidx) gpr_0__Vcvt = gpr_0;
    long long gpr_1__Vcvt;
    for (size_t gpr_1__Vidx = 0; gpr_1__Vidx < 1; ++gpr_1__Vidx) gpr_1__Vcvt = gpr_1;
    long long gpr_2__Vcvt;
    for (size_t gpr_2__Vidx = 0; gpr_2__Vidx < 1; ++gpr_2__Vidx) gpr_2__Vcvt = gpr_2;
    long long gpr_3__Vcvt;
    for (size_t gpr_3__Vidx = 0; gpr_3__Vidx < 1; ++gpr_3__Vidx) gpr_3__Vcvt = gpr_3;
    long long gpr_4__Vcvt;
    for (size_t gpr_4__Vidx = 0; gpr_4__Vidx < 1; ++gpr_4__Vidx) gpr_4__Vcvt = gpr_4;
    long long gpr_5__Vcvt;
    for (size_t gpr_5__Vidx = 0; gpr_5__Vidx < 1; ++gpr_5__Vidx) gpr_5__Vcvt = gpr_5;
    long long gpr_6__Vcvt;
    for (size_t gpr_6__Vidx = 0; gpr_6__Vidx < 1; ++gpr_6__Vidx) gpr_6__Vcvt = gpr_6;
    long long gpr_7__Vcvt;
    for (size_t gpr_7__Vidx = 0; gpr_7__Vidx < 1; ++gpr_7__Vidx) gpr_7__Vcvt = gpr_7;
    long long gpr_8__Vcvt;
    for (size_t gpr_8__Vidx = 0; gpr_8__Vidx < 1; ++gpr_8__Vidx) gpr_8__Vcvt = gpr_8;
    long long gpr_9__Vcvt;
    for (size_t gpr_9__Vidx = 0; gpr_9__Vidx < 1; ++gpr_9__Vidx) gpr_9__Vcvt = gpr_9;
    long long gpr_10__Vcvt;
    for (size_t gpr_10__Vidx = 0; gpr_10__Vidx < 1; ++gpr_10__Vidx) gpr_10__Vcvt = gpr_10;
    long long gpr_11__Vcvt;
    for (size_t gpr_11__Vidx = 0; gpr_11__Vidx < 1; ++gpr_11__Vidx) gpr_11__Vcvt = gpr_11;
    long long gpr_12__Vcvt;
    for (size_t gpr_12__Vidx = 0; gpr_12__Vidx < 1; ++gpr_12__Vidx) gpr_12__Vcvt = gpr_12;
    long long gpr_13__Vcvt;
    for (size_t gpr_13__Vidx = 0; gpr_13__Vidx < 1; ++gpr_13__Vidx) gpr_13__Vcvt = gpr_13;
    long long gpr_14__Vcvt;
    for (size_t gpr_14__Vidx = 0; gpr_14__Vidx < 1; ++gpr_14__Vidx) gpr_14__Vcvt = gpr_14;
    long long gpr_15__Vcvt;
    for (size_t gpr_15__Vidx = 0; gpr_15__Vidx < 1; ++gpr_15__Vidx) gpr_15__Vcvt = gpr_15;
    long long gpr_16__Vcvt;
    for (size_t gpr_16__Vidx = 0; gpr_16__Vidx < 1; ++gpr_16__Vidx) gpr_16__Vcvt = gpr_16;
    long long gpr_17__Vcvt;
    for (size_t gpr_17__Vidx = 0; gpr_17__Vidx < 1; ++gpr_17__Vidx) gpr_17__Vcvt = gpr_17;
    long long gpr_18__Vcvt;
    for (size_t gpr_18__Vidx = 0; gpr_18__Vidx < 1; ++gpr_18__Vidx) gpr_18__Vcvt = gpr_18;
    long long gpr_19__Vcvt;
    for (size_t gpr_19__Vidx = 0; gpr_19__Vidx < 1; ++gpr_19__Vidx) gpr_19__Vcvt = gpr_19;
    long long gpr_20__Vcvt;
    for (size_t gpr_20__Vidx = 0; gpr_20__Vidx < 1; ++gpr_20__Vidx) gpr_20__Vcvt = gpr_20;
    long long gpr_21__Vcvt;
    for (size_t gpr_21__Vidx = 0; gpr_21__Vidx < 1; ++gpr_21__Vidx) gpr_21__Vcvt = gpr_21;
    long long gpr_22__Vcvt;
    for (size_t gpr_22__Vidx = 0; gpr_22__Vidx < 1; ++gpr_22__Vidx) gpr_22__Vcvt = gpr_22;
    long long gpr_23__Vcvt;
    for (size_t gpr_23__Vidx = 0; gpr_23__Vidx < 1; ++gpr_23__Vidx) gpr_23__Vcvt = gpr_23;
    long long gpr_24__Vcvt;
    for (size_t gpr_24__Vidx = 0; gpr_24__Vidx < 1; ++gpr_24__Vidx) gpr_24__Vcvt = gpr_24;
    long long gpr_25__Vcvt;
    for (size_t gpr_25__Vidx = 0; gpr_25__Vidx < 1; ++gpr_25__Vidx) gpr_25__Vcvt = gpr_25;
    long long gpr_26__Vcvt;
    for (size_t gpr_26__Vidx = 0; gpr_26__Vidx < 1; ++gpr_26__Vidx) gpr_26__Vcvt = gpr_26;
    long long gpr_27__Vcvt;
    for (size_t gpr_27__Vidx = 0; gpr_27__Vidx < 1; ++gpr_27__Vidx) gpr_27__Vcvt = gpr_27;
    long long gpr_28__Vcvt;
    for (size_t gpr_28__Vidx = 0; gpr_28__Vidx < 1; ++gpr_28__Vidx) gpr_28__Vcvt = gpr_28;
    long long gpr_29__Vcvt;
    for (size_t gpr_29__Vidx = 0; gpr_29__Vidx < 1; ++gpr_29__Vidx) gpr_29__Vcvt = gpr_29;
    long long gpr_30__Vcvt;
    for (size_t gpr_30__Vidx = 0; gpr_30__Vidx < 1; ++gpr_30__Vidx) gpr_30__Vcvt = gpr_30;
    long long gpr_31__Vcvt;
    for (size_t gpr_31__Vidx = 0; gpr_31__Vidx < 1; ++gpr_31__Vidx) gpr_31__Vcvt = gpr_31;
    v_difftest_GRegState(coreid__Vcvt, gpr_0__Vcvt, gpr_1__Vcvt, gpr_2__Vcvt, gpr_3__Vcvt, gpr_4__Vcvt, gpr_5__Vcvt, gpr_6__Vcvt, gpr_7__Vcvt, gpr_8__Vcvt, gpr_9__Vcvt, gpr_10__Vcvt, gpr_11__Vcvt, gpr_12__Vcvt, gpr_13__Vcvt, gpr_14__Vcvt, gpr_15__Vcvt, gpr_16__Vcvt, gpr_17__Vcvt, gpr_18__Vcvt, gpr_19__Vcvt, gpr_20__Vcvt, gpr_21__Vcvt, gpr_22__Vcvt, gpr_23__Vcvt, gpr_24__Vcvt, gpr_25__Vcvt, gpr_26__Vcvt, gpr_27__Vcvt, gpr_28__Vcvt, gpr_29__Vcvt, gpr_30__Vcvt, gpr_31__Vcvt);
}
