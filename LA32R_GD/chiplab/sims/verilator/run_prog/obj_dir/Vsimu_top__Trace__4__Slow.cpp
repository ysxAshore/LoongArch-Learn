// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_4(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h1f7214b1__0;
    // Body
    bufp->fullBit(oldp+7776,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+7777,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+7778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+7779,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+7780,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7781,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+7782,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+7783,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+7784,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+7785,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7786,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+7787,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+7788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+7789,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+7790,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7791,((1U & (IData)((0x7fffffff8000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))))));
    bufp->fullBit(oldp+7792,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+7793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+7794,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU)))))));
    bufp->fullBit(oldp+7795,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7796,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+7797,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+7798,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+7799,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+7800,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7801,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))))));
    bufp->fullBit(oldp+7802,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+7803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+7804,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+7805,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7806,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))))));
    bufp->fullBit(oldp+7807,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+7808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+7809,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+7810,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7811,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU))))));
    bufp->fullBit(oldp+7812,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+7813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+7814,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+7815,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
                                 & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x1fU))) | 
                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                   [0x3fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                 [0x3fU]))));
    bufp->fullBit(oldp+7816,((1U & (IData)((0x3fffffffc000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+7817,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+7818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+7819,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))))));
    bufp->fullBit(oldp+7820,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7821,((1U & (IData)((0x1fffffffe000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x19U))))));
    bufp->fullBit(oldp+7822,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+7823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+7824,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U)))))));
    bufp->fullBit(oldp+7825,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7826,((1U & (IData)((0xffffffff000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x18U))))));
    bufp->fullBit(oldp+7827,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+7828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+7829,((1U & (~ (IData)((0xffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))))));
    bufp->fullBit(oldp+7830,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7831,((1U & (IData)((0x7fffffff800000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+7832,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+7833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+7834,((1U & (~ (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+7835,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx) 
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
    bufp->fullBit(oldp+7836,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                    >> 2U))));
    bufp->fullBit(oldp+7837,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y) 
                                    >> 1U))));
    bufp->fullBit(oldp+7838,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y))));
    bufp->fullIData(oldp+7839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[0]),32);
    bufp->fullIData(oldp+7840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[1]),32);
    bufp->fullIData(oldp+7841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[2]),32);
    bufp->fullIData(oldp+7842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[3]),32);
    bufp->fullIData(oldp+7843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[4]),32);
    bufp->fullIData(oldp+7844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[5]),32);
    bufp->fullIData(oldp+7845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[6]),32);
    bufp->fullIData(oldp+7846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[7]),32);
    bufp->fullIData(oldp+7847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[8]),32);
    bufp->fullIData(oldp+7848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[9]),32);
    bufp->fullIData(oldp+7849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[10]),32);
    bufp->fullIData(oldp+7850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[11]),32);
    bufp->fullIData(oldp+7851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[12]),32);
    bufp->fullIData(oldp+7852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[13]),32);
    bufp->fullIData(oldp+7853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[14]),32);
    bufp->fullIData(oldp+7854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[15]),32);
    bufp->fullIData(oldp+7855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[16]),32);
    bufp->fullIData(oldp+7856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[17]),32);
    bufp->fullIData(oldp+7857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[18]),32);
    bufp->fullIData(oldp+7858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[19]),32);
    bufp->fullIData(oldp+7859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[20]),32);
    bufp->fullIData(oldp+7860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[21]),32);
    bufp->fullIData(oldp+7861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[22]),32);
    bufp->fullIData(oldp+7862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[23]),32);
    bufp->fullIData(oldp+7863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[24]),32);
    bufp->fullIData(oldp+7864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[25]),32);
    bufp->fullIData(oldp+7865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[26]),32);
    bufp->fullIData(oldp+7866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[27]),32);
    bufp->fullIData(oldp+7867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[28]),32);
    bufp->fullIData(oldp+7868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[29]),32);
    bufp->fullIData(oldp+7869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[30]),32);
    bufp->fullIData(oldp+7870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[31]),32);
    bufp->fullBit(oldp+7871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid));
    bufp->fullWData(oldp+7872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data),68);
    bufp->fullBit(oldp+7875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r));
    bufp->fullBit(oldp+7876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid));
    bufp->fullIData(oldp+7877,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                 << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              >> 4U))),32);
    bufp->fullIData(oldp+7878,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                 << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 4U))),32);
    bufp->fullBit(oldp+7879,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+7880,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+7881,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+7882,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])));
    bufp->fullBit(oldp+7883,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                    >> 6U))));
    bufp->fullBit(oldp+7884,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U] 
                                    >> 5U))));
    bufp->fullCData(oldp+7885,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U])),5);
    bufp->fullIData(oldp+7886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[1U]),32);
    bufp->fullIData(oldp+7887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U]),32);
    bufp->fullCData(oldp+7888,((0x3fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                          << 2U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                          >> 0x1eU)))),6);
    bufp->fullCData(oldp+7889,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x1aU))),4);
    bufp->fullCData(oldp+7890,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                      >> 0x18U))),2);
    bufp->fullCData(oldp+7891,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 0x13U))),5);
    bufp->fullCData(oldp+7892,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 4U))),5);
    bufp->fullCData(oldp+7893,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+7894,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 0xeU))),5);
    bufp->fullSData(oldp+7895,((0xfffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                          >> 0xeU))),12);
    bufp->fullSData(oldp+7896,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 0xeU))),14);
    bufp->fullIData(oldp+7897,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            >> 9U))),20);
    bufp->fullSData(oldp+7898,((0xffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                           >> 0xeU))),16);
    bufp->fullIData(oldp+7899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26),26);
    bufp->fullQData(oldp+7900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d),64);
    bufp->fullSData(oldp+7902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d),16);
    bufp->fullCData(oldp+7903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d),4);
    bufp->fullIData(oldp+7904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d),32);
    bufp->fullBit(oldp+7905,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid));
    bufp->fullBit(oldp+7906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl));
    bufp->fullBit(oldp+7907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh));
    bufp->fullBit(oldp+7908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_add));
    bufp->fullBit(oldp+7909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sub));
    bufp->fullBit(oldp+7910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slt));
    bufp->fullBit(oldp+7911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltu));
    bufp->fullBit(oldp+7912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_nor));
    bufp->fullBit(oldp+7913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_and));
    bufp->fullBit(oldp+7914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_or));
    bufp->fullBit(oldp+7915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xor));
    bufp->fullBit(oldp+7916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_orn));
    bufp->fullBit(oldp+7917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andn));
    bufp->fullBit(oldp+7918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sll));
    bufp->fullBit(oldp+7919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srl));
    bufp->fullBit(oldp+7920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sra));
    bufp->fullBit(oldp+7921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul));
    bufp->fullBit(oldp+7922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh));
    bufp->fullBit(oldp+7923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu));
    bufp->fullBit(oldp+7924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div));
    bufp->fullBit(oldp+7925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod));
    bufp->fullBit(oldp+7926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu));
    bufp->fullBit(oldp+7927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu));
    bufp->fullBit(oldp+7928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break));
    bufp->fullBit(oldp+7929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall));
    bufp->fullBit(oldp+7930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli));
    bufp->fullBit(oldp+7931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli));
    bufp->fullBit(oldp+7932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai));
    bufp->fullBit(oldp+7933,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti));
    bufp->fullBit(oldp+7934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui));
    bufp->fullBit(oldp+7935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi));
    bufp->fullBit(oldp+7936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi));
    bufp->fullBit(oldp+7937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori));
    bufp->fullBit(oldp+7938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori));
    bufp->fullBit(oldp+7939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd));
    bufp->fullBit(oldp+7940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr));
    bufp->fullBit(oldp+7941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg));
    bufp->fullBit(oldp+7942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop));
    bufp->fullBit(oldp+7943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch));
    bufp->fullBit(oldp+7944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd));
    bufp->fullBit(oldp+7945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr));
    bufp->fullBit(oldp+7946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill));
    bufp->fullBit(oldp+7947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn));
    bufp->fullBit(oldp+7948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle));
    bufp->fullBit(oldp+7949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb));
    bufp->fullBit(oldp+7950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i));
    bufp->fullBit(oldp+7951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll));
    bufp->fullBit(oldp+7952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc));
    bufp->fullBit(oldp+7953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b));
    bufp->fullBit(oldp+7954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h));
    bufp->fullBit(oldp+7955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w));
    bufp->fullBit(oldp+7956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b));
    bufp->fullBit(oldp+7957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h));
    bufp->fullBit(oldp+7958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w));
    bufp->fullBit(oldp+7959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu));
    bufp->fullBit(oldp+7960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu));
    bufp->fullBit(oldp+7961,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+7962,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+7963,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+7964,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+7965,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+7966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i));
    bufp->fullBit(oldp+7967,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+7968,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+7969,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+7970,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                            >> 0x1bU)))));
    bufp->fullSData(oldp+7971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op),14);
    bufp->fullBit(oldp+7972,(((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
    bufp->fullBit(oldp+7973,((IData)((((((((0ULL != 
                                            (0xfc00000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))));
    bufp->fullBit(oldp+7974,((IData)(((0ULL != (0x280000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))));
    bufp->fullBit(oldp+7975,((((((((((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                       | (0ULL != (0x280000ULL 
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
    bufp->fullBit(oldp+7976,((IData)((0ULL != (0x280000ULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
    bufp->fullBit(oldp+7977,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai))));
    bufp->fullBit(oldp+7978,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori))));
    bufp->fullBit(oldp+7979,(((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi) 
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
    bufp->fullBit(oldp+7980,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc))));
    bufp->fullBit(oldp+7981,((IData)((0ULL != (0xfc80000ULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
    bufp->fullBit(oldp+7982,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i))));
    bufp->fullBit(oldp+7983,((IData)((0ULL != (0x300000ULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))));
    bufp->fullBit(oldp+7984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj));
    bufp->fullBit(oldp+7985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd));
    bufp->fullIData(oldp+7986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm),32);
    bufp->fullIData(oldp+7987,(((IData)((0ULL != (0x300000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                    >> 0x19U)))) 
                                     << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                  << 2U))
                                 : (((- (IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                    >> 0x1dU)))) 
                                     << 0x12U) | (0x3fffcU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 0xcU))))),32);
    bufp->fullIData(oldp+7988,((((- (IData)((1U & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0x1dU)))) 
                                 << 0x12U) | (0x3fffcU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                 >> 0xcU)))),32);
    bufp->fullCData(oldp+7989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA),5);
    bufp->fullCData(oldp+7990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB),5);
    bufp->fullIData(oldp+7991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataA),32);
    bufp->fullIData(oldp+7992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataB),32);
    bufp->fullCData(oldp+7993,((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)
                                          ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              << 0x17U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 9U))
                                          : ((1U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                            >> 0x15U)))
                                              ? 1U : 
                                             ((1U & 
                                               (((((IData)(
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
                                               : ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 4U))))))),5);
    bufp->fullBit(oldp+7994,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod))));
    bufp->fullBit(oldp+7995,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh))));
    bufp->fullBit(oldp+7996,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))));
    bufp->fullCData(oldp+7997,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul)
                                 ? 1U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu))
                                          ? 2U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))
                                                   ? 3U
                                                   : 
                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu))
                                                    ? 4U
                                                    : 0U))))),3);
    bufp->fullCData(oldp+7998,((3U & (((1U & (- (IData)(
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
    bufp->fullBit(oldp+7999,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll))));
    bufp->fullCData(oldp+8000,((3U & (((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd)))) 
                                       | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr))))) 
                                      | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))))),2);
    bufp->fullBit(oldp+8001,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ine));
    bufp->fullBit(oldp+8002,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__SYS_EXCP));
    bufp->fullBit(oldp+8003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__BRK_EXCP));
    bufp->fullBit(oldp+8004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP));
    bufp->fullBit(oldp+8005,((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
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
    bufp->fullCData(oldp+8006,((3U & (((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)))) 
                                       | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))))) 
                                      | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh)))))),2);
    bufp->fullCData(oldp+8007,((((((1U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch)))) 
                                   | (2U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd))))) 
                                  | (3U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr))))) 
                                 | (4U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill))))) 
                                | (5U & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb)))))),3);
    bufp->fullCData(oldp+8008,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                 << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                            << 4U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b))))))),8);
    bufp->fullCData(oldp+8009,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                 << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h) 
                                            << 1U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))),8);
    bufp->fullBit(oldp+8010,((IData)(((0x14000U == 
                                       (0xfffc000U 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                      & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg))))));
    bufp->fullIData(oldp+8011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[0]),32);
    bufp->fullIData(oldp+8012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[1]),32);
    bufp->fullIData(oldp+8013,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[2]),32);
    bufp->fullIData(oldp+8014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[3]),32);
    bufp->fullIData(oldp+8015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[4]),32);
    bufp->fullIData(oldp+8016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[5]),32);
    bufp->fullIData(oldp+8017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[6]),32);
    bufp->fullIData(oldp+8018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[7]),32);
    bufp->fullIData(oldp+8019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[8]),32);
    bufp->fullIData(oldp+8020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[9]),32);
    bufp->fullIData(oldp+8021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[10]),32);
    bufp->fullIData(oldp+8022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[11]),32);
    bufp->fullIData(oldp+8023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[12]),32);
    bufp->fullIData(oldp+8024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[13]),32);
    bufp->fullIData(oldp+8025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[14]),32);
    bufp->fullIData(oldp+8026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[15]),32);
    bufp->fullIData(oldp+8027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[16]),32);
    bufp->fullIData(oldp+8028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[17]),32);
    bufp->fullIData(oldp+8029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[18]),32);
    bufp->fullIData(oldp+8030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[19]),32);
    bufp->fullIData(oldp+8031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[20]),32);
    bufp->fullIData(oldp+8032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[21]),32);
    bufp->fullIData(oldp+8033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[22]),32);
    bufp->fullIData(oldp+8034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[23]),32);
    bufp->fullIData(oldp+8035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[24]),32);
    bufp->fullIData(oldp+8036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[25]),32);
    bufp->fullIData(oldp+8037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[26]),32);
    bufp->fullIData(oldp+8038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[27]),32);
    bufp->fullIData(oldp+8039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[28]),32);
    bufp->fullIData(oldp+8040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[29]),32);
    bufp->fullIData(oldp+8041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[30]),32);
    bufp->fullIData(oldp+8042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[31]),32);
    bufp->fullIData(oldp+8043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+8044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+8045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+8046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+8047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+8048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+8049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+8050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+8051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+8052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+8053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+8054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+8055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+8056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+8057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+8058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+8059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+8060,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+8061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+8062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+8063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+8064,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+8065,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+8066,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+8067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+8068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+8069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+8070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+8071,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+8072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+8073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+8074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+8075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid));
    bufp->fullIData(oldp+8076,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)),32);
    bufp->fullBit(oldp+8077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp));
    bufp->fullBit(oldp+8078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn));
    bufp->fullBit(oldp+8079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp));
    bufp->fullBit(oldp+8080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch));
    bufp->fullBit(oldp+8081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle));
    bufp->fullIData(oldp+8082,((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                                        >> 5U))),32);
    bufp->fullCData(oldp+8083,((0x3fU & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid)
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r
                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus) 
                                                 >> 0x25U)))),6);
    bufp->fullIData(oldp+8084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc),32);
    bufp->fullBit(oldp+8085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP));
    bufp->fullBit(oldp+8086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr));
    bufp->fullBit(oldp+8087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi));
    bufp->fullBit(oldp+8088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif));
    bufp->fullBit(oldp+8089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush));
    bufp->fullBit(oldp+8090,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle))));
    bufp->fullIData(oldp+8091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r),32);
    bufp->fullBit(oldp+8092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid));
    bufp->fullQData(oldp+8093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r),43);
    bufp->fullBit(oldp+8095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid));
    bufp->fullQData(oldp+8096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r),34);
    bufp->fullBit(oldp+8098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid));
    bufp->fullBit(oldp+8099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done));
    bufp->fullBit(oldp+8100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg));
    bufp->fullBit(oldp+8101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlbr_ertn_stall));
    bufp->fullBit(oldp+8102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
    bufp->fullWData(oldp+8103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data),301);
    bufp->fullBit(oldp+8113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+8114,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                    >> 0xbU))));
    bufp->fullCData(oldp+8115,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                         >> 6U))),5);
    bufp->fullBit(oldp+8116,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                    >> 5U))));
    bufp->fullCData(oldp+8117,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                      >> 3U))),2);
    bufp->fullBit(oldp+8118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                    >> 2U))));
    bufp->fullIData(oldp+8119,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                 << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                              >> 2U))),32);
    bufp->fullIData(oldp+8120,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                 << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                              >> 2U))),32);
    bufp->fullSData(oldp+8121,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                            << 0xcU) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                              >> 0x14U)))),14);
    bufp->fullCData(oldp+8122,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x12U))),2);
    bufp->fullBit(oldp+8123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+8124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0x10U))));
    bufp->fullSData(oldp+8125,((0x7fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                           >> 1U))),15);
    bufp->fullCData(oldp+8126,((3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                       << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                 >> 0x1fU)))),2);
    bufp->fullCData(oldp+8127,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      >> 0x1cU))),3);
    bufp->fullBit(oldp+8128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+8129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                    >> 0x1aU))));
    bufp->fullCData(oldp+8130,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                         >> 0x15U))),5);
    bufp->fullBit(oldp+8131,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+8132,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                    >> 0x13U))));
    bufp->fullIData(oldp+8133,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                 << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+8134,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                 << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                                             >> 0x13U))),32);
    bufp->fullBit(oldp+8135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                    >> 1U))));
    bufp->fullBit(oldp+8136,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U])));
    bufp->fullBit(oldp+8137,(((((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                              >> 0x12U))) 
                                | (3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0x12U)))) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                              & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+8138,(((IData)((0U != (0xf0fcU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U]))) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
    bufp->fullBit(oldp+8139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen));
    bufp->fullBit(oldp+8140,(((IData)((0U != (0x707cU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U]))) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
    bufp->fullIData(oldp+8141,(((IData)((0U != (0xf000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])))
                                 ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                     << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                 >> 0x13U))
                                 : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                     << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                  >> 5U)))),32);
    bufp->fullBit(oldp+8142,((((IData)((0U != (0x180000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U]))) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                              & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0x11U)))));
    bufp->fullIData(oldp+8143,(((IData)(4U) + ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                << 0xdU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                  >> 0x13U)))),32);
    bufp->fullBit(oldp+8144,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch));
    bufp->fullBit(oldp+8145,(((((3U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                              >> 0x1cU))) 
                                | (4U == (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                >> 0x1cU)))) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                              & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+8146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[0]));
    bufp->fullBit(oldp+8147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[1]));
    bufp->fullBit(oldp+8148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[2]));
    bufp->fullBit(oldp+8149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[3]));
    bufp->fullBit(oldp+8150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[4]));
    bufp->fullBit(oldp+8151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[5]));
    bufp->fullBit(oldp+8152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[6]));
    bufp->fullBit(oldp+8153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[7]));
    bufp->fullBit(oldp+8154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[8]));
    bufp->fullBit(oldp+8155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[9]));
    bufp->fullBit(oldp+8156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[10]));
    bufp->fullBit(oldp+8157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[11]));
    bufp->fullBit(oldp+8158,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[12]));
    bufp->fullBit(oldp+8159,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[13]));
    bufp->fullBit(oldp+8160,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[14]));
    bufp->fullBit(oldp+8161,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[15]));
    bufp->fullBit(oldp+8162,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[16]));
    bufp->fullBit(oldp+8163,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[17]));
    bufp->fullBit(oldp+8164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[18]));
    bufp->fullBit(oldp+8165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[19]));
    bufp->fullBit(oldp+8166,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[20]));
    bufp->fullBit(oldp+8167,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[21]));
    bufp->fullBit(oldp+8168,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[22]));
    bufp->fullBit(oldp+8169,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[23]));
    bufp->fullBit(oldp+8170,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[24]));
    bufp->fullBit(oldp+8171,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[25]));
    bufp->fullBit(oldp+8172,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[26]));
    bufp->fullBit(oldp+8173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[27]));
    bufp->fullBit(oldp+8174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[28]));
    bufp->fullBit(oldp+8175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[29]));
    bufp->fullBit(oldp+8176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[30]));
    bufp->fullBit(oldp+8177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[31]));
    bufp->fullIData(oldp+8178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[0]),19);
    bufp->fullIData(oldp+8179,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[1]),19);
    bufp->fullIData(oldp+8180,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[2]),19);
    bufp->fullIData(oldp+8181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[3]),19);
    bufp->fullIData(oldp+8182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[4]),19);
    bufp->fullIData(oldp+8183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[5]),19);
    bufp->fullIData(oldp+8184,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[6]),19);
    bufp->fullIData(oldp+8185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[7]),19);
    bufp->fullIData(oldp+8186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[8]),19);
    bufp->fullIData(oldp+8187,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[9]),19);
    bufp->fullIData(oldp+8188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[10]),19);
    bufp->fullIData(oldp+8189,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[11]),19);
    bufp->fullIData(oldp+8190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[12]),19);
    bufp->fullIData(oldp+8191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[13]),19);
    bufp->fullIData(oldp+8192,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[14]),19);
    bufp->fullIData(oldp+8193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[15]),19);
    bufp->fullIData(oldp+8194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[16]),19);
    bufp->fullIData(oldp+8195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[17]),19);
    bufp->fullIData(oldp+8196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[18]),19);
    bufp->fullIData(oldp+8197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[19]),19);
    bufp->fullIData(oldp+8198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[20]),19);
    bufp->fullIData(oldp+8199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[21]),19);
    bufp->fullIData(oldp+8200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[22]),19);
    bufp->fullIData(oldp+8201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[23]),19);
    bufp->fullIData(oldp+8202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[24]),19);
    bufp->fullIData(oldp+8203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[25]),19);
    bufp->fullIData(oldp+8204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[26]),19);
    bufp->fullIData(oldp+8205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[27]),19);
    bufp->fullIData(oldp+8206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[28]),19);
    bufp->fullIData(oldp+8207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[29]),19);
    bufp->fullIData(oldp+8208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[30]),19);
    bufp->fullIData(oldp+8209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[31]),19);
    bufp->fullCData(oldp+8210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[0]),6);
    bufp->fullCData(oldp+8211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[1]),6);
    bufp->fullCData(oldp+8212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[2]),6);
    bufp->fullCData(oldp+8213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[3]),6);
    bufp->fullCData(oldp+8214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[4]),6);
    bufp->fullCData(oldp+8215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[5]),6);
    bufp->fullCData(oldp+8216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[6]),6);
    bufp->fullCData(oldp+8217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[7]),6);
    bufp->fullCData(oldp+8218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[8]),6);
    bufp->fullCData(oldp+8219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[9]),6);
    bufp->fullCData(oldp+8220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[10]),6);
    bufp->fullCData(oldp+8221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[11]),6);
    bufp->fullCData(oldp+8222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[12]),6);
    bufp->fullCData(oldp+8223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[13]),6);
    bufp->fullCData(oldp+8224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[14]),6);
    bufp->fullCData(oldp+8225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[15]),6);
    bufp->fullCData(oldp+8226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[16]),6);
    bufp->fullCData(oldp+8227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[17]),6);
    bufp->fullCData(oldp+8228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[18]),6);
    bufp->fullCData(oldp+8229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[19]),6);
    bufp->fullCData(oldp+8230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[20]),6);
    bufp->fullCData(oldp+8231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[21]),6);
    bufp->fullCData(oldp+8232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[22]),6);
    bufp->fullCData(oldp+8233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[23]),6);
    bufp->fullCData(oldp+8234,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[24]),6);
    bufp->fullCData(oldp+8235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[25]),6);
    bufp->fullCData(oldp+8236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[26]),6);
    bufp->fullCData(oldp+8237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[27]),6);
    bufp->fullCData(oldp+8238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[28]),6);
    bufp->fullCData(oldp+8239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[29]),6);
    bufp->fullCData(oldp+8240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[30]),6);
    bufp->fullCData(oldp+8241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[31]),6);
    bufp->fullSData(oldp+8242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[0]),10);
    bufp->fullSData(oldp+8243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[1]),10);
    bufp->fullSData(oldp+8244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[2]),10);
    bufp->fullSData(oldp+8245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[3]),10);
    bufp->fullSData(oldp+8246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[4]),10);
    bufp->fullSData(oldp+8247,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[5]),10);
    bufp->fullSData(oldp+8248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[6]),10);
    bufp->fullSData(oldp+8249,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[7]),10);
    bufp->fullSData(oldp+8250,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[8]),10);
    bufp->fullSData(oldp+8251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[9]),10);
    bufp->fullSData(oldp+8252,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[10]),10);
    bufp->fullSData(oldp+8253,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[11]),10);
    bufp->fullSData(oldp+8254,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[12]),10);
    bufp->fullSData(oldp+8255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[13]),10);
    bufp->fullSData(oldp+8256,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[14]),10);
    bufp->fullSData(oldp+8257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[15]),10);
    bufp->fullSData(oldp+8258,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[16]),10);
    bufp->fullSData(oldp+8259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[17]),10);
    bufp->fullSData(oldp+8260,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[18]),10);
    bufp->fullSData(oldp+8261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[19]),10);
    bufp->fullSData(oldp+8262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[20]),10);
    bufp->fullSData(oldp+8263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[21]),10);
    bufp->fullSData(oldp+8264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[22]),10);
    bufp->fullSData(oldp+8265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[23]),10);
    bufp->fullSData(oldp+8266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[24]),10);
    bufp->fullSData(oldp+8267,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[25]),10);
    bufp->fullSData(oldp+8268,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[26]),10);
    bufp->fullSData(oldp+8269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[27]),10);
    bufp->fullSData(oldp+8270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[28]),10);
    bufp->fullSData(oldp+8271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[29]),10);
    bufp->fullSData(oldp+8272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[30]),10);
    bufp->fullSData(oldp+8273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[31]),10);
    bufp->fullBit(oldp+8274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[0]));
    bufp->fullBit(oldp+8275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[1]));
    bufp->fullBit(oldp+8276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[2]));
    bufp->fullBit(oldp+8277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[3]));
    bufp->fullBit(oldp+8278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[4]));
    bufp->fullBit(oldp+8279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[5]));
    bufp->fullBit(oldp+8280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[6]));
    bufp->fullBit(oldp+8281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[7]));
    bufp->fullBit(oldp+8282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[8]));
    bufp->fullBit(oldp+8283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[9]));
    bufp->fullBit(oldp+8284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[10]));
    bufp->fullBit(oldp+8285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[11]));
    bufp->fullBit(oldp+8286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[12]));
    bufp->fullBit(oldp+8287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[13]));
    bufp->fullBit(oldp+8288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[14]));
    bufp->fullBit(oldp+8289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[15]));
    bufp->fullBit(oldp+8290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[16]));
    bufp->fullBit(oldp+8291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[17]));
    bufp->fullBit(oldp+8292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[18]));
    bufp->fullBit(oldp+8293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[19]));
    bufp->fullBit(oldp+8294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[20]));
    bufp->fullBit(oldp+8295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[21]));
    bufp->fullBit(oldp+8296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[22]));
    bufp->fullBit(oldp+8297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[23]));
    bufp->fullBit(oldp+8298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[24]));
    bufp->fullBit(oldp+8299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[25]));
    bufp->fullBit(oldp+8300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[26]));
    bufp->fullBit(oldp+8301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[27]));
    bufp->fullBit(oldp+8302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[28]));
    bufp->fullBit(oldp+8303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[29]));
    bufp->fullBit(oldp+8304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[30]));
    bufp->fullBit(oldp+8305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[31]));
    bufp->fullIData(oldp+8306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[0]),20);
    bufp->fullIData(oldp+8307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[1]),20);
    bufp->fullIData(oldp+8308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[2]),20);
    bufp->fullIData(oldp+8309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[3]),20);
    bufp->fullIData(oldp+8310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[4]),20);
    bufp->fullIData(oldp+8311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[5]),20);
    bufp->fullIData(oldp+8312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[6]),20);
    bufp->fullIData(oldp+8313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[7]),20);
    bufp->fullIData(oldp+8314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[8]),20);
    bufp->fullIData(oldp+8315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[9]),20);
    bufp->fullIData(oldp+8316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[10]),20);
    bufp->fullIData(oldp+8317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[11]),20);
    bufp->fullIData(oldp+8318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[12]),20);
    bufp->fullIData(oldp+8319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[13]),20);
    bufp->fullIData(oldp+8320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[14]),20);
    bufp->fullIData(oldp+8321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[15]),20);
    bufp->fullIData(oldp+8322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[16]),20);
    bufp->fullIData(oldp+8323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[17]),20);
    bufp->fullIData(oldp+8324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[18]),20);
    bufp->fullIData(oldp+8325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[19]),20);
    bufp->fullIData(oldp+8326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[20]),20);
    bufp->fullIData(oldp+8327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[21]),20);
    bufp->fullIData(oldp+8328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[22]),20);
    bufp->fullIData(oldp+8329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[23]),20);
    bufp->fullIData(oldp+8330,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[24]),20);
    bufp->fullIData(oldp+8331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[25]),20);
    bufp->fullIData(oldp+8332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[26]),20);
    bufp->fullIData(oldp+8333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[27]),20);
    bufp->fullIData(oldp+8334,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[28]),20);
    bufp->fullIData(oldp+8335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[29]),20);
    bufp->fullIData(oldp+8336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[30]),20);
    bufp->fullIData(oldp+8337,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[31]),20);
    bufp->fullCData(oldp+8338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[0]),2);
    bufp->fullCData(oldp+8339,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[1]),2);
    bufp->fullCData(oldp+8340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[2]),2);
    bufp->fullCData(oldp+8341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[3]),2);
    bufp->fullCData(oldp+8342,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[4]),2);
    bufp->fullCData(oldp+8343,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[5]),2);
    bufp->fullCData(oldp+8344,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[6]),2);
    bufp->fullCData(oldp+8345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[7]),2);
    bufp->fullCData(oldp+8346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[8]),2);
    bufp->fullCData(oldp+8347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[9]),2);
    bufp->fullCData(oldp+8348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[10]),2);
    bufp->fullCData(oldp+8349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[11]),2);
    bufp->fullCData(oldp+8350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[12]),2);
    bufp->fullCData(oldp+8351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[13]),2);
    bufp->fullCData(oldp+8352,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[14]),2);
    bufp->fullCData(oldp+8353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[15]),2);
    bufp->fullCData(oldp+8354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[16]),2);
    bufp->fullCData(oldp+8355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[17]),2);
    bufp->fullCData(oldp+8356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[18]),2);
    bufp->fullCData(oldp+8357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[19]),2);
    bufp->fullCData(oldp+8358,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[20]),2);
    bufp->fullCData(oldp+8359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[21]),2);
    bufp->fullCData(oldp+8360,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[22]),2);
    bufp->fullCData(oldp+8361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[23]),2);
    bufp->fullCData(oldp+8362,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[24]),2);
    bufp->fullCData(oldp+8363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[25]),2);
    bufp->fullCData(oldp+8364,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[26]),2);
    bufp->fullCData(oldp+8365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[27]),2);
    bufp->fullCData(oldp+8366,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[28]),2);
    bufp->fullCData(oldp+8367,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[29]),2);
    bufp->fullCData(oldp+8368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[30]),2);
    bufp->fullCData(oldp+8369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[31]),2);
    bufp->fullCData(oldp+8370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[0]),2);
    bufp->fullCData(oldp+8371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[1]),2);
    bufp->fullCData(oldp+8372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[2]),2);
    bufp->fullCData(oldp+8373,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[3]),2);
    bufp->fullCData(oldp+8374,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[4]),2);
    bufp->fullCData(oldp+8375,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[5]),2);
    bufp->fullCData(oldp+8376,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[6]),2);
    bufp->fullCData(oldp+8377,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[7]),2);
    bufp->fullCData(oldp+8378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[8]),2);
    bufp->fullCData(oldp+8379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[9]),2);
    bufp->fullCData(oldp+8380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[10]),2);
    bufp->fullCData(oldp+8381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[11]),2);
    bufp->fullCData(oldp+8382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[12]),2);
    bufp->fullCData(oldp+8383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[13]),2);
    bufp->fullCData(oldp+8384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[14]),2);
    bufp->fullCData(oldp+8385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[15]),2);
    bufp->fullCData(oldp+8386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[16]),2);
    bufp->fullCData(oldp+8387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[17]),2);
    bufp->fullCData(oldp+8388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[18]),2);
    bufp->fullCData(oldp+8389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[19]),2);
    bufp->fullCData(oldp+8390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[20]),2);
    bufp->fullCData(oldp+8391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[21]),2);
    bufp->fullCData(oldp+8392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[22]),2);
    bufp->fullCData(oldp+8393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[23]),2);
    bufp->fullCData(oldp+8394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[24]),2);
    bufp->fullCData(oldp+8395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[25]),2);
    bufp->fullCData(oldp+8396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[26]),2);
    bufp->fullCData(oldp+8397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[27]),2);
    bufp->fullCData(oldp+8398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[28]),2);
    bufp->fullCData(oldp+8399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[29]),2);
    bufp->fullCData(oldp+8400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[30]),2);
    bufp->fullCData(oldp+8401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[31]),2);
    bufp->fullBit(oldp+8402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[0]));
    bufp->fullBit(oldp+8403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[1]));
    bufp->fullBit(oldp+8404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[2]));
    bufp->fullBit(oldp+8405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[3]));
    bufp->fullBit(oldp+8406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[4]));
    bufp->fullBit(oldp+8407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[5]));
    bufp->fullBit(oldp+8408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[6]));
    bufp->fullBit(oldp+8409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[7]));
    bufp->fullBit(oldp+8410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[8]));
    bufp->fullBit(oldp+8411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[9]));
    bufp->fullBit(oldp+8412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[10]));
    bufp->fullBit(oldp+8413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[11]));
    bufp->fullBit(oldp+8414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[12]));
    bufp->fullBit(oldp+8415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[13]));
    bufp->fullBit(oldp+8416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[14]));
    bufp->fullBit(oldp+8417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[15]));
    bufp->fullBit(oldp+8418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[16]));
    bufp->fullBit(oldp+8419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[17]));
    bufp->fullBit(oldp+8420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[18]));
    bufp->fullBit(oldp+8421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[19]));
    bufp->fullBit(oldp+8422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[20]));
    bufp->fullBit(oldp+8423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[21]));
    bufp->fullBit(oldp+8424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[22]));
    bufp->fullBit(oldp+8425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[23]));
    bufp->fullBit(oldp+8426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[24]));
    bufp->fullBit(oldp+8427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[25]));
    bufp->fullBit(oldp+8428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[26]));
    bufp->fullBit(oldp+8429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[27]));
    bufp->fullBit(oldp+8430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[28]));
    bufp->fullBit(oldp+8431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[29]));
    bufp->fullBit(oldp+8432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[30]));
    bufp->fullBit(oldp+8433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[31]));
    bufp->fullBit(oldp+8434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[0]));
    bufp->fullBit(oldp+8435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[1]));
    bufp->fullBit(oldp+8436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[2]));
    bufp->fullBit(oldp+8437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[3]));
    bufp->fullBit(oldp+8438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[4]));
    bufp->fullBit(oldp+8439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[5]));
    bufp->fullBit(oldp+8440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[6]));
    bufp->fullBit(oldp+8441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[7]));
    bufp->fullBit(oldp+8442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[8]));
    bufp->fullBit(oldp+8443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[9]));
    bufp->fullBit(oldp+8444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[10]));
    bufp->fullBit(oldp+8445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[11]));
    bufp->fullBit(oldp+8446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[12]));
    bufp->fullBit(oldp+8447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[13]));
    bufp->fullBit(oldp+8448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[14]));
    bufp->fullBit(oldp+8449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[15]));
    bufp->fullBit(oldp+8450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[16]));
    bufp->fullBit(oldp+8451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[17]));
    bufp->fullBit(oldp+8452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[18]));
    bufp->fullBit(oldp+8453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[19]));
    bufp->fullBit(oldp+8454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[20]));
    bufp->fullBit(oldp+8455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[21]));
    bufp->fullBit(oldp+8456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[22]));
    bufp->fullBit(oldp+8457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[23]));
    bufp->fullBit(oldp+8458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[24]));
    bufp->fullBit(oldp+8459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[25]));
    bufp->fullBit(oldp+8460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[26]));
    bufp->fullBit(oldp+8461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[27]));
    bufp->fullBit(oldp+8462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[28]));
    bufp->fullBit(oldp+8463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[29]));
    bufp->fullBit(oldp+8464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[30]));
    bufp->fullBit(oldp+8465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[31]));
    bufp->fullIData(oldp+8466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[0]),20);
    bufp->fullIData(oldp+8467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[1]),20);
    bufp->fullIData(oldp+8468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[2]),20);
    bufp->fullIData(oldp+8469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[3]),20);
    bufp->fullIData(oldp+8470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[4]),20);
    bufp->fullIData(oldp+8471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[5]),20);
    bufp->fullIData(oldp+8472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[6]),20);
    bufp->fullIData(oldp+8473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[7]),20);
    bufp->fullIData(oldp+8474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[8]),20);
    bufp->fullIData(oldp+8475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[9]),20);
    bufp->fullIData(oldp+8476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[10]),20);
    bufp->fullIData(oldp+8477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[11]),20);
    bufp->fullIData(oldp+8478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[12]),20);
    bufp->fullIData(oldp+8479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[13]),20);
    bufp->fullIData(oldp+8480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[14]),20);
    bufp->fullIData(oldp+8481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[15]),20);
    bufp->fullIData(oldp+8482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[16]),20);
    bufp->fullIData(oldp+8483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[17]),20);
    bufp->fullIData(oldp+8484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[18]),20);
    bufp->fullIData(oldp+8485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[19]),20);
    bufp->fullIData(oldp+8486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[20]),20);
    bufp->fullIData(oldp+8487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[21]),20);
    bufp->fullIData(oldp+8488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[22]),20);
    bufp->fullIData(oldp+8489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[23]),20);
    bufp->fullIData(oldp+8490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[24]),20);
    bufp->fullIData(oldp+8491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[25]),20);
    bufp->fullIData(oldp+8492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[26]),20);
    bufp->fullIData(oldp+8493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[27]),20);
    bufp->fullIData(oldp+8494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[28]),20);
    bufp->fullIData(oldp+8495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[29]),20);
    bufp->fullIData(oldp+8496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[30]),20);
    bufp->fullIData(oldp+8497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[31]),20);
    bufp->fullCData(oldp+8498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[0]),2);
    bufp->fullCData(oldp+8499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[1]),2);
    bufp->fullCData(oldp+8500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[2]),2);
    bufp->fullCData(oldp+8501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[3]),2);
    bufp->fullCData(oldp+8502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[4]),2);
    bufp->fullCData(oldp+8503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[5]),2);
    bufp->fullCData(oldp+8504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[6]),2);
    bufp->fullCData(oldp+8505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[7]),2);
    bufp->fullCData(oldp+8506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[8]),2);
    bufp->fullCData(oldp+8507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[9]),2);
    bufp->fullCData(oldp+8508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[10]),2);
    bufp->fullCData(oldp+8509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[11]),2);
    bufp->fullCData(oldp+8510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[12]),2);
    bufp->fullCData(oldp+8511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[13]),2);
    bufp->fullCData(oldp+8512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[14]),2);
    bufp->fullCData(oldp+8513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[15]),2);
    bufp->fullCData(oldp+8514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[16]),2);
    bufp->fullCData(oldp+8515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[17]),2);
    bufp->fullCData(oldp+8516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[18]),2);
    bufp->fullCData(oldp+8517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[19]),2);
    bufp->fullCData(oldp+8518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[20]),2);
    bufp->fullCData(oldp+8519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[21]),2);
    bufp->fullCData(oldp+8520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[22]),2);
    bufp->fullCData(oldp+8521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[23]),2);
    bufp->fullCData(oldp+8522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[24]),2);
    bufp->fullCData(oldp+8523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[25]),2);
    bufp->fullCData(oldp+8524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[26]),2);
    bufp->fullCData(oldp+8525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[27]),2);
    bufp->fullCData(oldp+8526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[28]),2);
    bufp->fullCData(oldp+8527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[29]),2);
    bufp->fullCData(oldp+8528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[30]),2);
    bufp->fullCData(oldp+8529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[31]),2);
    bufp->fullCData(oldp+8530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[0]),2);
    bufp->fullCData(oldp+8531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[1]),2);
    bufp->fullCData(oldp+8532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[2]),2);
    bufp->fullCData(oldp+8533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[3]),2);
    bufp->fullCData(oldp+8534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[4]),2);
    bufp->fullCData(oldp+8535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[5]),2);
    bufp->fullCData(oldp+8536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[6]),2);
    bufp->fullCData(oldp+8537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[7]),2);
    bufp->fullCData(oldp+8538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[8]),2);
    bufp->fullCData(oldp+8539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[9]),2);
    bufp->fullCData(oldp+8540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[10]),2);
    bufp->fullCData(oldp+8541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[11]),2);
    bufp->fullCData(oldp+8542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[12]),2);
    bufp->fullCData(oldp+8543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[13]),2);
    bufp->fullCData(oldp+8544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[14]),2);
    bufp->fullCData(oldp+8545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[15]),2);
    bufp->fullCData(oldp+8546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[16]),2);
    bufp->fullCData(oldp+8547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[17]),2);
    bufp->fullCData(oldp+8548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[18]),2);
    bufp->fullCData(oldp+8549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[19]),2);
    bufp->fullCData(oldp+8550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[20]),2);
    bufp->fullCData(oldp+8551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[21]),2);
    bufp->fullCData(oldp+8552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[22]),2);
    bufp->fullCData(oldp+8553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[23]),2);
    bufp->fullCData(oldp+8554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[24]),2);
    bufp->fullCData(oldp+8555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[25]),2);
    bufp->fullCData(oldp+8556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[26]),2);
    bufp->fullCData(oldp+8557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[27]),2);
    bufp->fullCData(oldp+8558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[28]),2);
    bufp->fullCData(oldp+8559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[29]),2);
    bufp->fullCData(oldp+8560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[30]),2);
    bufp->fullCData(oldp+8561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[31]),2);
    bufp->fullBit(oldp+8562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[0]));
    bufp->fullBit(oldp+8563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[1]));
    bufp->fullBit(oldp+8564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[2]));
    bufp->fullBit(oldp+8565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[3]));
    bufp->fullBit(oldp+8566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[4]));
    bufp->fullBit(oldp+8567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[5]));
    bufp->fullBit(oldp+8568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[6]));
    bufp->fullBit(oldp+8569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[7]));
    bufp->fullBit(oldp+8570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[8]));
    bufp->fullBit(oldp+8571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[9]));
    bufp->fullBit(oldp+8572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[10]));
    bufp->fullBit(oldp+8573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[11]));
    bufp->fullBit(oldp+8574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[12]));
    bufp->fullBit(oldp+8575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[13]));
    bufp->fullBit(oldp+8576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[14]));
    bufp->fullBit(oldp+8577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[15]));
    bufp->fullBit(oldp+8578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[16]));
    bufp->fullBit(oldp+8579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[17]));
    bufp->fullBit(oldp+8580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[18]));
    bufp->fullBit(oldp+8581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[19]));
    bufp->fullBit(oldp+8582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[20]));
    bufp->fullBit(oldp+8583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[21]));
    bufp->fullBit(oldp+8584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[22]));
    bufp->fullBit(oldp+8585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[23]));
    bufp->fullBit(oldp+8586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[24]));
    bufp->fullBit(oldp+8587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[25]));
    bufp->fullBit(oldp+8588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[26]));
    bufp->fullBit(oldp+8589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[27]));
    bufp->fullBit(oldp+8590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[28]));
    bufp->fullBit(oldp+8591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[29]));
    bufp->fullBit(oldp+8592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[30]));
    bufp->fullBit(oldp+8593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[31]));
    bufp->fullBit(oldp+8594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[0]));
    bufp->fullBit(oldp+8595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[1]));
    bufp->fullBit(oldp+8596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[2]));
    bufp->fullBit(oldp+8597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[3]));
    bufp->fullBit(oldp+8598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[4]));
    bufp->fullBit(oldp+8599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[5]));
    bufp->fullBit(oldp+8600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[6]));
    bufp->fullBit(oldp+8601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[7]));
    bufp->fullBit(oldp+8602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[8]));
    bufp->fullBit(oldp+8603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[9]));
    bufp->fullBit(oldp+8604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[10]));
    bufp->fullBit(oldp+8605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[11]));
    bufp->fullBit(oldp+8606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[12]));
    bufp->fullBit(oldp+8607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[13]));
    bufp->fullBit(oldp+8608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[14]));
    bufp->fullBit(oldp+8609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[15]));
    bufp->fullBit(oldp+8610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[16]));
    bufp->fullBit(oldp+8611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[17]));
    bufp->fullBit(oldp+8612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[18]));
    bufp->fullBit(oldp+8613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[19]));
    bufp->fullBit(oldp+8614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[20]));
    bufp->fullBit(oldp+8615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[21]));
    bufp->fullBit(oldp+8616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[22]));
    bufp->fullBit(oldp+8617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[23]));
    bufp->fullBit(oldp+8618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[24]));
    bufp->fullBit(oldp+8619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[25]));
    bufp->fullBit(oldp+8620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[26]));
    bufp->fullBit(oldp+8621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[27]));
    bufp->fullBit(oldp+8622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[28]));
    bufp->fullBit(oldp+8623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[29]));
    bufp->fullBit(oldp+8624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[30]));
    bufp->fullBit(oldp+8625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[31]));
    bufp->fullWData(oldp+8626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data),102);
    bufp->fullBit(oldp+8630,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                    >> 5U))));
    bufp->fullCData(oldp+8631,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U])),5);
    bufp->fullIData(oldp+8632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U]),32);
    bufp->fullIData(oldp+8633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U]),32);
    bufp->fullBit(oldp+8634,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
    bufp->fullBit(oldp+8635,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
    bufp->fullBit(oldp+8636,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
    bufp->fullBit(oldp+8637,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
    bufp->fullBit(oldp+8638,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
    bufp->fullBit(oldp+8639,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 1U))));
    bufp->fullBit(oldp+8640,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 2U))));
    bufp->fullBit(oldp+8641,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
    bufp->fullBit(oldp+8642,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 3U))));
    bufp->fullIData(oldp+8643,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
    bufp->fullIData(oldp+8644,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                              << 1U)) 
                                | (1U & VL_REDXOR_32(
                                                     (0x420000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
    bufp->fullBit(oldp+8645,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
    bufp->fullBit(oldp+8646,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
    bufp->fullBit(oldp+8647,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
    bufp->fullBit(oldp+8648,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 4U))));
    bufp->fullQData(oldp+8649,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                     << 4U) 
                                                    | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
    bufp->fullIData(oldp+8651,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
    bufp->fullIData(oldp+8652,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                 >> 2U)) 
                                 << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
    bufp->fullIData(oldp+8653,(((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                 | ((- (IData)((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & ((((IData)(1U) 
                                         + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                            >> 2U)) 
                                        << 2U) | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
    bufp->fullIData(oldp+8654,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
    bufp->fullCData(oldp+8655,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
    bufp->fullBit(oldp+8656,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+8657,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+8658,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullCData(oldp+8659,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
    bufp->fullCData(oldp+8660,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
    bufp->fullBit(oldp+8661,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    bufp->fullCData(oldp+8662,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
    bufp->fullBit(oldp+8663,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    bufp->fullQData(oldp+8664,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
    bufp->fullIData(oldp+8666,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                        >> 0xdU))),32);
    bufp->fullCData(oldp+8667,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 0xbU)))),2);
    bufp->fullCData(oldp+8668,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
    bufp->fullCData(oldp+8669,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 4U)))),4);
    bufp->fullCData(oldp+8670,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 8U)))),3);
    bufp->fullBit(oldp+8671,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
    bufp->fullCData(oldp+8672,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
    bufp->fullQData(oldp+8673,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                 << 0xdU) | (QData)((IData)(
                                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                    << 4U) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
    bufp->fullIData(oldp+8675,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
    bufp->fullIData(oldp+8676,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                 >> 2U)) 
                                 << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
    bufp->fullIData(oldp+8677,(((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                 | ((- (IData)((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & ((((IData)(1U) 
                                         + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                            >> 2U)) 
                                        << 2U) | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
    bufp->fullIData(oldp+8678,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
    bufp->fullCData(oldp+8679,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
    bufp->fullBit(oldp+8680,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+8681,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+8682,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullCData(oldp+8683,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
    bufp->fullCData(oldp+8684,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
    bufp->fullCData(oldp+8685,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
    bufp->fullBit(oldp+8686,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    bufp->fullQData(oldp+8687,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
    bufp->fullIData(oldp+8689,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                        >> 0xdU))),32);
    bufp->fullCData(oldp+8690,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 0xbU)))),2);
    bufp->fullCData(oldp+8691,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
    bufp->fullCData(oldp+8692,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 4U)))),4);
    bufp->fullCData(oldp+8693,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 8U)))),3);
    bufp->fullBit(oldp+8694,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    bufp->fullBit(oldp+8695,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
    bufp->fullBit(oldp+8696,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    bufp->fullCData(oldp+8697,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
    bufp->fullBit(oldp+8698,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    bufp->fullCData(oldp+8699,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
    bufp->fullIData(oldp+8700,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
    bufp->fullBit(oldp+8701,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    bufp->fullBit(oldp+8702,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    bufp->fullSData(oldp+8703,(vlSelf->NAND_top__DOT__nand_addr_c),14);
    bufp->fullIData(oldp+8704,(vlSelf->NAND_top__DOT__nand_addr_r),25);
    bufp->fullIData(oldp+8705,(vlSelf->NAND_top__DOT__nand_op_num),32);
    bufp->fullIData(oldp+8706,(vlSelf->NAND_top__DOT__nand_parameter),32);
    bufp->fullIData(oldp+8707,(vlSelf->NAND_top__DOT__nand_ce_map0),32);
    bufp->fullIData(oldp+8708,(vlSelf->NAND_top__DOT__nand_ce_map1),32);
    bufp->fullIData(oldp+8709,(vlSelf->NAND_top__DOT__nand_rdy_map0),32);
    bufp->fullIData(oldp+8710,(vlSelf->NAND_top__DOT__nand_rdy_map1),32);
    bufp->fullIData(oldp+8711,(vlSelf->NAND_top__DOT__nand_command),32);
    bufp->fullSData(oldp+8712,(vlSelf->NAND_top__DOT__nand_timing),16);
    bufp->fullQData(oldp+8713,(vlSelf->NAND_top__DOT__addr_in_die),38);
    bufp->fullCData(oldp+8715,(vlSelf->NAND_top__DOT__NAND_STATE),5);
    bufp->fullIData(oldp+8716,(vlSelf->NAND_top__DOT__NAND_OP_NUM),32);
    bufp->fullSData(oldp+8717,(vlSelf->NAND_top__DOT__WRITE_MAX_COUNT),14);
    bufp->fullSData(oldp+8718,(vlSelf->NAND_top__DOT__READ_MAX_COUNT),14);
    bufp->fullBit(oldp+8719,(vlSelf->NAND_top__DOT__nand_clr_ack));
    bufp->fullBit(oldp+8720,(vlSelf->NAND_top__DOT__NAND_DONE));
    bufp->fullBit(oldp+8721,(vlSelf->NAND_top__DOT__NAND_CE_));
    bufp->fullSData(oldp+8722,((0x3fffU & (vlSelf->NAND_top__DOT__nand_parameter 
                                           >> 0x10U))),14);
    bufp->fullCData(oldp+8723,((7U & (vlSelf->NAND_top__DOT__nand_parameter 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+8724,((0xfU & (vlSelf->NAND_top__DOT__nand_parameter 
                                        >> 8U))),4);
    bufp->fullBit(oldp+8725,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                    >> 8U))));
    bufp->fullBit(oldp+8726,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                    >> 9U))));
    bufp->fullBit(oldp+8727,((1U & (vlSelf->NAND_top__DOT__nand_command 
                                    >> 0xdU))));
    bufp->fullBit(oldp+8728,(vlSelf->NAND_top__DOT__NAND_DMA_REQ));
    bufp->fullBit(oldp+8729,(vlSelf->NAND_top__DOT__nand_cmd_valid));
    bufp->fullCData(oldp+8730,(vlSelf->NAND_top__DOT__status),8);
    bufp->fullCData(oldp+8731,(vlSelf->NAND_top__DOT__nand_number),2);
    bufp->fullQData(oldp+8732,(vlSelf->NAND_top__DOT__ID_INFORM),48);
    bufp->fullIData(oldp+8734,(vlSelf->NAND_top__DOT__NAND_DAT_O_RD),32);
    bufp->fullCData(oldp+8735,(vlSelf->NAND_top__DOT__NAND_CE_pre_o),4);
    bufp->fullCData(oldp+8736,(vlSelf->NAND_top__DOT__ADDR_pointer),2);
    bufp->fullCData(oldp+8737,(vlSelf->NAND_top__DOT__NAND_ADDR_COUNT),3);
    bufp->fullCData(oldp+8738,(vlSelf->NAND_top__DOT__WAIT_NUM),8);
    bufp->fullCData(oldp+8739,(vlSelf->NAND_top__DOT__HOLD_NUM),8);
    bufp->fullCData(oldp+8740,(vlSelf->NAND_top__DOT__COMMAND),8);
    bufp->fullCData(oldp+8741,(vlSelf->NAND_top__DOT__PRE_STATE),5);
    bufp->fullCData(oldp+8742,(vlSelf->NAND_top__DOT__READ_ID_NUM),3);
    bufp->fullSData(oldp+8743,(vlSelf->NAND_top__DOT__data_count),14);
    bufp->fullQData(oldp+8744,(vlSelf->NAND_top__DOT__NAND_ADDR),38);
    bufp->fullIData(oldp+8746,(vlSelf->NAND_top__DOT__NAND_DAT_I_WR),32);
    bufp->fullBit(oldp+8747,(vlSelf->NAND_top__DOT__NAND_GO));
    bufp->fullBit(oldp+8748,(vlSelf->NAND_top__DOT__NAND_ACK));
    bufp->fullBit(oldp+8749,(vlSelf->NAND_top__DOT__DMA_OP_DONE));
    bufp->fullBit(oldp+8750,(vlSelf->NAND_top__DOT__ERASE_SERIAL));
    bufp->fullBit(oldp+8751,(vlSelf->NAND_top__DOT__now_up_half));
    bufp->fullBit(oldp+8752,(vlSelf->NAND_top__DOT__now_oob));
    bufp->fullBit(oldp+8753,(vlSelf->aclk));
    bufp->fullBit(oldp+8754,(vlSelf->aresetn));
    bufp->fullBit(oldp+8755,(vlSelf->enable_delay));
    bufp->fullIData(oldp+8756,(vlSelf->random_seed),23);
    bufp->fullBit(oldp+8757,(vlSelf->ram_ren));
    bufp->fullIData(oldp+8758,(vlSelf->ram_raddr),32);
    bufp->fullIData(oldp+8759,(vlSelf->ram_rdata),32);
    bufp->fullCData(oldp+8760,(vlSelf->ram_wen),4);
    bufp->fullIData(oldp+8761,(vlSelf->ram_waddr),32);
    bufp->fullIData(oldp+8762,(vlSelf->ram_wdata),32);
    bufp->fullIData(oldp+8763,(vlSelf->debug0_wb_pc),32);
    bufp->fullBit(oldp+8764,(vlSelf->debug0_wb_rf_wen));
    bufp->fullCData(oldp+8765,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->fullIData(oldp+8766,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->fullIData(oldp+8767,(vlSelf->num_data),32);
    bufp->fullBit(oldp+8768,(vlSelf->open_trace));
    bufp->fullBit(oldp+8769,(vlSelf->num_monitor));
    bufp->fullCData(oldp+8770,(vlSelf->confreg_uart_data),8);
    bufp->fullBit(oldp+8771,(vlSelf->write_uart_valid));
    bufp->fullWData(oldp+8772,(vlSelf->uart_ctr_bus),128);
    bufp->fullBit(oldp+8776,(vlSelf->uart_rx));
    bufp->fullBit(oldp+8777,(vlSelf->uart_tx));
    bufp->fullSData(oldp+8778,(vlSelf->led),16);
    bufp->fullCData(oldp+8779,(vlSelf->led_rg0),2);
    bufp->fullCData(oldp+8780,(vlSelf->led_rg1),2);
    bufp->fullCData(oldp+8781,(vlSelf->num_csn),8);
    bufp->fullCData(oldp+8782,(vlSelf->num_a_g),7);
    bufp->fullCData(oldp+8783,(vlSelf->btn_key_col),4);
    bufp->fullCData(oldp+8784,(vlSelf->btn_key_row),4);
    bufp->fullCData(oldp+8785,(vlSelf->btn_step),2);
    bufp->fullCData(oldp+8786,(vlSelf->nand_type),2);
    bufp->fullBit(oldp+8787,(vlSelf->pclk));
    bufp->fullBit(oldp+8788,(vlSelf->prst_));
    bufp->fullBit(oldp+8789,(vlSelf->pwrite));
    bufp->fullBit(oldp+8790,(vlSelf->psel));
    bufp->fullBit(oldp+8791,(vlSelf->penable));
    bufp->fullSData(oldp+8792,(vlSelf->ADDR),11);
    bufp->fullIData(oldp+8793,(vlSelf->DAT_I),32);
    bufp->fullIData(oldp+8794,(vlSelf->DAT_O),32);
    bufp->fullCData(oldp+8795,(vlSelf->NAND_CE_o),4);
    bufp->fullBit(oldp+8796,(vlSelf->NAND_REQ));
    bufp->fullCData(oldp+8797,(vlSelf->NAND_I),8);
    bufp->fullCData(oldp+8798,(vlSelf->NAND_O),8);
    bufp->fullBit(oldp+8799,(vlSelf->NAND_EN_));
    bufp->fullBit(oldp+8800,(vlSelf->NAND_ALE));
    bufp->fullBit(oldp+8801,(vlSelf->NAND_CLE));
    bufp->fullBit(oldp+8802,(vlSelf->NAND_WR_));
    bufp->fullBit(oldp+8803,(vlSelf->NAND_RD_));
    bufp->fullCData(oldp+8804,(vlSelf->NAND_IORDY_i),4);
    bufp->fullBit(oldp+8805,(vlSelf->nand_int));
    bufp->fullBit(oldp+8806,(((IData)(vlSelf->psel) 
                              & (0x40U == (IData)(vlSelf->ADDR)))));
    bufp->fullBit(oldp+8807,(((IData)(vlSelf->psel) 
                              & (0x10U == (IData)(vlSelf->ADDR)))));
    bufp->fullBit(oldp+8808,(((IData)(vlSelf->psel) 
                              & (0x14U == (IData)(vlSelf->ADDR)))));
    bufp->fullCData(oldp+8809,(vlSelf->__SYM__switch),8);
    bufp->fullBit(oldp+8810,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                 | (~ (IData)(vlSelf->enable_delay))))));
    bufp->fullBit(oldp+8811,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                 | (~ (IData)(vlSelf->enable_delay))))));
    bufp->fullBit(oldp+8812,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->fullBit(oldp+8813,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                     ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                        | (IData)(vlSelf->uart_tx))
                                     : (IData)(vlSelf->uart_rx)))));
    bufp->fullBit(oldp+8814,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+8815,(vlSelf->__SYM__switch),32);
    bufp->fullIData(oldp+8816,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                            << 8U)) 
                                | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                               << 7U)) 
                                   | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                 << 6U)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__SYM__switch) 
                                           << 5U)) 
                                         | ((0x80U 
                                             & ((IData)(vlSelf->__SYM__switch) 
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
    bufp->fullBit(oldp+8817,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))))));
    bufp->fullBit(oldp+8818,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->fullBit(oldp+8819,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                              & (~ (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+8820,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                    & (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+8821,(((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                              & (~ ((IData)(vlSelf->btn_step) 
                                    >> 1U)))));
    bufp->fullBit(oldp+8822,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                              & ((IData)(vlSelf->btn_step) 
                                 >> 1U))));
    bufp->fullBit(oldp+8823,(((IData)(vlSelf->aresetn) 
                              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
    bufp->fullBit(oldp+8824,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullCData(oldp+8825,(0U),5);
    bufp->fullCData(oldp+8826,(1U),5);
    bufp->fullCData(oldp+8827,(2U),5);
    bufp->fullCData(oldp+8828,(0xaU),5);
    bufp->fullCData(oldp+8829,(3U),5);
    bufp->fullCData(oldp+8830,(4U),5);
    bufp->fullCData(oldp+8831,(6U),5);
    bufp->fullCData(oldp+8832,(7U),5);
    bufp->fullCData(oldp+8833,(0x10U),5);
    bufp->fullCData(oldp+8834,(0x11U),5);
    bufp->fullCData(oldp+8835,(0x12U),5);
    bufp->fullCData(oldp+8836,(0x13U),5);
    bufp->fullCData(oldp+8837,(0x14U),5);
    bufp->fullCData(oldp+8838,(0x15U),5);
    bufp->fullCData(oldp+8839,(0x16U),5);
    bufp->fullCData(oldp+8840,(0x17U),5);
    bufp->fullCData(oldp+8841,(0x18U),5);
    bufp->fullCData(oldp+8842,(0x19U),5);
    bufp->fullCData(oldp+8843,(0x1aU),5);
    bufp->fullCData(oldp+8844,(0x1bU),5);
    bufp->fullIData(oldp+8845,(0x20U),32);
    bufp->fullCData(oldp+8846,(1U),4);
    bufp->fullCData(oldp+8847,(1U),2);
    bufp->fullCData(oldp+8848,(0U),2);
    bufp->fullCData(oldp+8849,(0U),4);
    bufp->fullCData(oldp+8850,(0U),3);
    bufp->fullBit(oldp+8851,(0U));
    bufp->fullBit(oldp+8852,(vlSelf->simu_top__DOT__soc__DOT__UART_RI));
    bufp->fullIData(oldp+8853,(0x14U),32);
    bufp->fullIData(oldp+8854,(8U),32);
    bufp->fullIData(oldp+8855,(0x40U),32);
    bufp->fullIData(oldp+8856,(0x80U),32);
    bufp->fullIData(oldp+8857,(0x10U),32);
    bufp->fullBit(oldp+8858,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
    bufp->fullBit(oldp+8859,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
    bufp->fullBit(oldp+8860,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
    bufp->fullIData(oldp+8861,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
    bufp->fullIData(oldp+8862,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
    bufp->fullBit(oldp+8863,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
    bufp->fullBit(oldp+8864,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
    bufp->fullIData(oldp+8865,(0U),24);
    bufp->fullBit(oldp+8866,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
    bufp->fullBit(oldp+8867,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
    bufp->fullBit(oldp+8868,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_req));
    bufp->fullBit(oldp+8869,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack));
    bufp->fullBit(oldp+8870,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_rw));
    bufp->fullBit(oldp+8871,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
    bufp->fullBit(oldp+8872,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
    bufp->fullIData(oldp+8873,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_addr),20);
    bufp->fullIData(oldp+8874,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
    bufp->fullIData(oldp+8875,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datao),32);
    bufp->fullBit(oldp+8876,(1U));
    bufp->fullIData(oldp+8877,(0U),32);
    bufp->fullCData(oldp+8878,(2U),4);
    bufp->fullCData(oldp+8879,(8U),4);
    bufp->fullCData(oldp+8880,(((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                << 1U)),4);
    bufp->fullBit(oldp+8881,(0U));
    bufp->fullBit(oldp+8882,(0U));
    bufp->fullBit(oldp+8883,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))));
    bufp->fullBit(oldp+8884,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                    << 1U))));
    bufp->fullBit(oldp+8885,(1U));
    bufp->fullBit(oldp+8886,(1U));
    bufp->fullBit(oldp+8887,((1U & (~ (0x7fffffffU 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI))))));
    bufp->fullBit(oldp+8888,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                       << 1U)))));
    bufp->fullIData(oldp+8889,(1U),32);
    bufp->fullBit(oldp+8890,(1U));
    bufp->fullCData(oldp+8891,(3U),4);
    bufp->fullCData(oldp+8892,(4U),4);
    bufp->fullCData(oldp+8893,(5U),4);
    bufp->fullCData(oldp+8894,(6U),4);
    bufp->fullCData(oldp+8895,(7U),4);
    bufp->fullCData(oldp+8896,(9U),4);
    bufp->fullCData(oldp+8897,(0xaU),4);
    bufp->fullIData(oldp+8898,(0xbU),32);
    bufp->fullIData(oldp+8899,(4U),32);
    bufp->fullIData(oldp+8900,(5U),32);
    bufp->fullCData(oldp+8901,(1U),3);
    bufp->fullCData(oldp+8902,(2U),3);
    bufp->fullCData(oldp+8903,(3U),3);
    bufp->fullCData(oldp+8904,(4U),3);
    bufp->fullCData(oldp+8905,(5U),3);
    bufp->fullCData(oldp+8906,(6U),3);
    bufp->fullCData(oldp+8907,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
    bufp->fullCData(oldp+8908,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
    bufp->fullCData(oldp+8909,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
    bufp->fullIData(oldp+8910,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
    bufp->fullCData(oldp+8911,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
    bufp->fullBit(oldp+8912,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
    bufp->fullCData(oldp+8913,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
    bufp->fullCData(oldp+8914,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
    bufp->fullCData(oldp+8915,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
    bufp->fullIData(oldp+8916,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
    bufp->fullCData(oldp+8917,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
    bufp->fullBit(oldp+8918,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
    bufp->fullCData(oldp+8919,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
    bufp->fullCData(oldp+8920,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
    bufp->fullCData(oldp+8921,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
    bufp->fullCData(oldp+8922,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
    bufp->fullCData(oldp+8923,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
    bufp->fullCData(oldp+8924,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
    bufp->fullCData(oldp+8925,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
    bufp->fullIData(oldp+8926,(5U),32);
    bufp->fullIData(oldp+8927,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
    bufp->fullIData(oldp+8928,(3U),32);
    bufp->fullIData(oldp+8929,(2U),32);
    bufp->fullBit(oldp+8930,(0U));
    bufp->fullCData(oldp+8931,(2U),2);
    bufp->fullCData(oldp+8932,(0U),8);
    bufp->fullQData(oldp+8933,(0ULL),64);
    bufp->fullIData(oldp+8935,(0x100U),32);
    bufp->fullIData(oldp+8936,(0x15U),32);
    bufp->fullSData(oldp+8937,(0U),14);
    bufp->fullSData(oldp+8938,(1U),14);
    bufp->fullSData(oldp+8939,(2U),14);
    bufp->fullSData(oldp+8940,(4U),14);
    bufp->fullSData(oldp+8941,(5U),14);
    bufp->fullSData(oldp+8942,(6U),14);
    bufp->fullSData(oldp+8943,(7U),14);
    bufp->fullSData(oldp+8944,(0xcU),14);
    bufp->fullSData(oldp+8945,(0x10U),14);
    bufp->fullSData(oldp+8946,(0x11U),14);
    bufp->fullSData(oldp+8947,(0x12U),14);
    bufp->fullSData(oldp+8948,(0x13U),14);
    bufp->fullSData(oldp+8949,(0x18U),14);
    bufp->fullSData(oldp+8950,(0x19U),14);
    bufp->fullSData(oldp+8951,(0x1aU),14);
    bufp->fullSData(oldp+8952,(0x1bU),14);
    bufp->fullSData(oldp+8953,(0x20U),14);
    bufp->fullSData(oldp+8954,(0x30U),14);
    bufp->fullSData(oldp+8955,(0x31U),14);
    bufp->fullSData(oldp+8956,(0x32U),14);
    bufp->fullSData(oldp+8957,(0x33U),14);
    bufp->fullSData(oldp+8958,(0x40U),14);
    bufp->fullSData(oldp+8959,(0x41U),14);
    bufp->fullSData(oldp+8960,(0x42U),14);
    bufp->fullSData(oldp+8961,(0x43U),14);
    bufp->fullSData(oldp+8962,(0x44U),14);
    bufp->fullSData(oldp+8963,(0x60U),14);
    bufp->fullSData(oldp+8964,(0x88U),14);
    bufp->fullSData(oldp+8965,(0x98U),14);
    bufp->fullSData(oldp+8966,(0x100U),14);
    bufp->fullSData(oldp+8967,(0x101U),14);
    bufp->fullSData(oldp+8968,(0x180U),14);
    bufp->fullSData(oldp+8969,(0x181U),14);
    bufp->fullIData(oldp+8970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk),32);
    bufp->fullIData(oldp+8971,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache),32);
    bufp->fullIData(oldp+8972,(0x13U),32);
    bufp->fullIData(oldp+8973,(0U),32);
    bufp->fullIData(oldp+8974,(6U),32);
    bufp->fullCData(oldp+8975,(1U),6);
    bufp->fullCData(oldp+8976,(2U),6);
    bufp->fullCData(oldp+8977,(4U),6);
    bufp->fullCData(oldp+8978,(8U),6);
    bufp->fullCData(oldp+8979,(0x10U),6);
    bufp->fullCData(oldp+8980,(0x20U),6);
    bufp->fullIData(oldp+8981,(0x24U),32);
    bufp->fullCData(oldp+8982,(8U),5);
    bufp->fullBit(oldp+8983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_r_shift_num));
    bufp->fullQData(oldp+8984,(0ULL),36);
    bufp->fullIData(oldp+8986,(0x20U),32);
    bufp->fullBit(oldp+8987,(1U));
    bufp->fullIData(oldp+8988,(5U),32);
    __Vtemp_h1f7214b1__0[0U] = 0x8a418820U;
    __Vtemp_h1f7214b1__0[1U] = 0xc5a92839U;
    __Vtemp_h1f7214b1__0[2U] = 0xca307b9aU;
    __Vtemp_h1f7214b1__0[3U] = 0x38bdab49U;
    __Vtemp_h1f7214b1__0[4U] = 0xffbbcdebU;
    bufp->fullWData(oldp+8989,(__Vtemp_h1f7214b1__0),160);
    bufp->fullBit(oldp+8994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_stall));
    bufp->fullBit(oldp+8995,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__has_acqDataPC));
    bufp->fullCData(oldp+8996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_index_diff),8);
    bufp->fullIData(oldp+8997,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_tag_diff),20);
    bufp->fullCData(oldp+8998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_offset_diff),4);
    bufp->fullSData(oldp+8999,(0U),9);
    bufp->fullIData(oldp+9000,(0x25U),32);
}
