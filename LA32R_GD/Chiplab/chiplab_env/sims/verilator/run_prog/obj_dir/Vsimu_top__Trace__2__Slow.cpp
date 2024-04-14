// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__traceFullSub2(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+3657,((1U & (~ (IData)(
                                                    (0x3fffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+3658,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+3659,((1U & (IData)((0x1fffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+3660,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+3661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+3662,((1U & (~ (IData)(
                                                    (0x1fffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+3663,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+3664,((1U & (IData)((0xffffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+3665,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+3666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+3667,((1U & (~ (IData)(
                                                    (0xffffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+3668,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+3669,((1U & (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+3670,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+3671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+3672,((1U & (~ (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+3673,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+3674,((1U & (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+3675,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+3676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+3677,((1U & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+3678,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+3679,((1U & (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+3680,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+3681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+3682,((1U & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+3683,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+3684,((1U & (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+3685,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+3686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+3687,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+3688,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+3689,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+3690,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+3691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+3692,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+3693,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+3694,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+3695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+3696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+3697,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+3698,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+3699,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+3700,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+3701,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+3702,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+3703,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+3704,((1U & (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+3705,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+3706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+3707,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+3708,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+3709,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+3710,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+3711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+3712,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+3713,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+3714,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+3715,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+3716,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+3717,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+3718,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+3719,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+3720,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+3721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+3722,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+3723,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+3724,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+3725,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+3726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+3727,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+3728,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+3729,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+3730,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+3731,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+3732,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+3733,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+3734,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+3735,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+3736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+3737,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+3738,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+3739,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+3740,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+3741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+3742,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+3743,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+3744,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+3745,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+3746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+3747,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+3748,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+3749,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+3750,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+3751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+3752,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+3753,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+3754,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+3755,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+3756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+3757,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+3758,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+3759,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+3760,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+3761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+3762,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+3763,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+3764,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+3765,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+3766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+3767,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+3768,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+3769,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+3770,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+3771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+3772,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+3773,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+3774,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+3775,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+3776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+3777,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+3778,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+3779,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+3780,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+3781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+3782,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+3783,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+3784,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+3785,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+3786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+3787,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+3788,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+3789,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+3790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+3791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+3792,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+3793,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+3794,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+3795,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+3796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+3797,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+3798,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+3799,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+3800,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+3801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+3802,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+3803,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+3804,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+3805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+3806,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+3807,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+3808,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+3809,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+3810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+3811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+3812,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+3813,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+3814,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+3815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+3816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+3817,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+3818,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+3819,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+3820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+3821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+3822,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+3823,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+3824,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+3825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+3826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+3827,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+3828,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+3829,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+3830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+3831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+3832,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+3833,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+3834,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+3835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+3836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+3837,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+3838,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+3839,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+3840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+3841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+3842,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+3843,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+3844,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+3845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+3846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+3847,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+3848,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+3849,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+3850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+3851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+3852,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+3853,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+3854,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+3855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+3856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+3857,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+3858,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+3859,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+3860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+3861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+3862,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+3863,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+3864,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+3865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+3866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+3867,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+3868,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+3869,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+3870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+3871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+3872,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+3873,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+3874,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+3875,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+3876,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+3877,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+3878,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+3879,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+3880,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+3881,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+3882,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+3883,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+3884,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))));
        tracep->fullBit(oldp+3885,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+3886,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+3887,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU)))))));
        tracep->fullBit(oldp+3888,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+3889,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))));
        tracep->fullBit(oldp+3890,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+3891,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+3892,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU)))))));
        tracep->fullBit(oldp+3893,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+3894,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU))))));
        tracep->fullBit(oldp+3895,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+3896,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+3897,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU)))))));
        tracep->fullBit(oldp+3898,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+3899,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU))))));
        tracep->fullBit(oldp+3900,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+3901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+3902,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU)))))));
        tracep->fullBit(oldp+3903,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+3904,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x11U)))),3);
        tracep->fullQData(oldp+3905,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x12U)),64);
        tracep->fullQData(oldp+3907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__18__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+3909,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+3910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+3911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+3912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+3913,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x13U)))));
        tracep->fullBit(oldp+3914,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+3915,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))));
        tracep->fullBit(oldp+3916,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+3917,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+3918,((1U & (IData)((0x7ffffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+3919,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+3920,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+3921,((1U & (~ (IData)(
                                                    (0x7ffffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+3922,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+3923,((1U & (IData)((0x3fffffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+3924,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+3925,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+3926,((1U & (~ (IData)(
                                                    (0x3fffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+3927,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+3928,((1U & (IData)((0x1fffffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+3929,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+3930,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+3931,((1U & (~ (IData)(
                                                    (0x1fffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+3932,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+3933,((1U & (IData)((0xfffffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+3934,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+3935,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+3936,((1U & (~ (IData)(
                                                    (0xfffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+3937,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+3938,((1U & (IData)((0x7ffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+3939,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+3940,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+3941,((1U & (~ (IData)(
                                                    (0x7ffffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+3942,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+3943,((1U & (IData)((0x3fffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+3944,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+3945,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+3946,((1U & (~ (IData)(
                                                    (0x3fffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+3947,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+3948,((1U & (IData)((0x1fffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+3949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+3950,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+3951,((1U & (~ (IData)(
                                                    (0x1fffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+3952,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+3953,((1U & (IData)((0xfffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+3954,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+3955,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+3956,((1U & (~ (IData)(
                                                    (0xfffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+3957,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+3958,((1U & (IData)((0x7ffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+3959,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+3960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+3961,((1U & (~ (IData)(
                                                    (0x7ffffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+3962,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+3963,((1U & (IData)((0x3fffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+3964,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+3965,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+3966,((1U & (~ (IData)(
                                                    (0x3fffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+3967,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+3968,((1U & (IData)((0x1fffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+3969,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+3970,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+3971,((1U & (~ (IData)(
                                                    (0x1fffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+3972,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+3973,((1U & (IData)((0xfffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+3974,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+3975,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+3976,((1U & (~ (IData)(
                                                    (0xfffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+3977,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+3978,((1U & (IData)((0x7ffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+3979,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+3980,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+3981,((1U & (~ (IData)(
                                                    (0x7ffffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+3982,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+3983,((1U & (IData)((0x3fffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+3984,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+3985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+3986,((1U & (~ (IData)(
                                                    (0x3fffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+3987,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+3988,((1U & (IData)((0x1fffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+3989,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+3990,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+3991,((1U & (~ (IData)(
                                                    (0x1fffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+3992,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+3993,((1U & (IData)((0xfffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+3994,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+3995,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+3996,((1U & (~ (IData)(
                                                    (0xfffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+3997,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+3998,((1U & (IData)((0x7ffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+3999,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4001,((1U & (~ (IData)(
                                                    (0x7ffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4002,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4003,((1U & (IData)((0x3fffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4004,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4005,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4006,((1U & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4007,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4008,((1U & (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4009,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4010,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4011,((1U & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4012,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4013,((1U & (IData)((0xfffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4014,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4015,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4016,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4017,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4018,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4019,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4020,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4021,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4022,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4023,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4024,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4025,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4026,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4027,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4028,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4029,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4031,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4032,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4033,((1U & (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4034,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4035,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4036,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4037,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4038,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4039,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4040,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4041,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4042,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4043,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4044,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4045,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4046,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4047,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4048,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4049,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4051,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4052,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4053,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4054,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4056,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4057,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4058,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4059,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4060,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4061,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4062,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4063,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4064,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4066,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4067,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4068,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4069,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4070,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4071,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4072,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4073,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4074,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4075,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4076,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4077,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4078,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4079,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4080,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4081,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4082,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4083,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4084,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4085,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4086,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4087,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4088,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4089,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4090,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4091,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4092,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4093,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4094,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4095,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4096,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4097,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4098,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4099,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4100,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4101,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4102,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4103,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4104,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4105,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4106,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4107,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4108,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4109,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4110,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4111,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4112,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4113,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4114,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4115,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4116,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4117,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4118,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4119,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4121,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4122,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4123,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4124,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4125,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4126,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4127,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4128,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4129,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4131,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4132,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4133,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4134,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4136,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4137,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4138,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4139,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4141,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4142,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4143,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4144,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4146,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4147,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4148,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4149,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4151,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4152,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4153,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4154,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4156,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4157,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4158,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4159,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4161,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4162,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4163,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4164,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4166,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4167,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4168,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4169,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4171,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4172,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4173,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4174,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4175,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4176,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4177,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4178,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4179,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4180,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4181,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4182,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4183,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4184,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4185,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4186,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4187,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4188,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4189,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4191,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4192,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4193,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4194,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4195,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4196,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4197,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4198,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4199,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4201,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4202,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4203,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4204,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4205,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4206,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4207,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4208,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4209,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4210,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4211,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4212,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4213,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+4214,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4216,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+4217,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4218,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+4219,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4220,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4221,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+4222,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4223,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU))))));
        tracep->fullBit(oldp+4224,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4225,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4226,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU)))))));
        tracep->fullBit(oldp+4227,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4228,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU))))));
        tracep->fullBit(oldp+4229,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4230,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4231,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU)))))));
        tracep->fullBit(oldp+4232,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4233,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x13U)))),3);
        tracep->fullQData(oldp+4234,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x14U)),64);
        tracep->fullQData(oldp+4236,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__20__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4238,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4240,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4242,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x15U)))));
        tracep->fullBit(oldp+4243,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x14U)))));
        tracep->fullBit(oldp+4244,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))));
        tracep->fullBit(oldp+4245,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+4246,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4247,((1U & (IData)((0x7ffffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+4248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4250,((1U & (~ (IData)(
                                                    (0x7ffffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+4251,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4252,((1U & (IData)((0x3ffffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4255,((1U & (~ (IData)(
                                                    (0x3ffffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+4256,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4257,((1U & (IData)((0x1ffffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4258,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4259,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4260,((1U & (~ (IData)(
                                                    (0x1ffffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4261,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4262,((1U & (IData)((0xfffffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4263,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4265,((1U & (~ (IData)(
                                                    (0xfffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4266,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4267,((1U & (IData)((0x7ffffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4268,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4270,((1U & (~ (IData)(
                                                    (0x7ffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4271,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4272,((1U & (IData)((0x3ffffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4274,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4275,((1U & (~ (IData)(
                                                    (0x3ffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4276,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4277,((1U & (IData)((0x1ffffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4278,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4279,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4280,((1U & (~ (IData)(
                                                    (0x1ffffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4281,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4282,((1U & (IData)((0xfffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4283,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4284,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4285,((1U & (~ (IData)(
                                                    (0xfffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4286,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4287,((1U & (IData)((0x7ffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4288,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4290,((1U & (~ (IData)(
                                                    (0x7ffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4291,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4292,((1U & (IData)((0x3ffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4293,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4295,((1U & (~ (IData)(
                                                    (0x3ffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4296,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4297,((1U & (IData)((0x1ffffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4298,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4300,((1U & (~ (IData)(
                                                    (0x1ffffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4301,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4302,((1U & (IData)((0xfffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4303,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4305,((1U & (~ (IData)(
                                                    (0xfffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4306,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4307,((1U & (IData)((0x7ffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4308,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4309,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4310,((1U & (~ (IData)(
                                                    (0x7ffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4311,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4312,((1U & (IData)((0x3ffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4313,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4314,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4315,((1U & (~ (IData)(
                                                    (0x3ffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4316,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4317,((1U & (IData)((0x1ffffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4318,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4319,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4320,((1U & (~ (IData)(
                                                    (0x1ffffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4321,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4322,((1U & (IData)((0xfffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+4323,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4324,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4325,((1U & (~ (IData)(
                                                    (0xfffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+4326,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4327,((1U & (IData)((0x7ffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+4328,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4329,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4330,((1U & (~ (IData)(
                                                    (0x7ffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+4331,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4332,((1U & (IData)((0x3ffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+4333,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4334,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4335,((1U & (~ (IData)(
                                                    (0x3ffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+4336,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4337,((1U & (IData)((0x1ffffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+4338,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4339,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4340,((1U & (~ (IData)(
                                                    (0x1ffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4341,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4342,((1U & (IData)((0xfffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4343,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4345,((1U & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4346,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4347,((1U & (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4348,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4349,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4350,((1U & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4351,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4352,((1U & (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4353,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4355,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4356,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4357,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4358,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4360,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4361,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4362,((1U & (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4363,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4365,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4366,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4367,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4368,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4370,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4371,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4372,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4373,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4375,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4376,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4377,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4378,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4379,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4380,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4381,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4382,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4383,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4384,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4385,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4386,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4387,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4388,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4389,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4390,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4391,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4392,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4393,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4394,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4395,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4396,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4397,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4398,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4399,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4400,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4401,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4402,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4404,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4405,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4406,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4407,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4408,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4409,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4410,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4411,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4412,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4413,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4414,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4415,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4416,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4417,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4418,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4420,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4421,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4422,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4423,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4425,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4426,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4427,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4428,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4430,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4431,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4432,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4433,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4435,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4436,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4437,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4438,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4440,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4441,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4442,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4443,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4445,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4446,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4447,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4448,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4450,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4451,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4452,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4453,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4455,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4456,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4457,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4460,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4461,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4462,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4465,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4466,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4467,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4470,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4471,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4472,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4475,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4476,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4477,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4480,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4481,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4482,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4485,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4486,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4487,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4490,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4491,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4492,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4495,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4496,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4497,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4500,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4501,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4502,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4505,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4506,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4507,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4510,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4511,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4512,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4513,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4514,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4515,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4516,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4517,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4518,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4520,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4521,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4522,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4523,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4525,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4526,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4527,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4528,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4530,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4531,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4532,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4533,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4534,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4535,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4536,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4537,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4538,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4539,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4540,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4541,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4542,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4543,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4544,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4545,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4546,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4547,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4548,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4549,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4550,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4551,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4552,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU))))));
        tracep->fullBit(oldp+4553,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4554,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4555,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU)))))));
        tracep->fullBit(oldp+4556,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4557,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU))))));
        tracep->fullBit(oldp+4558,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4559,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4560,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU)))))));
        tracep->fullBit(oldp+4561,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4562,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x15U)))),3);
        tracep->fullQData(oldp+4563,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x16U)),64);
        tracep->fullQData(oldp+4565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4567,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4571,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x17U)))));
        tracep->fullBit(oldp+4572,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x16U)))));
        tracep->fullBit(oldp+4573,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))));
        tracep->fullBit(oldp+4574,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+4575,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4576,((1U & (IData)((0x7fffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+4577,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4578,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4579,((1U & (~ (IData)(
                                                    (0x7fffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+4580,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4581,((1U & (IData)((0x3ffffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+4582,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4583,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4584,((1U & (~ (IData)(
                                                    (0x3ffffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+4585,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4586,((1U & (IData)((0x1ffffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+4587,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4588,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4589,((1U & (~ (IData)(
                                                    (0x1ffffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+4590,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4591,((1U & (IData)((0xffffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4592,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4593,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4594,((1U & (~ (IData)(
                                                    (0xffffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+4595,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4596,((1U & (IData)((0x7fffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4597,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4598,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4599,((1U & (~ (IData)(
                                                    (0x7fffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4600,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4601,((1U & (IData)((0x3ffffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4602,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4603,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4604,((1U & (~ (IData)(
                                                    (0x3ffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4605,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4606,((1U & (IData)((0x1ffffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4607,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4608,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4609,((1U & (~ (IData)(
                                                    (0x1ffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4610,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4611,((1U & (IData)((0xffffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4612,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4613,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4614,((1U & (~ (IData)(
                                                    (0xffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4615,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4616,((1U & (IData)((0x7fffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4617,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4618,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4619,((1U & (~ (IData)(
                                                    (0x7fffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4620,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4621,((1U & (IData)((0x3ffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4622,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4623,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4624,((1U & (~ (IData)(
                                                    (0x3ffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4625,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4626,((1U & (IData)((0x1ffffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4627,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4628,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4629,((1U & (~ (IData)(
                                                    (0x1ffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4630,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4631,((1U & (IData)((0xffffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4632,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4633,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4634,((1U & (~ (IData)(
                                                    (0xffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4635,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4636,((1U & (IData)((0x7fffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4637,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4638,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4639,((1U & (~ (IData)(
                                                    (0x7fffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4640,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4641,((1U & (IData)((0x3ffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4642,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4643,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4644,((1U & (~ (IData)(
                                                    (0x3ffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4645,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4646,((1U & (IData)((0x1ffffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4647,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4648,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4649,((1U & (~ (IData)(
                                                    (0x1ffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4650,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4651,((1U & (IData)((0xffffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4652,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4653,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4654,((1U & (~ (IData)(
                                                    (0xffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4655,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4656,((1U & (IData)((0x7fffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4657,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4659,((1U & (~ (IData)(
                                                    (0x7fffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4660,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4661,((1U & (IData)((0x3ffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+4662,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4663,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4664,((1U & (~ (IData)(
                                                    (0x3ffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+4665,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4666,((1U & (IData)((0x1ffffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+4667,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4668,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4669,((1U & (~ (IData)(
                                                    (0x1ffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+4670,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+4671,((1U & (IData)((0xffffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+4672,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+4673,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+4674,((1U & (~ (IData)(
                                                    (0xffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+4675,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+4676,((1U & (IData)((0x7fffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+4677,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+4678,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+4679,((1U & (~ (IData)(
                                                    (0x7fffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+4680,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+4681,((1U & (IData)((0x3ffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+4682,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+4683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+4684,((1U & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+4685,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+4686,((1U & (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+4687,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+4688,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+4689,((1U & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+4690,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+4691,((1U & (IData)((0xffffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+4692,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+4693,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+4694,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+4695,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+4696,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+4697,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+4698,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+4699,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+4700,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+4701,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+4702,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+4703,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+4704,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+4705,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+4706,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+4707,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+4708,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+4709,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+4710,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+4711,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+4712,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+4713,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+4714,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+4715,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+4716,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+4717,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+4718,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+4719,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+4720,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+4721,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+4722,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+4723,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+4724,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+4725,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+4726,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+4727,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+4728,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+4729,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+4730,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+4731,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+4732,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+4733,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+4734,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+4735,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+4736,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+4737,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+4738,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+4739,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+4740,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+4741,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+4742,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+4743,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+4744,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+4745,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+4746,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+4747,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+4748,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+4749,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+4750,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+4751,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+4752,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+4753,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+4754,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+4755,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+4756,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+4757,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+4758,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+4759,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+4760,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+4761,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+4762,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+4763,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+4764,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+4765,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+4766,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+4767,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+4768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+4769,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+4770,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+4771,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+4772,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+4773,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+4774,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+4775,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+4776,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+4777,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+4778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+4779,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+4780,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+4781,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+4782,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+4783,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+4784,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+4785,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+4786,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+4787,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+4788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+4789,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+4790,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+4791,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+4792,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+4793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+4794,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+4795,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+4796,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+4797,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+4798,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+4799,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+4800,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+4801,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+4802,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+4803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+4804,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+4805,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+4806,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+4807,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+4808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+4809,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+4810,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+4811,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+4812,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+4813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+4814,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+4815,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+4816,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+4817,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+4818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+4819,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+4820,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+4821,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+4822,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+4823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+4824,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+4825,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+4826,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+4827,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+4828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+4829,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+4830,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+4831,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+4832,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+4833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+4834,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+4835,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+4836,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+4837,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+4838,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+4839,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+4840,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+4841,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+4842,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+4843,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+4844,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+4845,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+4846,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+4847,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+4848,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+4849,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+4850,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+4851,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+4852,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+4853,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+4854,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+4855,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+4856,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+4857,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+4858,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+4859,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+4860,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+4861,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+4862,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+4863,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+4864,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+4865,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+4866,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+4867,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+4868,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+4869,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+4870,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+4871,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+4872,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+4873,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+4874,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+4875,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+4876,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+4877,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+4878,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+4879,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+4880,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+4881,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U))))));
        tracep->fullBit(oldp+4882,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+4883,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+4884,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U)))))));
        tracep->fullBit(oldp+4885,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+4886,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U))))));
        tracep->fullBit(oldp+4887,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+4888,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+4889,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U)))))));
        tracep->fullBit(oldp+4890,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+4891,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x17U)))),3);
        tracep->fullQData(oldp+4892,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x18U)),64);
        tracep->fullQData(oldp+4894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+4896,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+4898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+4899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+4900,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x19U)))));
        tracep->fullBit(oldp+4901,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x18U)))));
        tracep->fullBit(oldp+4902,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))));
        tracep->fullBit(oldp+4903,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+4904,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+4905,((1U & (IData)((0x7fffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+4906,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+4907,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+4908,((1U & (~ (IData)(
                                                    (0x7fffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+4909,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff800000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+4910,((1U & (IData)((0x3fffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+4911,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+4912,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+4913,((1U & (~ (IData)(
                                                    (0x3fffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+4914,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+4915,((1U & (IData)((0x1fffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+4916,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+4917,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+4918,((1U & (~ (IData)(
                                                    (0x1fffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+4919,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+4920,((1U & (IData)((0xffffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+4921,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+4922,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+4923,((1U & (~ (IData)(
                                                    (0xffffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+4924,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+4925,((1U & (IData)((0x7fffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+4926,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+4927,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+4928,((1U & (~ (IData)(
                                                    (0x7fffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+4929,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+4930,((1U & (IData)((0x3fffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+4931,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+4932,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+4933,((1U & (~ (IData)(
                                                    (0x3fffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+4934,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+4935,((1U & (IData)((0x1fffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+4936,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+4937,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+4938,((1U & (~ (IData)(
                                                    (0x1fffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+4939,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+4940,((1U & (IData)((0xffffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+4941,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+4942,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+4943,((1U & (~ (IData)(
                                                    (0xffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+4944,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+4945,((1U & (IData)((0x7fffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+4946,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+4947,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+4948,((1U & (~ (IData)(
                                                    (0x7fffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+4949,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+4950,((1U & (IData)((0x3fffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+4951,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+4952,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+4953,((1U & (~ (IData)(
                                                    (0x3fffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+4954,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+4955,((1U & (IData)((0x1fffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+4956,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+4957,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+4958,((1U & (~ (IData)(
                                                    (0x1fffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+4959,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+4960,((1U & (IData)((0xffffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+4961,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+4962,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+4963,((1U & (~ (IData)(
                                                    (0xffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+4964,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+4965,((1U & (IData)((0x7fffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+4966,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+4967,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+4968,((1U & (~ (IData)(
                                                    (0x7fffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+4969,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+4970,((1U & (IData)((0x3fffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+4971,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+4972,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+4973,((1U & (~ (IData)(
                                                    (0x3fffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+4974,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+4975,((1U & (IData)((0x1fffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+4976,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+4977,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+4978,((1U & (~ (IData)(
                                                    (0x1fffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+4979,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+4980,((1U & (IData)((0xffffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+4981,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+4982,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+4983,((1U & (~ (IData)(
                                                    (0xffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+4984,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+4985,((1U & (IData)((0x7fffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+4986,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+4987,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+4988,((1U & (~ (IData)(
                                                    (0x7fffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+4989,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+4990,((1U & (IData)((0x3fffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+4991,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+4992,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+4993,((1U & (~ (IData)(
                                                    (0x3fffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+4994,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+4995,((1U & (IData)((0x1fffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+4996,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+4997,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+4998,((1U & (~ (IData)(
                                                    (0x1fffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+4999,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5000,((1U & (IData)((0xffffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+5001,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5002,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5003,((1U & (~ (IData)(
                                                    (0xffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5004,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5005,((1U & (IData)((0x7fffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5006,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5007,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5008,((1U & (~ (IData)(
                                                    (0x7fffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5009,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5010,((1U & (IData)((0x3fffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5011,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5012,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5013,((1U & (~ (IData)(
                                                    (0x3fffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5014,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5015,((1U & (IData)((0x1fffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5016,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5017,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5018,((1U & (~ (IData)(
                                                    (0x1fffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5019,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+5020,((1U & (IData)((0xffffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5021,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5022,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5023,((1U & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5024,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5025,((1U & (IData)((0x7fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5026,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5027,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5028,((1U & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5029,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5030,((1U & (IData)((0x3fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5031,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5032,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5033,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5034,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5035,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5036,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5037,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5038,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5039,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5040,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5041,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5042,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5043,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5044,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5045,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5046,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5048,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5049,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5050,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5051,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5052,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5053,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5054,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5055,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5056,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5057,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5058,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5059,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5060,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5061,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5062,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5063,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5064,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5065,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5066,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5067,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5068,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5069,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5070,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5071,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5072,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5073,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5074,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5075,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5076,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5077,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5078,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5079,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5080,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5081,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5082,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5083,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5084,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5085,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5086,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5087,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5088,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5089,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5090,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5091,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5092,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5093,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5094,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5095,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5096,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5097,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5098,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5099,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5100,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5101,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5102,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5103,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5104,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5105,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5106,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5107,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5108,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5109,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5110,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5111,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5113,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5114,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5115,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5116,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5117,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5118,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5119,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5120,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5121,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5123,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5124,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5125,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5126,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5127,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5128,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5129,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5130,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5131,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5132,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5133,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5134,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5135,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5136,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5137,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5138,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5139,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5140,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5141,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5142,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5143,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5144,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5145,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5146,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5147,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5148,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5149,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5150,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5151,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5152,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5153,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5154,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5155,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5156,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5157,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5158,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5159,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5160,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5161,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5162,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5163,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5164,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5165,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5166,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5167,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5168,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5169,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5170,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5171,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5172,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5173,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5174,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5175,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5176,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5177,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5178,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5179,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5180,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5181,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5182,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5183,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5184,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5185,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5186,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5188,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5189,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5190,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5191,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5192,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5193,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5194,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5195,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5196,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5197,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5198,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5199,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5200,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+5201,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5202,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5203,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+5204,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5205,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+5206,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5207,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
    }
}
