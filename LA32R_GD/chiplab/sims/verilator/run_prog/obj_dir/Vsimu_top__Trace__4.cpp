// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_4(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7757);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
        bufp->chgBit(oldp+1,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x36U])));
        bufp->chgBit(oldp+2,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x36U] >> 1U))));
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
        bufp->chgBit(oldp+4,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                 & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                   & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x36U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x36U]))));
        bufp->chgBit(oldp+5,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
        bufp->chgBit(oldp+6,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x37U])));
        bufp->chgBit(oldp+7,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x37U] >> 1U))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
        bufp->chgBit(oldp+9,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                 & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                   & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x37U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x37U]))));
        bufp->chgBit(oldp+10,((1U & (IData)((0xffULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
        bufp->chgBit(oldp+11,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x38U])));
        bufp->chgBit(oldp+12,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x38U] >> 1U))));
        bufp->chgBit(oldp+13,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
        bufp->chgBit(oldp+14,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x38U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x38U]))));
        bufp->chgBit(oldp+15,((1U & (IData)((0x7fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+16,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x39U])));
        bufp->chgBit(oldp+17,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x39U] >> 1U))));
        bufp->chgBit(oldp+18,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
        bufp->chgBit(oldp+19,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x39U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x39U]))));
        bufp->chgBit(oldp+20,((1U & (IData)((0x3fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
        bufp->chgBit(oldp+21,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3aU])));
        bufp->chgBit(oldp+22,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3aU] >> 1U))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
        bufp->chgBit(oldp+24,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3aU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3aU]))));
        bufp->chgBit(oldp+25,((1U & (IData)((0x1fULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
        bufp->chgBit(oldp+26,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3bU])));
        bufp->chgBit(oldp+27,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3bU] >> 1U))));
        bufp->chgBit(oldp+28,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
        bufp->chgBit(oldp+29,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3bU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3bU]))));
        bufp->chgBit(oldp+30,((1U & (IData)((0x7fffffff8000000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))))));
        bufp->chgBit(oldp+31,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [5U])));
        bufp->chgBit(oldp+32,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [5U] >> 1U))));
        bufp->chgBit(oldp+33,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1bU)))))));
        bufp->chgBit(oldp+34,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x7fffffff8000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1bU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [5U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [5U]))));
        bufp->chgBit(oldp+35,((1U & (IData)((0xfULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
        bufp->chgBit(oldp+36,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3cU])));
        bufp->chgBit(oldp+37,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3cU] >> 1U))));
        bufp->chgBit(oldp+38,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
        bufp->chgBit(oldp+39,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3cU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3cU]))));
        bufp->chgBit(oldp+40,((1U & (IData)((7ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU))))));
        bufp->chgBit(oldp+41,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3dU])));
        bufp->chgBit(oldp+42,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3dU] >> 1U))));
        bufp->chgBit(oldp+43,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
        bufp->chgBit(oldp+44,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3dU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3dU]))));
        bufp->chgBit(oldp+45,((1U & (IData)((3ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU))))));
        bufp->chgBit(oldp+46,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3eU])));
        bufp->chgBit(oldp+47,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3eU] >> 1U))));
        bufp->chgBit(oldp+48,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
        bufp->chgBit(oldp+49,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3eU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3eU]))));
        bufp->chgBit(oldp+50,((1U & (IData)((1ULL & 
                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))))));
        bufp->chgBit(oldp+51,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [0x3fU])));
        bufp->chgBit(oldp+52,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [0x3fU] >> 1U))));
        bufp->chgBit(oldp+53,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+54,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [0x3fU] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [0x3fU]))));
        bufp->chgBit(oldp+55,((1U & (IData)((0x3fffffffc000000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
        bufp->chgBit(oldp+56,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [6U])));
        bufp->chgBit(oldp+57,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [6U] >> 1U))));
        bufp->chgBit(oldp+58,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))))));
        bufp->chgBit(oldp+59,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x3fffffffc000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [6U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [6U]))));
        bufp->chgBit(oldp+60,((1U & (IData)((0x1fffffffe000000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
        bufp->chgBit(oldp+61,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [7U])));
        bufp->chgBit(oldp+62,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [7U] >> 1U))));
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
        bufp->chgBit(oldp+64,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x1fffffffe000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x19U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [7U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [7U]))));
        bufp->chgBit(oldp+65,((1U & (IData)((0xffffffff000000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
        bufp->chgBit(oldp+66,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [8U])));
        bufp->chgBit(oldp+67,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [8U] >> 1U))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)((0xffffffff000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))))));
        bufp->chgBit(oldp+69,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0xffffffff000000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x18U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0xffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [8U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [8U]))));
        bufp->chgBit(oldp+70,((1U & (IData)((0x7fffffff800000ULL 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
        bufp->chgBit(oldp+71,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                               [9U])));
        bufp->chgBit(oldp+72,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                     [9U] >> 1U))));
        bufp->chgBit(oldp+73,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
        bufp->chgBit(oldp+74,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                  & (~ (IData)((0x7fffffff800000ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x17U))))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                    & (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                      [9U] >> 1U))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                  [9U]))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                     >> 2U))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                     >> 1U))));
        bufp->chgBit(oldp+77,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y))));
        bufp->chgIData(oldp+78,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0]),32);
        bufp->chgIData(oldp+79,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[1]),32);
        bufp->chgIData(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[2]),32);
        bufp->chgIData(oldp+81,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[3]),32);
        bufp->chgIData(oldp+82,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[4]),32);
        bufp->chgIData(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[5]),32);
        bufp->chgIData(oldp+84,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[6]),32);
        bufp->chgIData(oldp+85,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[7]),32);
        bufp->chgIData(oldp+86,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[8]),32);
        bufp->chgIData(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[9]),32);
        bufp->chgIData(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[10]),32);
        bufp->chgIData(oldp+89,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[11]),32);
        bufp->chgIData(oldp+90,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[12]),32);
        bufp->chgIData(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[13]),32);
        bufp->chgIData(oldp+92,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[14]),32);
        bufp->chgIData(oldp+93,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[15]),32);
        bufp->chgIData(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[16]),32);
        bufp->chgIData(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[17]),32);
        bufp->chgIData(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[18]),32);
        bufp->chgIData(oldp+97,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[19]),32);
        bufp->chgIData(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[20]),32);
        bufp->chgIData(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[21]),32);
        bufp->chgIData(oldp+100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[22]),32);
        bufp->chgIData(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[23]),32);
        bufp->chgIData(oldp+102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[24]),32);
        bufp->chgIData(oldp+103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[25]),32);
        bufp->chgIData(oldp+104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[26]),32);
        bufp->chgIData(oldp+105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[27]),32);
        bufp->chgIData(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[28]),32);
        bufp->chgIData(oldp+107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[29]),32);
        bufp->chgIData(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[30]),32);
        bufp->chgIData(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[31]),32);
        bufp->chgBit(oldp+110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid));
        bufp->chgWData(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data),68);
        bufp->chgBit(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r));
        bufp->chgBit(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid));
        bufp->chgIData(oldp+116,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+117,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 4U))),32);
        bufp->chgBit(oldp+118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+119,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+121,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])));
        bufp->chgBit(oldp+122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                      >> 5U))));
        bufp->chgCData(oldp+124,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])),5);
        bufp->chgIData(oldp+125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]),32);
        bufp->chgIData(oldp+126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U]),32);
        bufp->chgCData(oldp+127,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                            << 2U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 0x1eU)))),6);
        bufp->chgCData(oldp+128,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                          >> 0x1aU))),4);
        bufp->chgCData(oldp+129,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+130,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 0x13U))),5);
        bufp->chgCData(oldp+131,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 4U))),5);
        bufp->chgCData(oldp+132,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+133,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 0xeU))),5);
        bufp->chgSData(oldp+134,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            >> 0xeU))),12);
        bufp->chgSData(oldp+135,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                             >> 0xeU))),14);
        bufp->chgIData(oldp+136,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 9U))),20);
        bufp->chgSData(oldp+137,((0xffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                             >> 0xeU))),16);
        bufp->chgIData(oldp+138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26),26);
        bufp->chgQData(oldp+139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d),64);
        bufp->chgSData(oldp+141,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d),16);
        bufp->chgCData(oldp+142,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d),4);
        bufp->chgIData(oldp+143,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d),32);
        bufp->chgBit(oldp+144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid));
        bufp->chgBit(oldp+145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl));
        bufp->chgBit(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh));
        bufp->chgBit(oldp+147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_add));
        bufp->chgBit(oldp+148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sub));
        bufp->chgBit(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slt));
        bufp->chgBit(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltu));
        bufp->chgBit(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_nor));
        bufp->chgBit(oldp+152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_and));
        bufp->chgBit(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_or));
        bufp->chgBit(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xor));
        bufp->chgBit(oldp+155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_orn));
        bufp->chgBit(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andn));
        bufp->chgBit(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sll));
        bufp->chgBit(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srl));
        bufp->chgBit(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sra));
        bufp->chgBit(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul));
        bufp->chgBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh));
        bufp->chgBit(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu));
        bufp->chgBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div));
        bufp->chgBit(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod));
        bufp->chgBit(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu));
        bufp->chgBit(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu));
        bufp->chgBit(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break));
        bufp->chgBit(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall));
        bufp->chgBit(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli));
        bufp->chgBit(oldp+170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli));
        bufp->chgBit(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai));
        bufp->chgBit(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti));
        bufp->chgBit(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui));
        bufp->chgBit(oldp+174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi));
        bufp->chgBit(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi));
        bufp->chgBit(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori));
        bufp->chgBit(oldp+177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori));
        bufp->chgBit(oldp+178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd));
        bufp->chgBit(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr));
        bufp->chgBit(oldp+180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg));
        bufp->chgBit(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop));
        bufp->chgBit(oldp+182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch));
        bufp->chgBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd));
        bufp->chgBit(oldp+184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr));
        bufp->chgBit(oldp+185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill));
        bufp->chgBit(oldp+186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn));
        bufp->chgBit(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle));
        bufp->chgBit(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb));
        bufp->chgBit(oldp+189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i));
        bufp->chgBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll));
        bufp->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc));
        bufp->chgBit(oldp+192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b));
        bufp->chgBit(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h));
        bufp->chgBit(oldp+194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w));
        bufp->chgBit(oldp+195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b));
        bufp->chgBit(oldp+196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h));
        bufp->chgBit(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w));
        bufp->chgBit(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu));
        bufp->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu));
        bufp->chgBit(oldp+200,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+203,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i));
        bufp->chgBit(oldp+206,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+207,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                              >> 0x1bU)))));
        bufp->chgSData(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op),14);
        bufp->chgBit(oldp+211,(((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
        bufp->chgBit(oldp+212,((IData)((((((((0ULL 
                                              != (0xfc00000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))));
        bufp->chgBit(oldp+213,((IData)(((0ULL != (0x280000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))));
        bufp->chgBit(oldp+214,(((((((((((((((((((((
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i)) 
                                         | (0ULL != 
                                            (0x280000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))));
        bufp->chgBit(oldp+215,((IData)((0ULL != (0x280000ULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+216,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai))));
        bufp->chgBit(oldp+217,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori))));
        bufp->chgBit(oldp+218,(((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop))));
        bufp->chgBit(oldp+219,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))));
        bufp->chgBit(oldp+220,((IData)((0ULL != (0xfc80000ULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+221,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i))));
        bufp->chgBit(oldp+222,((IData)((0ULL != (0x300000ULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
        bufp->chgBit(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj));
        bufp->chgBit(oldp+224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd));
        bufp->chgIData(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm),32);
        bufp->chgIData(oldp+226,(((IData)((0ULL != 
                                           (0x300000ULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                      >> 0x19U)))) 
                                       << 0x1cU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                       << 2U)) : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                                  >> 0x1dU)))) 
                                                   << 0x12U) 
                                                  | (0x3fffcU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                        >> 0xcU))))),32);
        bufp->chgIData(oldp+227,((((- (IData)((1U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0x1dU)))) 
                                   << 0x12U) | (0x3fffcU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0xcU)))),32);
        bufp->chgCData(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA),5);
        bufp->chgCData(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB),5);
        bufp->chgIData(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataA),32);
        bufp->chgIData(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataB),32);
        bufp->chgCData(oldp+232,((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                << 0x17U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                  >> 9U))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                           >> 0x15U)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (((((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                   >> 0xeU)) 
                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                                             >> 1U)) 
                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                                                            >> 3U)) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d)))) 
                                                       | ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                   >> 0xaU)) 
                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                                             >> 0xbU))))
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 4U))))))),5);
        bufp->chgBit(oldp+233,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod))));
        bufp->chgBit(oldp+234,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh))));
        bufp->chgBit(oldp+235,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))));
        bufp->chgCData(oldp+236,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul)
                                   ? 1U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu))
                                            ? 2U : 
                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))
                                             ? 3U : 
                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu))
                                              ? 4U : 0U))))),3);
        bufp->chgCData(oldp+237,((3U & (((1U & (- (IData)(
                                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b))))) 
                                         | (2U & (- (IData)(
                                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)))))) 
                                        | (- (IData)(
                                                     ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))))))),2);
        bufp->chgBit(oldp+238,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
        bufp->chgCData(oldp+239,((3U & (((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd)))) 
                                         | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr))))) 
                                        | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))))),2);
        bufp->chgBit(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ine));
        bufp->chgBit(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__SYS_EXCP));
        bufp->chgBit(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__BRK_EXCP));
        bufp->chgBit(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP));
        bufp->chgBit(oldp+244,((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle))));
        bufp->chgCData(oldp+245,((3U & (((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)))) 
                                         | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))))) 
                                        | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh)))))),2);
        bufp->chgCData(oldp+246,((((((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch)))) 
                                     | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd))))) 
                                    | (3U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr))))) 
                                   | (4U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill))))) 
                                  | (5U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb)))))),3);
        bufp->chgCData(oldp+247,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                   << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                              << 4U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b))))))),8);
        bufp->chgCData(oldp+248,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                   << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h) 
                                              << 1U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))),8);
        bufp->chgBit(oldp+249,((IData)(((0x14000U == 
                                         (0xfffc000U 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                        & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg))))));
        bufp->chgIData(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0]),32);
        bufp->chgIData(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[1]),32);
        bufp->chgIData(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[2]),32);
        bufp->chgIData(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[3]),32);
        bufp->chgIData(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[4]),32);
        bufp->chgIData(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[5]),32);
        bufp->chgIData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[6]),32);
        bufp->chgIData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[7]),32);
        bufp->chgIData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[8]),32);
        bufp->chgIData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[9]),32);
        bufp->chgIData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[10]),32);
        bufp->chgIData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[11]),32);
        bufp->chgIData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[12]),32);
        bufp->chgIData(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[13]),32);
        bufp->chgIData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[14]),32);
        bufp->chgIData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[15]),32);
        bufp->chgIData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[16]),32);
        bufp->chgIData(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[17]),32);
        bufp->chgIData(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[18]),32);
        bufp->chgIData(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[19]),32);
        bufp->chgIData(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[20]),32);
        bufp->chgIData(oldp+271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[21]),32);
        bufp->chgIData(oldp+272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[22]),32);
        bufp->chgIData(oldp+273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[23]),32);
        bufp->chgIData(oldp+274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[24]),32);
        bufp->chgIData(oldp+275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[25]),32);
        bufp->chgIData(oldp+276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[26]),32);
        bufp->chgIData(oldp+277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[27]),32);
        bufp->chgIData(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[28]),32);
        bufp->chgIData(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[29]),32);
        bufp->chgIData(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[30]),32);
        bufp->chgIData(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[31]),32);
        bufp->chgIData(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid));
        bufp->chgIData(oldp+315,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)),32);
        bufp->chgBit(oldp+316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp));
        bufp->chgBit(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn));
        bufp->chgBit(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp));
        bufp->chgBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch));
        bufp->chgBit(oldp+320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle));
        bufp->chgIData(oldp+321,((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                                          >> 5U))),32);
        bufp->chgIData(oldp+322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc),32);
        bufp->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP));
        bufp->chgBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr));
        bufp->chgBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi));
        bufp->chgBit(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif));
        bufp->chgBit(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush));
        bufp->chgBit(oldp+328,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle))));
        bufp->chgIData(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r),32);
        bufp->chgBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid));
        bufp->chgQData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r),37);
        bufp->chgBit(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid));
        bufp->chgQData(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r),34);
        bufp->chgBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid));
        bufp->chgBit(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done));
        bufp->chgBit(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg));
        bufp->chgBit(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock));
        bufp->chgBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
        bufp->chgWData(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data),301);
        bufp->chgBit(oldp+351,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+352,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                      >> 0xbU))));
        bufp->chgCData(oldp+353,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                           >> 6U))),5);
        bufp->chgBit(oldp+354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                      >> 5U))));
        bufp->chgCData(oldp+355,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+356,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                      >> 2U))));
        bufp->chgIData(oldp+357,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                   << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                >> 2U))),32);
        bufp->chgIData(oldp+358,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                   << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                >> 2U))),32);
        bufp->chgSData(oldp+359,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                              << 0xcU) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0x14U)))),14);
        bufp->chgCData(oldp+360,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                        >> 0x12U))),2);
        bufp->chgBit(oldp+361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+362,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x10U))));
        bufp->chgSData(oldp+363,((0x7fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             >> 1U))),15);
        bufp->chgCData(oldp+364,((3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                         << 1U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   >> 0x1fU)))),2);
        bufp->chgCData(oldp+365,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                        >> 0x1cU))),3);
        bufp->chgBit(oldp+366,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      >> 0x1aU))));
        bufp->chgCData(oldp+368,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                           >> 0x15U))),5);
        bufp->chgBit(oldp+369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+371,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                   << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+372,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                   << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                                               >> 0x13U))),32);
        bufp->chgBit(oldp+373,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+374,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U])));
        bufp->chgBit(oldp+375,(((((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0x12U))) 
                                  | (3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0x12U)))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U)))));
        bufp->chgBit(oldp+376,((IData)((0U != (0xf0fcU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])))));
        bufp->chgBit(oldp+377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen));
        bufp->chgBit(oldp+378,((IData)((0U != (0x707cU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])))));
        bufp->chgIData(oldp+379,(((IData)((0U != (0xf000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                       << 0xdU) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                   >> 0x13U))
                                   : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                       << 0x1bU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                       >> 5U)))),32);
        bufp->chgBit(oldp+380,((((IData)((0U != (0x180000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U]))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U)))));
        bufp->chgIData(oldp+381,(((IData)(4U) + ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  << 0xdU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                    >> 0x13U)))),32);
        bufp->chgBit(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch));
        bufp->chgBit(oldp+383,(((((3U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                >> 0x1cU))) 
                                  | (4U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  >> 0x1cU)))) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                                & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U)))));
        bufp->chgBit(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[0]));
        bufp->chgBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[1]));
        bufp->chgBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[2]));
        bufp->chgBit(oldp+387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[3]));
        bufp->chgBit(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[4]));
        bufp->chgBit(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[5]));
        bufp->chgBit(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[6]));
        bufp->chgBit(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[7]));
        bufp->chgBit(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[8]));
        bufp->chgBit(oldp+393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[9]));
        bufp->chgBit(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[10]));
        bufp->chgBit(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[11]));
        bufp->chgBit(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[12]));
        bufp->chgBit(oldp+397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[13]));
        bufp->chgBit(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[14]));
        bufp->chgBit(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[15]));
        bufp->chgBit(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[16]));
        bufp->chgBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[17]));
        bufp->chgBit(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[18]));
        bufp->chgBit(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[19]));
        bufp->chgBit(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[20]));
        bufp->chgBit(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[21]));
        bufp->chgBit(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[22]));
        bufp->chgBit(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[23]));
        bufp->chgBit(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[24]));
        bufp->chgBit(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[25]));
        bufp->chgBit(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[26]));
        bufp->chgBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[27]));
        bufp->chgBit(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[28]));
        bufp->chgBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[29]));
        bufp->chgBit(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[30]));
        bufp->chgBit(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[31]));
        bufp->chgIData(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[0]),19);
        bufp->chgIData(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[1]),19);
        bufp->chgIData(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[2]),19);
        bufp->chgIData(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[3]),19);
        bufp->chgIData(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[4]),19);
        bufp->chgIData(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[5]),19);
        bufp->chgIData(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[6]),19);
        bufp->chgIData(oldp+423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[7]),19);
        bufp->chgIData(oldp+424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[8]),19);
        bufp->chgIData(oldp+425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[9]),19);
        bufp->chgIData(oldp+426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[10]),19);
        bufp->chgIData(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[11]),19);
        bufp->chgIData(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[12]),19);
        bufp->chgIData(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[13]),19);
        bufp->chgIData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[14]),19);
        bufp->chgIData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[15]),19);
        bufp->chgIData(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[16]),19);
        bufp->chgIData(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[17]),19);
        bufp->chgIData(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[18]),19);
        bufp->chgIData(oldp+435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[19]),19);
        bufp->chgIData(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[20]),19);
        bufp->chgIData(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[21]),19);
        bufp->chgIData(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[22]),19);
        bufp->chgIData(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[23]),19);
        bufp->chgIData(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[24]),19);
        bufp->chgIData(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[25]),19);
        bufp->chgIData(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[26]),19);
        bufp->chgIData(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[27]),19);
        bufp->chgIData(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[28]),19);
        bufp->chgIData(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[29]),19);
        bufp->chgIData(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[30]),19);
        bufp->chgIData(oldp+447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[31]),19);
        bufp->chgCData(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[0]),6);
        bufp->chgCData(oldp+449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[1]),6);
        bufp->chgCData(oldp+450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[2]),6);
        bufp->chgCData(oldp+451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[3]),6);
        bufp->chgCData(oldp+452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[4]),6);
        bufp->chgCData(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[5]),6);
        bufp->chgCData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[6]),6);
        bufp->chgCData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[7]),6);
        bufp->chgCData(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[8]),6);
        bufp->chgCData(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[9]),6);
        bufp->chgCData(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[10]),6);
        bufp->chgCData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[11]),6);
        bufp->chgCData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[12]),6);
        bufp->chgCData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[13]),6);
        bufp->chgCData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[14]),6);
        bufp->chgCData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[15]),6);
        bufp->chgCData(oldp+464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[16]),6);
        bufp->chgCData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[17]),6);
        bufp->chgCData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[18]),6);
        bufp->chgCData(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[19]),6);
        bufp->chgCData(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[20]),6);
        bufp->chgCData(oldp+469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[21]),6);
        bufp->chgCData(oldp+470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[22]),6);
        bufp->chgCData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[23]),6);
        bufp->chgCData(oldp+472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[24]),6);
        bufp->chgCData(oldp+473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[25]),6);
        bufp->chgCData(oldp+474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[26]),6);
        bufp->chgCData(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[27]),6);
        bufp->chgCData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[28]),6);
        bufp->chgCData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[29]),6);
        bufp->chgCData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[30]),6);
        bufp->chgCData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[31]),6);
        bufp->chgSData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[0]),10);
        bufp->chgSData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[1]),10);
        bufp->chgSData(oldp+482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[2]),10);
        bufp->chgSData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[3]),10);
        bufp->chgSData(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[4]),10);
        bufp->chgSData(oldp+485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[5]),10);
        bufp->chgSData(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[6]),10);
        bufp->chgSData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[7]),10);
        bufp->chgSData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[8]),10);
        bufp->chgSData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[9]),10);
        bufp->chgSData(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[10]),10);
        bufp->chgSData(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[11]),10);
        bufp->chgSData(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[12]),10);
        bufp->chgSData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[13]),10);
        bufp->chgSData(oldp+494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[14]),10);
        bufp->chgSData(oldp+495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[15]),10);
        bufp->chgSData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[16]),10);
        bufp->chgSData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[17]),10);
        bufp->chgSData(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[18]),10);
        bufp->chgSData(oldp+499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[19]),10);
        bufp->chgSData(oldp+500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[20]),10);
        bufp->chgSData(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[21]),10);
        bufp->chgSData(oldp+502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[22]),10);
        bufp->chgSData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[23]),10);
        bufp->chgSData(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[24]),10);
        bufp->chgSData(oldp+505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[25]),10);
        bufp->chgSData(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[26]),10);
        bufp->chgSData(oldp+507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[27]),10);
        bufp->chgSData(oldp+508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[28]),10);
        bufp->chgSData(oldp+509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[29]),10);
        bufp->chgSData(oldp+510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[30]),10);
        bufp->chgSData(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[31]),10);
        bufp->chgBit(oldp+512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[0]));
        bufp->chgBit(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[1]));
        bufp->chgBit(oldp+514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[2]));
        bufp->chgBit(oldp+515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[3]));
        bufp->chgBit(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[4]));
        bufp->chgBit(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[5]));
        bufp->chgBit(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[6]));
        bufp->chgBit(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[7]));
        bufp->chgBit(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[8]));
        bufp->chgBit(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[9]));
        bufp->chgBit(oldp+522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[10]));
        bufp->chgBit(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[11]));
        bufp->chgBit(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[12]));
        bufp->chgBit(oldp+525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[13]));
        bufp->chgBit(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[14]));
        bufp->chgBit(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[15]));
        bufp->chgBit(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[16]));
        bufp->chgBit(oldp+529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[17]));
        bufp->chgBit(oldp+530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[18]));
        bufp->chgBit(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[19]));
        bufp->chgBit(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[20]));
        bufp->chgBit(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[21]));
        bufp->chgBit(oldp+534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[22]));
        bufp->chgBit(oldp+535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[23]));
        bufp->chgBit(oldp+536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[24]));
        bufp->chgBit(oldp+537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[25]));
        bufp->chgBit(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[26]));
        bufp->chgBit(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[27]));
        bufp->chgBit(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[28]));
        bufp->chgBit(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[29]));
        bufp->chgBit(oldp+542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[30]));
        bufp->chgBit(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[31]));
        bufp->chgIData(oldp+544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[0]),20);
        bufp->chgIData(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[1]),20);
        bufp->chgIData(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[2]),20);
        bufp->chgIData(oldp+547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[3]),20);
        bufp->chgIData(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[4]),20);
        bufp->chgIData(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[5]),20);
        bufp->chgIData(oldp+550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[6]),20);
        bufp->chgIData(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[7]),20);
        bufp->chgIData(oldp+552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[8]),20);
        bufp->chgIData(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[9]),20);
        bufp->chgIData(oldp+554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[10]),20);
        bufp->chgIData(oldp+555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[11]),20);
        bufp->chgIData(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[12]),20);
        bufp->chgIData(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[13]),20);
        bufp->chgIData(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[14]),20);
        bufp->chgIData(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[15]),20);
        bufp->chgIData(oldp+560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[16]),20);
        bufp->chgIData(oldp+561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[17]),20);
        bufp->chgIData(oldp+562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[18]),20);
        bufp->chgIData(oldp+563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[19]),20);
        bufp->chgIData(oldp+564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[20]),20);
        bufp->chgIData(oldp+565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[21]),20);
        bufp->chgIData(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[22]),20);
        bufp->chgIData(oldp+567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[23]),20);
        bufp->chgIData(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[24]),20);
        bufp->chgIData(oldp+569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[25]),20);
        bufp->chgIData(oldp+570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[26]),20);
        bufp->chgIData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[27]),20);
        bufp->chgIData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[28]),20);
        bufp->chgIData(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[29]),20);
        bufp->chgIData(oldp+574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[30]),20);
        bufp->chgIData(oldp+575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[31]),20);
        bufp->chgCData(oldp+576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[0]),2);
        bufp->chgCData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[1]),2);
        bufp->chgCData(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[2]),2);
        bufp->chgCData(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[3]),2);
        bufp->chgCData(oldp+580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[4]),2);
        bufp->chgCData(oldp+581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[5]),2);
        bufp->chgCData(oldp+582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[6]),2);
        bufp->chgCData(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[7]),2);
        bufp->chgCData(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[8]),2);
        bufp->chgCData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[9]),2);
        bufp->chgCData(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[10]),2);
        bufp->chgCData(oldp+587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[11]),2);
        bufp->chgCData(oldp+588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[12]),2);
        bufp->chgCData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[13]),2);
        bufp->chgCData(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[14]),2);
        bufp->chgCData(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[15]),2);
        bufp->chgCData(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[16]),2);
        bufp->chgCData(oldp+593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[17]),2);
        bufp->chgCData(oldp+594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[18]),2);
        bufp->chgCData(oldp+595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[19]),2);
        bufp->chgCData(oldp+596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[20]),2);
        bufp->chgCData(oldp+597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[21]),2);
        bufp->chgCData(oldp+598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[22]),2);
        bufp->chgCData(oldp+599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[23]),2);
        bufp->chgCData(oldp+600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[24]),2);
        bufp->chgCData(oldp+601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[25]),2);
        bufp->chgCData(oldp+602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[26]),2);
        bufp->chgCData(oldp+603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[27]),2);
        bufp->chgCData(oldp+604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[28]),2);
        bufp->chgCData(oldp+605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[29]),2);
        bufp->chgCData(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[30]),2);
        bufp->chgCData(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[31]),2);
        bufp->chgCData(oldp+608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[0]),2);
        bufp->chgCData(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[1]),2);
        bufp->chgCData(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[2]),2);
        bufp->chgCData(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[3]),2);
        bufp->chgCData(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[4]),2);
        bufp->chgCData(oldp+613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[5]),2);
        bufp->chgCData(oldp+614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[6]),2);
        bufp->chgCData(oldp+615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[7]),2);
        bufp->chgCData(oldp+616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[8]),2);
        bufp->chgCData(oldp+617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[9]),2);
        bufp->chgCData(oldp+618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[10]),2);
        bufp->chgCData(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[11]),2);
        bufp->chgCData(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[12]),2);
        bufp->chgCData(oldp+621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[13]),2);
        bufp->chgCData(oldp+622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[14]),2);
        bufp->chgCData(oldp+623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[15]),2);
        bufp->chgCData(oldp+624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[16]),2);
        bufp->chgCData(oldp+625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[17]),2);
        bufp->chgCData(oldp+626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[18]),2);
        bufp->chgCData(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[19]),2);
        bufp->chgCData(oldp+628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[20]),2);
        bufp->chgCData(oldp+629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[21]),2);
        bufp->chgCData(oldp+630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[22]),2);
        bufp->chgCData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[23]),2);
        bufp->chgCData(oldp+632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[24]),2);
        bufp->chgCData(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[25]),2);
        bufp->chgCData(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[26]),2);
        bufp->chgCData(oldp+635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[27]),2);
        bufp->chgCData(oldp+636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[28]),2);
        bufp->chgCData(oldp+637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[29]),2);
        bufp->chgCData(oldp+638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[30]),2);
        bufp->chgCData(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[31]),2);
        bufp->chgBit(oldp+640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[0]));
        bufp->chgBit(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[1]));
        bufp->chgBit(oldp+642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[2]));
        bufp->chgBit(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[3]));
        bufp->chgBit(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[4]));
        bufp->chgBit(oldp+645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[5]));
        bufp->chgBit(oldp+646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[6]));
        bufp->chgBit(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[7]));
        bufp->chgBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[8]));
        bufp->chgBit(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[9]));
        bufp->chgBit(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[10]));
        bufp->chgBit(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[11]));
        bufp->chgBit(oldp+652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[12]));
        bufp->chgBit(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[13]));
        bufp->chgBit(oldp+654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[14]));
        bufp->chgBit(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[15]));
        bufp->chgBit(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[16]));
        bufp->chgBit(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[17]));
        bufp->chgBit(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[18]));
        bufp->chgBit(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[19]));
        bufp->chgBit(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[20]));
        bufp->chgBit(oldp+661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[21]));
        bufp->chgBit(oldp+662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[22]));
        bufp->chgBit(oldp+663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[23]));
        bufp->chgBit(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[24]));
        bufp->chgBit(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[25]));
        bufp->chgBit(oldp+666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[26]));
        bufp->chgBit(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[27]));
        bufp->chgBit(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[28]));
        bufp->chgBit(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[29]));
        bufp->chgBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[30]));
        bufp->chgBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[31]));
        bufp->chgBit(oldp+672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[0]));
        bufp->chgBit(oldp+673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[1]));
        bufp->chgBit(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[2]));
        bufp->chgBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[3]));
        bufp->chgBit(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[4]));
        bufp->chgBit(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[5]));
        bufp->chgBit(oldp+678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[6]));
        bufp->chgBit(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[7]));
        bufp->chgBit(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[8]));
        bufp->chgBit(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[9]));
        bufp->chgBit(oldp+682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[10]));
        bufp->chgBit(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[11]));
        bufp->chgBit(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[12]));
        bufp->chgBit(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[13]));
        bufp->chgBit(oldp+686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[14]));
        bufp->chgBit(oldp+687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[15]));
        bufp->chgBit(oldp+688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[16]));
        bufp->chgBit(oldp+689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[17]));
        bufp->chgBit(oldp+690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[18]));
        bufp->chgBit(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[19]));
        bufp->chgBit(oldp+692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[20]));
        bufp->chgBit(oldp+693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[21]));
        bufp->chgBit(oldp+694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[22]));
        bufp->chgBit(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[23]));
        bufp->chgBit(oldp+696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[24]));
        bufp->chgBit(oldp+697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[25]));
        bufp->chgBit(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[26]));
        bufp->chgBit(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[27]));
        bufp->chgBit(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[28]));
        bufp->chgBit(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[29]));
        bufp->chgBit(oldp+702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[30]));
        bufp->chgBit(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[31]));
        bufp->chgIData(oldp+704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[0]),20);
        bufp->chgIData(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[1]),20);
        bufp->chgIData(oldp+706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[2]),20);
        bufp->chgIData(oldp+707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[3]),20);
        bufp->chgIData(oldp+708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[4]),20);
        bufp->chgIData(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[5]),20);
        bufp->chgIData(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[6]),20);
        bufp->chgIData(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[7]),20);
        bufp->chgIData(oldp+712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[8]),20);
        bufp->chgIData(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[9]),20);
        bufp->chgIData(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[10]),20);
        bufp->chgIData(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[11]),20);
        bufp->chgIData(oldp+716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[12]),20);
        bufp->chgIData(oldp+717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[13]),20);
        bufp->chgIData(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[14]),20);
        bufp->chgIData(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[15]),20);
        bufp->chgIData(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[16]),20);
        bufp->chgIData(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[17]),20);
        bufp->chgIData(oldp+722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[18]),20);
        bufp->chgIData(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[19]),20);
        bufp->chgIData(oldp+724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[20]),20);
        bufp->chgIData(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[21]),20);
        bufp->chgIData(oldp+726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[22]),20);
        bufp->chgIData(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[23]),20);
        bufp->chgIData(oldp+728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[24]),20);
        bufp->chgIData(oldp+729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[25]),20);
        bufp->chgIData(oldp+730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[26]),20);
        bufp->chgIData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[27]),20);
        bufp->chgIData(oldp+732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[28]),20);
        bufp->chgIData(oldp+733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[29]),20);
        bufp->chgIData(oldp+734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[30]),20);
        bufp->chgIData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[31]),20);
        bufp->chgCData(oldp+736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[0]),2);
        bufp->chgCData(oldp+737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[1]),2);
        bufp->chgCData(oldp+738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[2]),2);
        bufp->chgCData(oldp+739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[3]),2);
        bufp->chgCData(oldp+740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[4]),2);
        bufp->chgCData(oldp+741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[5]),2);
        bufp->chgCData(oldp+742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[6]),2);
        bufp->chgCData(oldp+743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[7]),2);
        bufp->chgCData(oldp+744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[8]),2);
        bufp->chgCData(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[9]),2);
        bufp->chgCData(oldp+746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[10]),2);
        bufp->chgCData(oldp+747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[11]),2);
        bufp->chgCData(oldp+748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[12]),2);
        bufp->chgCData(oldp+749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[13]),2);
        bufp->chgCData(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[14]),2);
        bufp->chgCData(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[15]),2);
        bufp->chgCData(oldp+752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[16]),2);
        bufp->chgCData(oldp+753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[17]),2);
        bufp->chgCData(oldp+754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[18]),2);
        bufp->chgCData(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[19]),2);
        bufp->chgCData(oldp+756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[20]),2);
        bufp->chgCData(oldp+757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[21]),2);
        bufp->chgCData(oldp+758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[22]),2);
        bufp->chgCData(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[23]),2);
        bufp->chgCData(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[24]),2);
        bufp->chgCData(oldp+761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[25]),2);
        bufp->chgCData(oldp+762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[26]),2);
        bufp->chgCData(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[27]),2);
        bufp->chgCData(oldp+764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[28]),2);
        bufp->chgCData(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[29]),2);
        bufp->chgCData(oldp+766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[30]),2);
        bufp->chgCData(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[31]),2);
        bufp->chgCData(oldp+768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[0]),2);
        bufp->chgCData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[1]),2);
        bufp->chgCData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[2]),2);
        bufp->chgCData(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[3]),2);
        bufp->chgCData(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[4]),2);
        bufp->chgCData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[5]),2);
        bufp->chgCData(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[6]),2);
        bufp->chgCData(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[7]),2);
        bufp->chgCData(oldp+776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[8]),2);
        bufp->chgCData(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[9]),2);
        bufp->chgCData(oldp+778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[10]),2);
        bufp->chgCData(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[11]),2);
        bufp->chgCData(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[12]),2);
        bufp->chgCData(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[13]),2);
        bufp->chgCData(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[14]),2);
        bufp->chgCData(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[15]),2);
        bufp->chgCData(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[16]),2);
        bufp->chgCData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[17]),2);
        bufp->chgCData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[18]),2);
        bufp->chgCData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[19]),2);
        bufp->chgCData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[20]),2);
        bufp->chgCData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[21]),2);
        bufp->chgCData(oldp+790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[22]),2);
        bufp->chgCData(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[23]),2);
        bufp->chgCData(oldp+792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[24]),2);
        bufp->chgCData(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[25]),2);
        bufp->chgCData(oldp+794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[26]),2);
        bufp->chgCData(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[27]),2);
        bufp->chgCData(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[28]),2);
        bufp->chgCData(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[29]),2);
        bufp->chgCData(oldp+798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[30]),2);
        bufp->chgCData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[31]),2);
        bufp->chgBit(oldp+800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[0]));
        bufp->chgBit(oldp+801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[1]));
        bufp->chgBit(oldp+802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[2]));
        bufp->chgBit(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[3]));
        bufp->chgBit(oldp+804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[4]));
        bufp->chgBit(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[5]));
        bufp->chgBit(oldp+806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[6]));
        bufp->chgBit(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[7]));
        bufp->chgBit(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[8]));
        bufp->chgBit(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[9]));
        bufp->chgBit(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[10]));
        bufp->chgBit(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[11]));
        bufp->chgBit(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[12]));
        bufp->chgBit(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[13]));
        bufp->chgBit(oldp+814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[14]));
        bufp->chgBit(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[15]));
        bufp->chgBit(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[16]));
        bufp->chgBit(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[17]));
        bufp->chgBit(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[18]));
        bufp->chgBit(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[19]));
        bufp->chgBit(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[20]));
        bufp->chgBit(oldp+821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[21]));
        bufp->chgBit(oldp+822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[22]));
        bufp->chgBit(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[23]));
        bufp->chgBit(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[24]));
        bufp->chgBit(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[25]));
        bufp->chgBit(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[26]));
        bufp->chgBit(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[27]));
        bufp->chgBit(oldp+828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[28]));
        bufp->chgBit(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[29]));
        bufp->chgBit(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[30]));
        bufp->chgBit(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[31]));
        bufp->chgBit(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[0]));
        bufp->chgBit(oldp+833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[1]));
        bufp->chgBit(oldp+834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[2]));
        bufp->chgBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[3]));
        bufp->chgBit(oldp+836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[4]));
        bufp->chgBit(oldp+837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[5]));
        bufp->chgBit(oldp+838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[6]));
        bufp->chgBit(oldp+839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[7]));
        bufp->chgBit(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[8]));
        bufp->chgBit(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[9]));
        bufp->chgBit(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[10]));
        bufp->chgBit(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[11]));
        bufp->chgBit(oldp+844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[12]));
        bufp->chgBit(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[13]));
        bufp->chgBit(oldp+846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[14]));
        bufp->chgBit(oldp+847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[15]));
        bufp->chgBit(oldp+848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[16]));
        bufp->chgBit(oldp+849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[17]));
        bufp->chgBit(oldp+850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[18]));
        bufp->chgBit(oldp+851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[19]));
        bufp->chgBit(oldp+852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[20]));
        bufp->chgBit(oldp+853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[21]));
        bufp->chgBit(oldp+854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[22]));
        bufp->chgBit(oldp+855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[23]));
        bufp->chgBit(oldp+856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[24]));
        bufp->chgBit(oldp+857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[25]));
        bufp->chgBit(oldp+858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[26]));
        bufp->chgBit(oldp+859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[27]));
        bufp->chgBit(oldp+860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[28]));
        bufp->chgBit(oldp+861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[29]));
        bufp->chgBit(oldp+862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[30]));
        bufp->chgBit(oldp+863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[31]));
        bufp->chgWData(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data),102);
        bufp->chgBit(oldp+868,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+869,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U])),5);
        bufp->chgIData(oldp+870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U]),32);
        bufp->chgIData(oldp+871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U]),32);
        bufp->chgBit(oldp+872,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
        bufp->chgBit(oldp+873,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        bufp->chgBit(oldp+874,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        bufp->chgBit(oldp+875,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
        bufp->chgBit(oldp+876,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        bufp->chgBit(oldp+877,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 1U))));
        bufp->chgBit(oldp+878,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 2U))));
        bufp->chgBit(oldp+879,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        bufp->chgBit(oldp+880,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 3U))));
        bufp->chgIData(oldp+881,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        bufp->chgIData(oldp+882,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                << 1U)) 
                                  | (1U & VL_REDXOR_32(
                                                       (0x420000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        bufp->chgBit(oldp+883,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        bufp->chgBit(oldp+884,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
        bufp->chgBit(oldp+885,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        bufp->chgBit(oldp+886,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                      >> 4U))));
        bufp->chgQData(oldp+887,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                   << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                       << 4U) 
                                                      | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+889,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+890,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+891,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        bufp->chgIData(oldp+892,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        bufp->chgCData(oldp+893,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+894,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+895,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+896,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+897,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+898,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+899,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+900,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+901,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+902,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+904,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+905,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+906,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+907,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+908,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+911,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+914,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+915,(((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        bufp->chgIData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        bufp->chgCData(oldp+917,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+918,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+919,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+920,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+923,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+924,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+925,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+927,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+928,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+929,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+930,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+931,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+933,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+934,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+935,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+936,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+937,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgIData(oldp+938,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgBit(oldp+939,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+940,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+941,(vlSelf->NAND_top__DOT__nand_addr_c),14);
        bufp->chgIData(oldp+942,(vlSelf->NAND_top__DOT__nand_addr_r),25);
        bufp->chgIData(oldp+943,(vlSelf->NAND_top__DOT__nand_op_num),32);
        bufp->chgIData(oldp+944,(vlSelf->NAND_top__DOT__nand_parameter),32);
        bufp->chgIData(oldp+945,(vlSelf->NAND_top__DOT__nand_ce_map0),32);
        bufp->chgIData(oldp+946,(vlSelf->NAND_top__DOT__nand_ce_map1),32);
        bufp->chgIData(oldp+947,(vlSelf->NAND_top__DOT__nand_rdy_map0),32);
        bufp->chgIData(oldp+948,(vlSelf->NAND_top__DOT__nand_rdy_map1),32);
        bufp->chgIData(oldp+949,(vlSelf->NAND_top__DOT__nand_command),32);
        bufp->chgSData(oldp+950,(vlSelf->NAND_top__DOT__nand_timing),16);
        bufp->chgQData(oldp+951,(vlSelf->NAND_top__DOT__addr_in_die),38);
        bufp->chgCData(oldp+953,(vlSelf->NAND_top__DOT__NAND_STATE),5);
        bufp->chgIData(oldp+954,(vlSelf->NAND_top__DOT__NAND_OP_NUM),32);
        bufp->chgSData(oldp+955,(vlSelf->NAND_top__DOT__WRITE_MAX_COUNT),14);
        bufp->chgSData(oldp+956,(vlSelf->NAND_top__DOT__READ_MAX_COUNT),14);
        bufp->chgBit(oldp+957,(vlSelf->NAND_top__DOT__nand_clr_ack));
        bufp->chgBit(oldp+958,(vlSelf->NAND_top__DOT__NAND_DONE));
        bufp->chgBit(oldp+959,(vlSelf->NAND_top__DOT__NAND_CE_));
        bufp->chgSData(oldp+960,((0x3fffU & (vlSelf->NAND_top__DOT__nand_parameter 
                                             >> 0x10U))),14);
        bufp->chgCData(oldp+961,((7U & (vlSelf->NAND_top__DOT__nand_parameter 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+962,((0xfU & (vlSelf->NAND_top__DOT__nand_parameter 
                                          >> 8U))),4);
        bufp->chgBit(oldp+963,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                      >> 8U))));
        bufp->chgBit(oldp+964,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                      >> 9U))));
        bufp->chgBit(oldp+965,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                      >> 0xdU))));
        bufp->chgBit(oldp+966,(vlSelf->NAND_top__DOT__NAND_DMA_REQ));
        bufp->chgBit(oldp+967,(vlSelf->NAND_top__DOT__nand_cmd_valid));
        bufp->chgCData(oldp+968,(vlSelf->NAND_top__DOT__status),8);
        bufp->chgCData(oldp+969,(vlSelf->NAND_top__DOT__nand_number),2);
        bufp->chgQData(oldp+970,(vlSelf->NAND_top__DOT__ID_INFORM),48);
        bufp->chgIData(oldp+972,(vlSelf->NAND_top__DOT__NAND_DAT_O_RD),32);
        bufp->chgCData(oldp+973,(vlSelf->NAND_top__DOT__NAND_CE_pre_o),4);
        bufp->chgCData(oldp+974,(vlSelf->NAND_top__DOT__ADDR_pointer),2);
        bufp->chgCData(oldp+975,(vlSelf->NAND_top__DOT__NAND_ADDR_COUNT),3);
        bufp->chgCData(oldp+976,(vlSelf->NAND_top__DOT__WAIT_NUM),8);
        bufp->chgCData(oldp+977,(vlSelf->NAND_top__DOT__HOLD_NUM),8);
        bufp->chgCData(oldp+978,(vlSelf->NAND_top__DOT__COMMAND),8);
        bufp->chgCData(oldp+979,(vlSelf->NAND_top__DOT__PRE_STATE),5);
        bufp->chgCData(oldp+980,(vlSelf->NAND_top__DOT__READ_ID_NUM),3);
        bufp->chgSData(oldp+981,(vlSelf->NAND_top__DOT__data_count),14);
        bufp->chgQData(oldp+982,(vlSelf->NAND_top__DOT__NAND_ADDR),38);
        bufp->chgIData(oldp+984,(vlSelf->NAND_top__DOT__NAND_DAT_I_WR),32);
        bufp->chgBit(oldp+985,(vlSelf->NAND_top__DOT__NAND_GO));
        bufp->chgBit(oldp+986,(vlSelf->NAND_top__DOT__NAND_ACK));
        bufp->chgBit(oldp+987,(vlSelf->NAND_top__DOT__DMA_OP_DONE));
        bufp->chgBit(oldp+988,(vlSelf->NAND_top__DOT__ERASE_SERIAL));
        bufp->chgBit(oldp+989,(vlSelf->NAND_top__DOT__now_up_half));
        bufp->chgBit(oldp+990,(vlSelf->NAND_top__DOT__now_oob));
    }
    bufp->chgBit(oldp+991,(vlSelf->aclk));
    bufp->chgBit(oldp+992,(vlSelf->aresetn));
    bufp->chgBit(oldp+993,(vlSelf->enable_delay));
    bufp->chgIData(oldp+994,(vlSelf->random_seed),23);
    bufp->chgBit(oldp+995,(vlSelf->ram_ren));
    bufp->chgIData(oldp+996,(vlSelf->ram_raddr),32);
    bufp->chgIData(oldp+997,(vlSelf->ram_rdata),32);
    bufp->chgCData(oldp+998,(vlSelf->ram_wen),4);
    bufp->chgIData(oldp+999,(vlSelf->ram_waddr),32);
    bufp->chgIData(oldp+1000,(vlSelf->ram_wdata),32);
    bufp->chgIData(oldp+1001,(vlSelf->debug0_wb_pc),32);
    bufp->chgBit(oldp+1002,(vlSelf->debug0_wb_rf_wen));
    bufp->chgCData(oldp+1003,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->chgIData(oldp+1004,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->chgIData(oldp+1005,(vlSelf->num_data),32);
    bufp->chgBit(oldp+1006,(vlSelf->open_trace));
    bufp->chgBit(oldp+1007,(vlSelf->num_monitor));
    bufp->chgCData(oldp+1008,(vlSelf->confreg_uart_data),8);
    bufp->chgBit(oldp+1009,(vlSelf->write_uart_valid));
    bufp->chgWData(oldp+1010,(vlSelf->uart_ctr_bus),128);
    bufp->chgBit(oldp+1014,(vlSelf->uart_rx));
    bufp->chgBit(oldp+1015,(vlSelf->uart_tx));
    bufp->chgSData(oldp+1016,(vlSelf->led),16);
    bufp->chgCData(oldp+1017,(vlSelf->led_rg0),2);
    bufp->chgCData(oldp+1018,(vlSelf->led_rg1),2);
    bufp->chgCData(oldp+1019,(vlSelf->num_csn),8);
    bufp->chgCData(oldp+1020,(vlSelf->num_a_g),7);
    bufp->chgCData(oldp+1021,(vlSelf->btn_key_col),4);
    bufp->chgCData(oldp+1022,(vlSelf->btn_key_row),4);
    bufp->chgCData(oldp+1023,(vlSelf->btn_step),2);
    bufp->chgCData(oldp+1024,(vlSelf->nand_type),2);
    bufp->chgBit(oldp+1025,(vlSelf->pclk));
    bufp->chgBit(oldp+1026,(vlSelf->prst_));
    bufp->chgBit(oldp+1027,(vlSelf->pwrite));
    bufp->chgBit(oldp+1028,(vlSelf->psel));
    bufp->chgBit(oldp+1029,(vlSelf->penable));
    bufp->chgSData(oldp+1030,(vlSelf->ADDR),11);
    bufp->chgIData(oldp+1031,(vlSelf->DAT_I),32);
    bufp->chgIData(oldp+1032,(vlSelf->DAT_O),32);
    bufp->chgCData(oldp+1033,(vlSelf->NAND_CE_o),4);
    bufp->chgBit(oldp+1034,(vlSelf->NAND_REQ));
    bufp->chgCData(oldp+1035,(vlSelf->NAND_I),8);
    bufp->chgCData(oldp+1036,(vlSelf->NAND_O),8);
    bufp->chgBit(oldp+1037,(vlSelf->NAND_EN_));
    bufp->chgBit(oldp+1038,(vlSelf->NAND_ALE));
    bufp->chgBit(oldp+1039,(vlSelf->NAND_CLE));
    bufp->chgBit(oldp+1040,(vlSelf->NAND_WR_));
    bufp->chgBit(oldp+1041,(vlSelf->NAND_RD_));
    bufp->chgCData(oldp+1042,(vlSelf->NAND_IORDY_i),4);
    bufp->chgBit(oldp+1043,(vlSelf->nand_int));
    bufp->chgBit(oldp+1044,(((IData)(vlSelf->psel) 
                             & (0x40U == (IData)(vlSelf->ADDR)))));
    bufp->chgBit(oldp+1045,(((IData)(vlSelf->psel) 
                             & (0x10U == (IData)(vlSelf->ADDR)))));
    bufp->chgBit(oldp+1046,(((IData)(vlSelf->psel) 
                             & (0x14U == (IData)(vlSelf->ADDR)))));
    bufp->chgCData(oldp+1047,(vlSelf->__SYM__switch),8);
    bufp->chgBit(oldp+1048,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                | (~ (IData)(vlSelf->enable_delay))))));
    bufp->chgBit(oldp+1049,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                | (~ (IData)(vlSelf->enable_delay))))));
    bufp->chgBit(oldp+1050,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+1051,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                    ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                       | (IData)(vlSelf->uart_tx))
                                    : (IData)(vlSelf->uart_rx)))));
    bufp->chgBit(oldp+1052,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->chgIData(oldp+1053,(vlSelf->__SYM__switch),32);
    bufp->chgIData(oldp+1054,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlSelf->__SYM__switch) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlSelf->__SYM__switch) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->__SYM__switch) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->__SYM__switch) 
                                                       << 1U)))))))))),32);
    bufp->chgBit(oldp+1055,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    bufp->chgBit(oldp+1056,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->chgBit(oldp+1057,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                             & (~ (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+1058,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+1059,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                             & (~ ((IData)(vlSelf->btn_step) 
                                   >> 1U)))));
    bufp->chgBit(oldp+1060,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))));
    bufp->chgBit(oldp+1061,(((IData)(vlSelf->aresetn) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
    bufp->chgBit(oldp+1062,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}

void Vsimu_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_cleanup\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
