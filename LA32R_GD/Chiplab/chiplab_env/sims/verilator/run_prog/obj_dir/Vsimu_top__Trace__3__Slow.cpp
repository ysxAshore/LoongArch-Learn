// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__traceFullSub3(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp543;
    VlWide<4>/*127:0*/ __Vtemp545;
    VlWide<4>/*127:0*/ __Vtemp546;
    VlWide<4>/*127:0*/ __Vtemp547;
    VlWide<3>/*95:0*/ __Vtemp548;
    VlWide<4>/*127:0*/ __Vtemp550;
    VlWide<4>/*127:0*/ __Vtemp551;
    VlWide<4>/*127:0*/ __Vtemp553;
    VlWide<3>/*95:0*/ __Vtemp554;
    VlWide<3>/*95:0*/ __Vtemp559;
    VlWide<8>/*255:0*/ __Vtemp564;
    VlWide<8>/*255:0*/ __Vtemp566;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+5208,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+5209,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5210,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U))))));
        tracep->fullBit(oldp+5211,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5212,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5213,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U)))))));
        tracep->fullBit(oldp+5214,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5215,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U))))));
        tracep->fullBit(oldp+5216,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5217,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5218,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U)))))));
        tracep->fullBit(oldp+5219,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5220,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x19U)))),3);
        tracep->fullQData(oldp+5221,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)),64);
        tracep->fullQData(oldp+5223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5225,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5229,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1bU)))));
        tracep->fullBit(oldp+5230,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1aU)))));
        tracep->fullBit(oldp+5231,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))));
        tracep->fullBit(oldp+5232,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+5233,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5234,((1U & (IData)((0x7ffffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+5235,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5236,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5237,((1U & (~ (IData)(
                                                    (0x7ffffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+5238,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5239,((1U & (IData)((0x3fffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5240,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5241,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5242,((1U & (~ (IData)(
                                                    (0x3fffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+5243,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5244,((1U & (IData)((0x1fffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5245,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5246,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5247,((1U & (~ (IData)(
                                                    (0x1fffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5248,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff800000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5249,((1U & (IData)((0xfffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5250,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5251,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5252,((1U & (~ (IData)(
                                                    (0xfffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5253,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5254,((1U & (IData)((0x7ffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5255,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5256,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5257,((1U & (~ (IData)(
                                                    (0x7ffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5258,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5259,((1U & (IData)((0x3fffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5260,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5261,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5262,((1U & (~ (IData)(
                                                    (0x3fffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5263,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5264,((1U & (IData)((0x1fffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5265,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5266,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5267,((1U & (~ (IData)(
                                                    (0x1fffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5268,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5269,((1U & (IData)((0xfffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5270,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5271,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5272,((1U & (~ (IData)(
                                                    (0xfffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5273,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5274,((1U & (IData)((0x7ffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5275,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5276,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5277,((1U & (~ (IData)(
                                                    (0x7ffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5278,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5279,((1U & (IData)((0x3fffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5280,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5281,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5282,((1U & (~ (IData)(
                                                    (0x3fffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5283,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5284,((1U & (IData)((0x1fffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5285,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5286,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5287,((1U & (~ (IData)(
                                                    (0x1fffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5288,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5289,((1U & (IData)((0xfffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5290,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5291,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5292,((1U & (~ (IData)(
                                                    (0xfffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5293,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5294,((1U & (IData)((0x7ffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5295,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5296,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5297,((1U & (~ (IData)(
                                                    (0x7ffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5298,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5299,((1U & (IData)((0x3fffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5300,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5301,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5302,((1U & (~ (IData)(
                                                    (0x3fffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5303,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5304,((1U & (IData)((0x1fffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5305,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5306,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5307,((1U & (~ (IData)(
                                                    (0x1fffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5308,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5309,((1U & (IData)((0xfffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5310,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5311,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5312,((1U & (~ (IData)(
                                                    (0xfffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5313,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5314,((1U & (IData)((0x7ffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5315,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5316,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5317,((1U & (~ (IData)(
                                                    (0x7ffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5318,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5319,((1U & (IData)((0x3fffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5320,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5321,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5322,((1U & (~ (IData)(
                                                    (0x3fffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+5323,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5324,((1U & (IData)((0x1fffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+5325,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5326,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5327,((1U & (~ (IData)(
                                                    (0x1fffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+5328,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5329,((1U & (IData)((0xfffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+5330,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5331,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5332,((1U & (~ (IData)(
                                                    (0xfffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+5333,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5334,((1U & (IData)((0x7ffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+5335,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5336,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5337,((1U & (~ (IData)(
                                                    (0x7ffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+5338,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5339,((1U & (IData)((0x3fffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+5340,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5341,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5342,((1U & (~ (IData)(
                                                    (0x3fffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5343,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5344,((1U & (IData)((0x1fffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5345,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5346,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5347,((1U & (~ (IData)(
                                                    (0x1fffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5348,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+5349,((1U & (IData)((0xfffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5350,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5351,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5352,((1U & (~ (IData)(
                                                    (0xfffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5353,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5354,((1U & (IData)((0x7ffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5355,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5356,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5357,((1U & (~ (IData)(
                                                    (0x7ffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5358,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5359,((1U & (IData)((0x3fffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5360,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5362,((1U & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5363,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5364,((1U & (IData)((0x1fffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5365,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5366,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5367,((1U & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5368,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5369,((1U & (IData)((0xfffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5370,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5371,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5372,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5373,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5374,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5375,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5376,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5377,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5378,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5379,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5380,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5381,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5382,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5383,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5384,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5385,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5386,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5387,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5388,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5389,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5390,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5391,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5392,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5393,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5394,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5395,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5396,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5397,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5398,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5399,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5400,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5401,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5402,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5403,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5404,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5405,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5406,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5407,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5408,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5409,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5410,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5411,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5412,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5413,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5414,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5415,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5416,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5417,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5418,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5419,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5420,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5421,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5422,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5423,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5424,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5425,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5426,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5427,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5428,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5429,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5430,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5431,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5432,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5433,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5434,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5435,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5436,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5437,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5438,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5439,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5440,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5441,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5442,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5443,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5444,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5445,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5446,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5447,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5448,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5449,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5450,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5451,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5452,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5453,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5454,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5455,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5456,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5457,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5458,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5459,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5460,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5461,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5462,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5463,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5464,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5465,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5466,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5467,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5468,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5469,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5470,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5471,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5472,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5473,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5474,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5475,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5476,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5477,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5478,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5479,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5480,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5481,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5482,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5483,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5484,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5485,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5486,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5487,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5488,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5489,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5490,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5491,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5492,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5493,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5494,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5495,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5496,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5497,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5498,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5499,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5500,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5501,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5502,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5503,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5504,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5505,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5506,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5507,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5508,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5509,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5510,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5511,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5512,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5513,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5514,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5515,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5516,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5517,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5518,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5519,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5520,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5521,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5522,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5523,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5524,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5525,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5526,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5527,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5528,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5529,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5530,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5531,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5532,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5533,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5534,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5535,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5536,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+5537,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5538,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5539,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U))))));
        tracep->fullBit(oldp+5540,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5541,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5542,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U)))))));
        tracep->fullBit(oldp+5543,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5544,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U))))));
        tracep->fullBit(oldp+5545,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5546,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5547,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U)))))));
        tracep->fullBit(oldp+5548,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5549,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x1bU)))),3);
        tracep->fullQData(oldp+5550,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)),64);
        tracep->fullQData(oldp+5552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5554,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5558,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1dU)))));
        tracep->fullBit(oldp+5559,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1cU)))));
        tracep->fullBit(oldp+5560,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU)))));
        tracep->fullBit(oldp+5561,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU))))));
        tracep->fullBit(oldp+5562,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x1cU)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1cU)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5563,((1U & (IData)((0x7ffffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU))))));
        tracep->fullBit(oldp+5564,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5565,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5566,((1U & (~ (IData)(
                                                    (0x7ffffffff8000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU)))))));
        tracep->fullBit(oldp+5567,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5568,((1U & (IData)((0x3ffffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+5569,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5570,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5571,((1U & (~ (IData)(
                                                    (0x3ffffffffc000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU)))))));
        tracep->fullBit(oldp+5572,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5573,((1U & (IData)((0x1ffffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+5574,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5575,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5576,((1U & (~ (IData)(
                                                    (0x1ffffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+5577,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5578,((1U & (IData)((0xfffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5579,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5580,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5581,((1U & (~ (IData)(
                                                    (0xfffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+5582,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5583,((1U & (IData)((0x7ffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5584,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5585,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5586,((1U & (~ (IData)(
                                                    (0x7ffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5587,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff800000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5588,((1U & (IData)((0x3ffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5589,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5590,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5591,((1U & (~ (IData)(
                                                    (0x3ffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5592,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5593,((1U & (IData)((0x1ffffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5594,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5595,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5596,((1U & (~ (IData)(
                                                    (0x1ffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5597,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5598,((1U & (IData)((0xfffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5599,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5600,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5601,((1U & (~ (IData)(
                                                    (0xfffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5602,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5603,((1U & (IData)((0x7ffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5604,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5605,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5606,((1U & (~ (IData)(
                                                    (0x7ffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5607,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5608,((1U & (IData)((0x3ffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5609,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5610,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5611,((1U & (~ (IData)(
                                                    (0x3ffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5612,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5613,((1U & (IData)((0x1ffffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5614,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5615,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5616,((1U & (~ (IData)(
                                                    (0x1ffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5617,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5618,((1U & (IData)((0xfffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5619,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5620,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5621,((1U & (~ (IData)(
                                                    (0xfffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5622,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5623,((1U & (IData)((0x7ffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5624,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5625,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5626,((1U & (~ (IData)(
                                                    (0x7ffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5627,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5628,((1U & (IData)((0x3ffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5629,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5630,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5631,((1U & (~ (IData)(
                                                    (0x3ffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5632,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5633,((1U & (IData)((0x1ffffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5634,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5635,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5636,((1U & (~ (IData)(
                                                    (0x1ffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5637,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5638,((1U & (IData)((0xfffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5639,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5640,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5641,((1U & (~ (IData)(
                                                    (0xfffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5642,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5643,((1U & (IData)((0x7ffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5644,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5645,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5646,((1U & (~ (IData)(
                                                    (0x7ffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5647,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5648,((1U & (IData)((0x3ffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5649,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5650,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5651,((1U & (~ (IData)(
                                                    (0x3ffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5652,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5653,((1U & (IData)((0x1ffffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5654,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5655,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5656,((1U & (~ (IData)(
                                                    (0x1ffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5657,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5658,((1U & (IData)((0xfffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5659,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5660,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5661,((1U & (~ (IData)(
                                                    (0xfffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+5662,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5663,((1U & (IData)((0x7ffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+5664,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5665,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5666,((1U & (~ (IData)(
                                                    (0x7ffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+5667,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5668,((1U & (IData)((0x3ffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+5669,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5670,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+5671,((1U & (~ (IData)(
                                                    (0x3ffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+5672,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+5673,((1U & (IData)((0x1ffffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+5674,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+5675,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+5676,((1U & (~ (IData)(
                                                    (0x1ffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+5677,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+5678,((1U & (IData)((0xfffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+5679,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+5680,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+5681,((1U & (~ (IData)(
                                                    (0xfffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+5682,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+5683,((1U & (IData)((0x7ffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+5684,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+5685,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+5686,((1U & (~ (IData)(
                                                    (0x7ffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+5687,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+5688,((1U & (IData)((0x3ffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+5689,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+5690,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+5691,((1U & (~ (IData)(
                                                    (0x3ffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+5692,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+5693,((1U & (IData)((0x1ffffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+5694,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+5695,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+5696,((1U & (~ (IData)(
                                                    (0x1ffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+5697,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+5698,((1U & (IData)((0xfffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+5699,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+5700,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+5701,((1U & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+5702,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+5703,((1U & (IData)((0x7ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+5704,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+5705,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+5706,((1U & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+5707,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+5708,((1U & (IData)((0x3ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+5709,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+5710,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+5711,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+5712,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+5713,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+5714,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+5715,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+5716,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+5717,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+5718,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+5719,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+5720,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+5721,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+5722,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+5723,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+5724,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+5725,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+5726,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+5727,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+5728,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+5729,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+5730,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+5731,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+5732,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+5733,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+5734,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+5735,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+5736,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+5737,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+5738,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+5739,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+5740,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+5741,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+5742,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+5743,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+5744,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+5745,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+5746,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+5747,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+5748,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+5749,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+5750,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+5751,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+5752,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+5753,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+5754,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+5755,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+5756,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+5757,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+5758,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+5759,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+5760,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+5761,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+5762,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+5763,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+5764,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+5765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+5766,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+5767,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+5768,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+5769,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+5770,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+5771,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+5772,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+5773,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+5774,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+5775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+5776,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+5777,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+5778,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+5779,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+5780,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+5781,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+5782,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+5783,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+5784,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+5785,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+5786,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+5787,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+5788,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+5789,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+5790,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+5791,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+5792,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+5793,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+5794,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+5795,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+5796,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+5797,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+5798,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+5799,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+5800,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+5801,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+5802,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+5803,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+5804,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+5805,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+5806,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+5807,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+5808,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+5809,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+5810,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+5811,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+5812,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+5813,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+5814,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+5815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+5816,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+5817,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+5818,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+5819,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+5820,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+5821,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+5822,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+5823,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+5824,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+5825,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+5826,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+5827,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+5828,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+5829,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+5830,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+5831,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+5832,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+5833,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+5834,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+5835,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+5836,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+5837,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+5838,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+5839,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+5840,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+5841,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+5842,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+5843,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+5844,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+5845,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+5846,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+5847,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+5848,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+5849,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+5850,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+5851,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+5852,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+5853,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+5854,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+5855,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+5856,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+5857,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+5858,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+5859,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+5860,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+5861,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+5862,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+5863,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+5864,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+5865,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+5866,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+5867,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+5868,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U))))));
        tracep->fullBit(oldp+5869,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+5870,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+5871,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U)))))));
        tracep->fullBit(oldp+5872,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+5873,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U))))));
        tracep->fullBit(oldp+5874,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+5875,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+5876,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U)))))));
        tracep->fullBit(oldp+5877,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullCData(oldp+5878,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                    >> 0x1dU)))),3);
        tracep->fullQData(oldp+5879,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)),64);
        tracep->fullQData(oldp+5881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX),64);
        tracep->fullBit(oldp+5883,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx));
        tracep->fullBit(oldp+5885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x));
        tracep->fullBit(oldp+5886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x));
        tracep->fullBit(oldp+5887,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1fU)))));
        tracep->fullBit(oldp+5888,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                                  >> 0x1eU)))));
        tracep->fullBit(oldp+5889,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU)))));
        tracep->fullBit(oldp+5890,((1U & (~ (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1eU))))));
        tracep->fullBit(oldp+5891,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                      & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                    << 0x1eU)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   << 0x1eU)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
        tracep->fullBit(oldp+5892,((1U & (IData)((0x7fffffffe0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU))))));
        tracep->fullBit(oldp+5893,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [1U])));
        tracep->fullBit(oldp+5894,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [1U] >> 1U))));
        tracep->fullBit(oldp+5895,((1U & (~ (IData)(
                                                    (0x7fffffffe0000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1dU)))))));
        tracep->fullBit(oldp+5896,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [1U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [1U]))));
        tracep->fullBit(oldp+5897,((1U & (IData)((0x3ffffffff0000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU))))));
        tracep->fullBit(oldp+5898,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [2U])));
        tracep->fullBit(oldp+5899,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [2U] >> 1U))));
        tracep->fullBit(oldp+5900,((1U & (~ (IData)(
                                                    (0x3ffffffff0000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1cU)))))));
        tracep->fullBit(oldp+5901,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [2U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [2U]))));
        tracep->fullBit(oldp+5902,((1U & (IData)((0x1ffffffff8000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU))))));
        tracep->fullBit(oldp+5903,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [3U])));
        tracep->fullBit(oldp+5904,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [3U] >> 1U))));
        tracep->fullBit(oldp+5905,((1U & (~ (IData)(
                                                    (0x1ffffffff8000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU)))))));
        tracep->fullBit(oldp+5906,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [3U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [3U]))));
        tracep->fullBit(oldp+5907,((1U & (IData)((0xffffffffc000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU))))));
        tracep->fullBit(oldp+5908,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [4U])));
        tracep->fullBit(oldp+5909,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [4U] >> 1U))));
        tracep->fullBit(oldp+5910,((1U & (~ (IData)(
                                                    (0xffffffffc000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU)))))));
        tracep->fullBit(oldp+5911,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [4U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [4U]))));
        tracep->fullBit(oldp+5912,((1U & (IData)((0x7fffffffe000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x19U))))));
        tracep->fullBit(oldp+5913,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [5U])));
        tracep->fullBit(oldp+5914,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [5U] >> 1U))));
        tracep->fullBit(oldp+5915,((1U & (~ (IData)(
                                                    (0x7fffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U)))))));
        tracep->fullBit(oldp+5916,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [5U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [5U]))));
        tracep->fullBit(oldp+5917,((1U & (IData)((0x3ffffffff000000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x18U))))));
        tracep->fullBit(oldp+5918,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [6U])));
        tracep->fullBit(oldp+5919,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [6U] >> 1U))));
        tracep->fullBit(oldp+5920,((1U & (~ (IData)(
                                                    (0x3ffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U)))))));
        tracep->fullBit(oldp+5921,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff000000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff000000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [6U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [6U]))));
        tracep->fullBit(oldp+5922,((1U & (IData)((0x1ffffffff800000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x17U))))));
        tracep->fullBit(oldp+5923,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [7U])));
        tracep->fullBit(oldp+5924,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [7U] >> 1U))));
        tracep->fullBit(oldp+5925,((1U & (~ (IData)(
                                                    (0x1ffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U)))))));
        tracep->fullBit(oldp+5926,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff800000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff800000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [7U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [7U]))));
        tracep->fullBit(oldp+5927,((1U & (IData)((0xffffffffc00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x16U))))));
        tracep->fullBit(oldp+5928,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [8U])));
        tracep->fullBit(oldp+5929,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [8U] >> 1U))));
        tracep->fullBit(oldp+5930,((1U & (~ (IData)(
                                                    (0xffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U)))))));
        tracep->fullBit(oldp+5931,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [8U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [8U]))));
        tracep->fullBit(oldp+5932,((1U & (IData)((0x7fffffffe00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x15U))))));
        tracep->fullBit(oldp+5933,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [9U])));
        tracep->fullBit(oldp+5934,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [9U] >> 1U))));
        tracep->fullBit(oldp+5935,((1U & (~ (IData)(
                                                    (0x7fffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U)))))));
        tracep->fullBit(oldp+5936,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [9U] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [9U]))));
        tracep->fullBit(oldp+5937,((1U & (IData)((0x3ffffffff00000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x14U))))));
        tracep->fullBit(oldp+5938,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xaU])));
        tracep->fullBit(oldp+5939,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xaU] >> 1U))));
        tracep->fullBit(oldp+5940,((1U & (~ (IData)(
                                                    (0x3ffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U)))))));
        tracep->fullBit(oldp+5941,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff00000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff00000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xaU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xaU]))));
        tracep->fullBit(oldp+5942,((1U & (IData)((0x1ffffffff80000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x13U))))));
        tracep->fullBit(oldp+5943,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xbU])));
        tracep->fullBit(oldp+5944,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xbU] >> 1U))));
        tracep->fullBit(oldp+5945,((1U & (~ (IData)(
                                                    (0x1ffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U)))))));
        tracep->fullBit(oldp+5946,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff80000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff80000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xbU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xbU]))));
        tracep->fullBit(oldp+5947,((1U & (IData)((0xffffffffc0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x12U))))));
        tracep->fullBit(oldp+5948,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xcU])));
        tracep->fullBit(oldp+5949,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xcU] >> 1U))));
        tracep->fullBit(oldp+5950,((1U & (~ (IData)(
                                                    (0xffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U)))))));
        tracep->fullBit(oldp+5951,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xcU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xcU]))));
        tracep->fullBit(oldp+5952,((1U & (IData)((0x7fffffffe0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x11U))))));
        tracep->fullBit(oldp+5953,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xdU])));
        tracep->fullBit(oldp+5954,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xdU] >> 1U))));
        tracep->fullBit(oldp+5955,((1U & (~ (IData)(
                                                    (0x7fffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U)))))));
        tracep->fullBit(oldp+5956,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xdU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xdU]))));
        tracep->fullBit(oldp+5957,((1U & (IData)((0x3ffffffff0000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0x10U))))));
        tracep->fullBit(oldp+5958,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xeU])));
        tracep->fullBit(oldp+5959,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xeU] >> 1U))));
        tracep->fullBit(oldp+5960,((1U & (~ (IData)(
                                                    (0x3ffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U)))))));
        tracep->fullBit(oldp+5961,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xeU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xeU]))));
        tracep->fullBit(oldp+5962,((1U & (IData)((0x1ffffffff8000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xfU))))));
        tracep->fullBit(oldp+5963,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xfU])));
        tracep->fullBit(oldp+5964,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0xfU] >> 1U))));
        tracep->fullBit(oldp+5965,((1U & (~ (IData)(
                                                    (0x1ffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU)))))));
        tracep->fullBit(oldp+5966,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0xfU] >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0xfU]))));
        tracep->fullBit(oldp+5967,((1U & (IData)((0xffffffffc000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xeU))))));
        tracep->fullBit(oldp+5968,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x10U])));
        tracep->fullBit(oldp+5969,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x10U] >> 1U))));
        tracep->fullBit(oldp+5970,((1U & (~ (IData)(
                                                    (0xffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU)))))));
        tracep->fullBit(oldp+5971,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x10U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x10U]))));
        tracep->fullBit(oldp+5972,((1U & (IData)((0x7fffffffe000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xdU))))));
        tracep->fullBit(oldp+5973,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x11U])));
        tracep->fullBit(oldp+5974,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x11U] >> 1U))));
        tracep->fullBit(oldp+5975,((1U & (~ (IData)(
                                                    (0x7fffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU)))))));
        tracep->fullBit(oldp+5976,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x11U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x11U]))));
        tracep->fullBit(oldp+5977,((1U & (IData)((0x3ffffffff000ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xcU))))));
        tracep->fullBit(oldp+5978,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x12U])));
        tracep->fullBit(oldp+5979,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x12U] >> 1U))));
        tracep->fullBit(oldp+5980,((1U & (~ (IData)(
                                                    (0x3ffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU)))))));
        tracep->fullBit(oldp+5981,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff000ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff000ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x12U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x12U]))));
        tracep->fullBit(oldp+5982,((1U & (IData)((0x1ffffffff800ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xbU))))));
        tracep->fullBit(oldp+5983,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x13U])));
        tracep->fullBit(oldp+5984,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x13U] >> 1U))));
        tracep->fullBit(oldp+5985,((1U & (~ (IData)(
                                                    (0x1ffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU)))))));
        tracep->fullBit(oldp+5986,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff800ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff800ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x13U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x13U]))));
        tracep->fullBit(oldp+5987,((1U & (IData)((0xffffffffc00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 0xaU))))));
        tracep->fullBit(oldp+5988,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x14U])));
        tracep->fullBit(oldp+5989,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x14U] >> 1U))));
        tracep->fullBit(oldp+5990,((1U & (~ (IData)(
                                                    (0xffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU)))))));
        tracep->fullBit(oldp+5991,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x14U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x14U]))));
        tracep->fullBit(oldp+5992,((1U & (IData)((0x7fffffffe00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 9U))))));
        tracep->fullBit(oldp+5993,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x15U])));
        tracep->fullBit(oldp+5994,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x15U] >> 1U))));
        tracep->fullBit(oldp+5995,((1U & (~ (IData)(
                                                    (0x7fffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U)))))));
        tracep->fullBit(oldp+5996,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x15U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x15U]))));
        tracep->fullBit(oldp+5997,((1U & (IData)((0x3ffffffff00ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 8U))))));
        tracep->fullBit(oldp+5998,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x16U])));
        tracep->fullBit(oldp+5999,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x16U] >> 1U))));
        tracep->fullBit(oldp+6000,((1U & (~ (IData)(
                                                    (0x3ffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U)))))));
        tracep->fullBit(oldp+6001,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff00ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff00ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x16U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x16U]))));
        tracep->fullBit(oldp+6002,((1U & (IData)((0x1ffffffff80ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 7U))))));
        tracep->fullBit(oldp+6003,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x17U])));
        tracep->fullBit(oldp+6004,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x17U] >> 1U))));
        tracep->fullBit(oldp+6005,((1U & (~ (IData)(
                                                    (0x1ffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U)))))));
        tracep->fullBit(oldp+6006,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff80ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff80ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x17U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x17U]))));
        tracep->fullBit(oldp+6007,((1U & (IData)((0xffffffffc0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 6U))))));
        tracep->fullBit(oldp+6008,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x18U])));
        tracep->fullBit(oldp+6009,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x18U] >> 1U))));
        tracep->fullBit(oldp+6010,((1U & (~ (IData)(
                                                    (0xffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U)))))));
        tracep->fullBit(oldp+6011,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffc0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffc0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x18U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x18U]))));
        tracep->fullBit(oldp+6012,((1U & (IData)((0x7fffffffe0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 5U))))));
        tracep->fullBit(oldp+6013,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x19U])));
        tracep->fullBit(oldp+6014,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x19U] >> 1U))));
        tracep->fullBit(oldp+6015,((1U & (~ (IData)(
                                                    (0x7fffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U)))))));
        tracep->fullBit(oldp+6016,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffe0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffe0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x19U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x19U]))));
        tracep->fullBit(oldp+6017,((1U & (IData)((0x3ffffffff0ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 4U))))));
        tracep->fullBit(oldp+6018,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU])));
        tracep->fullBit(oldp+6019,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU] >> 1U))));
        tracep->fullBit(oldp+6020,((1U & (~ (IData)(
                                                    (0x3ffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U)))))));
        tracep->fullBit(oldp+6021,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffff0ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffff0ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU]))));
        tracep->fullBit(oldp+6022,((1U & (IData)((0x1ffffffff8ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 3U))))));
        tracep->fullBit(oldp+6023,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU])));
        tracep->fullBit(oldp+6024,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU] >> 1U))));
        tracep->fullBit(oldp+6025,((1U & (~ (IData)(
                                                    (0x1ffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U)))))));
        tracep->fullBit(oldp+6026,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffff8ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffff8ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU]))));
        tracep->fullBit(oldp+6027,((1U & (IData)((0xffffffffcULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 2U))))));
        tracep->fullBit(oldp+6028,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU])));
        tracep->fullBit(oldp+6029,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU] >> 1U))));
        tracep->fullBit(oldp+6030,((1U & (~ (IData)(
                                                    (0xffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U)))))));
        tracep->fullBit(oldp+6031,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffcULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffcULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU]))));
        tracep->fullBit(oldp+6032,((1U & (IData)((0x7fffffffeULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     << 1U))))));
        tracep->fullBit(oldp+6033,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU])));
        tracep->fullBit(oldp+6034,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU] >> 1U))));
        tracep->fullBit(oldp+6035,((1U & (~ (IData)(
                                                    (0x7fffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U)))))));
        tracep->fullBit(oldp+6036,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffeULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        << 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffeULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       << 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU]))));
        tracep->fullBit(oldp+6037,((1U & (IData)((0x3ffffffffULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
        tracep->fullBit(oldp+6038,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU])));
        tracep->fullBit(oldp+6039,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU] >> 1U))));
        tracep->fullBit(oldp+6040,((1U & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
        tracep->fullBit(oldp+6041,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffffULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU]))));
        tracep->fullBit(oldp+6042,((1U & (IData)((0x1ffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 1U))))));
        tracep->fullBit(oldp+6043,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU])));
        tracep->fullBit(oldp+6044,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU] >> 1U))));
        tracep->fullBit(oldp+6045,((1U & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U)))))));
        tracep->fullBit(oldp+6046,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x1fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU]))));
        tracep->fullBit(oldp+6047,((1U & (IData)((0xffffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 2U))))));
        tracep->fullBit(oldp+6048,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x20U])));
        tracep->fullBit(oldp+6049,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x20U] >> 1U))));
        tracep->fullBit(oldp+6050,((1U & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U)))))));
        tracep->fullBit(oldp+6051,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x20U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x20U]))));
        tracep->fullBit(oldp+6052,((1U & (IData)((0x7fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 3U))))));
        tracep->fullBit(oldp+6053,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x21U])));
        tracep->fullBit(oldp+6054,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x21U] >> 1U))));
        tracep->fullBit(oldp+6055,((1U & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U)))))));
        tracep->fullBit(oldp+6056,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x21U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x21U]))));
        tracep->fullBit(oldp+6057,((1U & (IData)((0x3fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 4U))))));
        tracep->fullBit(oldp+6058,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x22U])));
        tracep->fullBit(oldp+6059,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x22U] >> 1U))));
        tracep->fullBit(oldp+6060,((1U & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U)))))));
        tracep->fullBit(oldp+6061,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x22U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x22U]))));
        tracep->fullBit(oldp+6062,((1U & (IData)((0x1fffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 5U))))));
        tracep->fullBit(oldp+6063,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x23U])));
        tracep->fullBit(oldp+6064,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x23U] >> 1U))));
        tracep->fullBit(oldp+6065,((1U & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+6066,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x23U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x23U]))));
        tracep->fullBit(oldp+6067,((1U & (IData)((0xfffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 6U))))));
        tracep->fullBit(oldp+6068,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x24U])));
        tracep->fullBit(oldp+6069,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x24U] >> 1U))));
        tracep->fullBit(oldp+6070,((1U & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U)))))));
        tracep->fullBit(oldp+6071,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x24U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x24U]))));
        tracep->fullBit(oldp+6072,((1U & (IData)((0x7ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 7U))))));
        tracep->fullBit(oldp+6073,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x25U])));
        tracep->fullBit(oldp+6074,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x25U] >> 1U))));
        tracep->fullBit(oldp+6075,((1U & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U)))))));
        tracep->fullBit(oldp+6076,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x25U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x25U]))));
        tracep->fullBit(oldp+6077,((1U & (IData)((0x3ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 8U))))));
        tracep->fullBit(oldp+6078,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x26U])));
        tracep->fullBit(oldp+6079,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x26U] >> 1U))));
        tracep->fullBit(oldp+6080,((1U & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U)))))));
        tracep->fullBit(oldp+6081,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x26U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x26U]))));
        tracep->fullBit(oldp+6082,((1U & (IData)((0x1ffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 9U))))));
        tracep->fullBit(oldp+6083,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x27U])));
        tracep->fullBit(oldp+6084,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x27U] >> 1U))));
        tracep->fullBit(oldp+6085,((1U & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U)))))));
        tracep->fullBit(oldp+6086,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x27U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x27U]))));
        tracep->fullBit(oldp+6087,((1U & (IData)((0xffffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU))))));
        tracep->fullBit(oldp+6088,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x28U])));
        tracep->fullBit(oldp+6089,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x28U] >> 1U))));
        tracep->fullBit(oldp+6090,((1U & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU)))))));
        tracep->fullBit(oldp+6091,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x28U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x28U]))));
        tracep->fullBit(oldp+6092,((1U & (IData)((0x7fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU))))));
        tracep->fullBit(oldp+6093,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x29U])));
        tracep->fullBit(oldp+6094,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x29U] >> 1U))));
        tracep->fullBit(oldp+6095,((1U & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU)))))));
        tracep->fullBit(oldp+6096,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x29U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x29U]))));
        tracep->fullBit(oldp+6097,((1U & (IData)((0x3fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU))))));
        tracep->fullBit(oldp+6098,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU])));
        tracep->fullBit(oldp+6099,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU] >> 1U))));
        tracep->fullBit(oldp+6100,((1U & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU)))))));
        tracep->fullBit(oldp+6101,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU]))));
        tracep->fullBit(oldp+6102,((1U & (IData)((0x1fffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU))))));
        tracep->fullBit(oldp+6103,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU])));
        tracep->fullBit(oldp+6104,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU] >> 1U))));
        tracep->fullBit(oldp+6105,((1U & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU)))))));
        tracep->fullBit(oldp+6106,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU]))));
        tracep->fullBit(oldp+6107,((1U & (IData)((0xfffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+6108,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU])));
        tracep->fullBit(oldp+6109,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU] >> 1U))));
        tracep->fullBit(oldp+6110,((1U & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU)))))));
        tracep->fullBit(oldp+6111,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU]))));
        tracep->fullBit(oldp+6112,((1U & (IData)((0x7ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU))))));
        tracep->fullBit(oldp+6113,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU])));
        tracep->fullBit(oldp+6114,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU] >> 1U))));
        tracep->fullBit(oldp+6115,((1U & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU)))))));
        tracep->fullBit(oldp+6116,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU]))));
        tracep->fullBit(oldp+6117,((1U & (IData)((0x3ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U))))));
        tracep->fullBit(oldp+6118,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU])));
        tracep->fullBit(oldp+6119,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU] >> 1U))));
        tracep->fullBit(oldp+6120,((1U & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U)))))));
        tracep->fullBit(oldp+6121,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU]))));
        tracep->fullBit(oldp+6122,((1U & (IData)((0x1ffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U))))));
        tracep->fullBit(oldp+6123,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU])));
        tracep->fullBit(oldp+6124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU] >> 1U))));
        tracep->fullBit(oldp+6125,((1U & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U)))))));
        tracep->fullBit(oldp+6126,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x2fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU]))));
        tracep->fullBit(oldp+6127,((1U & (IData)((0xffffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U))))));
        tracep->fullBit(oldp+6128,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x30U])));
        tracep->fullBit(oldp+6129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x30U] >> 1U))));
        tracep->fullBit(oldp+6130,((1U & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U)))))));
        tracep->fullBit(oldp+6131,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x30U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x30U]))));
        tracep->fullBit(oldp+6132,((1U & (IData)((0x7fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U))))));
        tracep->fullBit(oldp+6133,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x31U])));
        tracep->fullBit(oldp+6134,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x31U] >> 1U))));
        tracep->fullBit(oldp+6135,((1U & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U)))))));
        tracep->fullBit(oldp+6136,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x31U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x31U]))));
        tracep->fullBit(oldp+6137,((1U & (IData)((0x3fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U))))));
        tracep->fullBit(oldp+6138,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x32U])));
        tracep->fullBit(oldp+6139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x32U] >> 1U))));
        tracep->fullBit(oldp+6140,((1U & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U)))))));
        tracep->fullBit(oldp+6141,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x32U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x32U]))));
        tracep->fullBit(oldp+6142,((1U & (IData)((0x1fffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U))))));
        tracep->fullBit(oldp+6143,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x33U])));
        tracep->fullBit(oldp+6144,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x33U] >> 1U))));
        tracep->fullBit(oldp+6145,((1U & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U)))))));
        tracep->fullBit(oldp+6146,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x33U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x33U]))));
        tracep->fullBit(oldp+6147,((1U & (IData)((0xfffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U))))));
        tracep->fullBit(oldp+6148,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x34U])));
        tracep->fullBit(oldp+6149,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x34U] >> 1U))));
        tracep->fullBit(oldp+6150,((1U & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+6151,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x34U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x34U]))));
        tracep->fullBit(oldp+6152,((1U & (IData)((0x7ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+6153,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x35U])));
        tracep->fullBit(oldp+6154,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x35U] >> 1U))));
        tracep->fullBit(oldp+6155,((1U & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U)))))));
        tracep->fullBit(oldp+6156,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x35U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x35U]))));
        tracep->fullBit(oldp+6157,((1U & (IData)((0x3ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U))))));
        tracep->fullBit(oldp+6158,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x36U])));
        tracep->fullBit(oldp+6159,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x36U] >> 1U))));
        tracep->fullBit(oldp+6160,((1U & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U)))))));
        tracep->fullBit(oldp+6161,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x36U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x36U]))));
        tracep->fullBit(oldp+6162,((1U & (IData)((0x1ffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U))))));
        tracep->fullBit(oldp+6163,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x37U])));
        tracep->fullBit(oldp+6164,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x37U] >> 1U))));
        tracep->fullBit(oldp+6165,((1U & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+6166,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1ffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x37U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x37U]))));
        tracep->fullBit(oldp+6167,((1U & (IData)((0xffULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU))))));
        tracep->fullBit(oldp+6168,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x38U])));
        tracep->fullBit(oldp+6169,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x38U] >> 1U))));
        tracep->fullBit(oldp+6170,((1U & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU)))))));
        tracep->fullBit(oldp+6171,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xffULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x38U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x38U]))));
        tracep->fullBit(oldp+6172,((1U & (IData)((0x7fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU))))));
        tracep->fullBit(oldp+6173,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x39U])));
        tracep->fullBit(oldp+6174,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x39U] >> 1U))));
        tracep->fullBit(oldp+6175,((1U & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU)))))));
        tracep->fullBit(oldp+6176,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x7fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x39U] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x39U]))));
        tracep->fullBit(oldp+6177,((1U & (IData)((0x3fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU))))));
        tracep->fullBit(oldp+6178,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU])));
        tracep->fullBit(oldp+6179,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU] >> 1U))));
        tracep->fullBit(oldp+6180,((1U & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU)))))));
        tracep->fullBit(oldp+6181,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x3fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3aU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU]))));
        tracep->fullBit(oldp+6182,((1U & (IData)((0x1fULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU))))));
        tracep->fullBit(oldp+6183,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU])));
        tracep->fullBit(oldp+6184,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU] >> 1U))));
        tracep->fullBit(oldp+6185,((1U & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU)))))));
        tracep->fullBit(oldp+6186,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0x1fULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3bU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU]))));
        tracep->fullBit(oldp+6187,((1U & (IData)((0xfULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU))))));
        tracep->fullBit(oldp+6188,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU])));
        tracep->fullBit(oldp+6189,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU] >> 1U))));
        tracep->fullBit(oldp+6190,((1U & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU)))))));
        tracep->fullBit(oldp+6191,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (0xfULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3cU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU]))));
        tracep->fullBit(oldp+6192,((1U & (IData)((7ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU))))));
        tracep->fullBit(oldp+6193,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU])));
        tracep->fullBit(oldp+6194,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU] >> 1U))));
        tracep->fullBit(oldp+6195,((1U & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU)))))));
        tracep->fullBit(oldp+6196,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (7ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3dU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU]))));
        tracep->fullBit(oldp+6197,((1U & (IData)((3ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+6198,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU])));
        tracep->fullBit(oldp+6199,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU] >> 1U))));
        tracep->fullBit(oldp+6200,((1U & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+6201,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (3ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3eU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU]))));
        tracep->fullBit(oldp+6202,((1U & (IData)((1ULL 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U))))));
        tracep->fullBit(oldp+6203,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU])));
        tracep->fullBit(oldp+6204,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU] >> 1U))));
        tracep->fullBit(oldp+6205,((1U & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U)))))));
        tracep->fullBit(oldp+6206,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                       & (~ (IData)(
                                                    (1ULL 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                         & (IData)(
                                                   (1ULL 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U))))) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                           [0x3fU] 
                                           >> 1U))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU]))));
        tracep->fullBit(oldp+6207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked));
        tracep->fullCData(oldp+6208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_d),6);
        tracep->fullCData(oldp+6209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q),6);
        tracep->fullBit(oldp+6210,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                          >> 1U))));
        tracep->fullCData(oldp+6211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q),6);
        tracep->fullCData(oldp+6212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q),6);
        tracep->fullCData(oldp+6213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast),6);
        tracep->fullBit(oldp+6214,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast))));
        tracep->fullBit(oldp+6215,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q))));
        tracep->fullBit(oldp+6216,((IData)((0U != (0xcU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))));
        tracep->fullCData(oldp+6217,((0xfU & ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                               ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast) 
                                                   >> 1U) 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast)))
                                               : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q) 
                                                  - (IData)(1U))))),4);
        tracep->fullCData(oldp+6218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q),4);
        tracep->fullQData(oldp+6219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem),33);
        tracep->fullIData(oldp+6221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in),32);
        tracep->fullCData(oldp+6222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num),5);
        tracep->fullBit(oldp+6223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb));
        tracep->fullIData(oldp+6224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0),32);
        tracep->fullIData(oldp+6225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1),32);
        tracep->fullIData(oldp+6226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2),32);
        tracep->fullIData(oldp+6227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3),32);
        tracep->fullBit(oldp+6228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign));
        tracep->fullBit(oldp+6229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign));
        tracep->fullIData(oldp+6230,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                      [0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                 >> 8U)))),32);
        tracep->fullIData(oldp+6231,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                      [1U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                 >> 8U)))),32);
        tracep->fullBit(oldp+6232,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                              >> 1U)) 
                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                             >> 4U)))));
        tracep->fullQData(oldp+6233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q),33);
        tracep->fullQData(oldp+6235,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q),33);
        tracep->fullBit(oldp+6237,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q));
        tracep->fullBit(oldp+6238,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q));
        tracep->fullBit(oldp+6239,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                              >> 2U) 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                                >> 5U))))));
        tracep->fullBit(oldp+6240,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign) 
                                       ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)))));
        tracep->fullBit(oldp+6241,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q));
        tracep->fullBit(oldp+6242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q));
        tracep->fullQData(oldp+6243,((0xfffffffffULL 
                                      & ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                           ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                          + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                             ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                         + ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                            << 1U)))),36);
        tracep->fullQData(oldp+6245,((0xfffffffffULL 
                                      & (((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                            ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                           + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                              ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                          + ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                             ^ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                << 3U))) 
                                         + (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)))))),36);
        tracep->fullBit(oldp+6247,((1U & (~ (0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)))));
        tracep->fullBit(oldp+6248,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr));
        tracep->fullCData(oldp+6249,(((((((4U & (((- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                            >> 0x1cU))))))) 
                                                 | (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                           >> 0x1cU)))))))) 
                                          | (6U & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                         | (6U & (- (IData)(
                                                            (4U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                        | (6U & (- (IData)(
                                                           (5U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                       | (6U & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                      | (8U & (- (IData)(
                                                         (7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                      >> 0x1cU))))))))),5);
        tracep->fullCData(oldp+6250,(((((((((0xcU & 
                                             (- (IData)(
                                                        (0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                     >> 0x1cU))))))) 
                                            | (0xeU 
                                               & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                           | (0xfU 
                                              & (- (IData)(
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                          | (0x10U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                         | (0x12U & 
                                            (- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                    >> 0x1cU)))))))) 
                                        | (0x14U & 
                                           (- (IData)(
                                                      (5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                   >> 0x1cU)))))))) 
                                       | (0x16U & (- (IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                      | (0x16U & (- (IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU))))))))),5);
        tracep->fullCData(oldp+6251,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res),2);
        tracep->fullCData(oldp+6252,((0xfU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value 
                                                      >> 0x1dU)))),5);
        tracep->fullBit(oldp+6253,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+6254,(((((((((0xdU & 
                                             (- (IData)(
                                                        (0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                     >> 0x1cU))))))) 
                                            | (0xfU 
                                               & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                           | (0x10U 
                                              & (- (IData)(
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                          | (0x12U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                         | (0x13U & 
                                            (- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                    >> 0x1cU)))))))) 
                                        | (0x14U & 
                                           (- (IData)(
                                                      (5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                   >> 0x1cU)))))))) 
                                       | (0x16U & (- (IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                      | (0x18U & (- (IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU))))))))),5);
        tracep->fullCData(oldp+6255,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q),5);
        tracep->fullCData(oldp+6256,(((((((((2U & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU))))))) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                           | (3U & 
                                              (- (IData)(
                                                         (2U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                      >> 0x1cU)))))))) 
                                          | (3U & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                         | (3U & (- (IData)(
                                                            (4U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                        | (4U & (- (IData)(
                                                           (5U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                       | (4U & (- (IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                      | (4U & (- (IData)(
                                                         (7U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                      >> 0x1cU))))))))),3);
        tracep->fullCData(oldp+6257,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q),3);
        tracep->fullCData(oldp+6258,(((((2U & ((((- (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))) 
                                                 | (- (IData)(
                                                              (1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                           >> 0x1cU))))))) 
                                                | (- (IData)(
                                                             (2U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU))))))) 
                                               | (- (IData)(
                                                            (3U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                        | (1U & (- (IData)(
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                       | (1U & (- (IData)(
                                                          (5U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                      | (1U & (- (IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                      >> 0x1cU))))))))),2);
        tracep->fullCData(oldp+6259,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q),2);
        tracep->fullCData(oldp+6260,(((((((((0x14U 
                                             & (- (IData)(
                                                          (0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU))))))) 
                                            | (0x12U 
                                               & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                           | (0x11U 
                                              & (- (IData)(
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU)))))))) 
                                          | (0x10U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                       >> 0x1cU)))))))) 
                                         | (0xeU & 
                                            (- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                    >> 0x1cU)))))))) 
                                        | (0xcU & (- (IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                          >> 0x1cU)))))))) 
                                       | (0xaU & (- (IData)(
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                         >> 0x1cU)))))))) 
                                      | (0xaU & (- (IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                                        >> 0x1cU))))))))),5);
        tracep->fullCData(oldp+6261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q),5);
        tracep->fullBit(oldp+6262,(((0U == (7U & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x1cU)))) 
                                    | (4U == (7U & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                            >> 0x1cU)))))));
        tracep->fullBit(oldp+6263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q));
        tracep->fullQData(oldp+6264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value),36);
        tracep->fullQData(oldp+6266,(((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                                >> 5U)))
                                       ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4)) 
                                          << 3U) : 
                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                        ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value))),36);
        tracep->fullQData(oldp+6268,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                       ? ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q) 
                                                    >> 5U)))
                                           ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4)) 
                                              << 3U)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                               ? 0ULL
                                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value))
                                       : (((0xffffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                               << 2U)) 
                                           ^ (0xffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                 << 2U))) 
                                          ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3))),36);
        tracep->fullQData(oldp+6270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q),36);
        tracep->fullQData(oldp+6272,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                       ? 0ULL : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end)),36);
        tracep->fullQData(oldp+6274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q),36);
        tracep->fullQData(oldp+6276,((((0xffffffffcULL 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                           << 2U)) 
                                       ^ (0xffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                             << 2U))) 
                                      ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3)),36);
        tracep->fullQData(oldp+6278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end),36);
        tracep->fullQData(oldp+6280,((0xffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                         << 2U))),36);
        tracep->fullQData(oldp+6282,((0xffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                         << 2U))),36);
        tracep->fullQData(oldp+6284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3),36);
        tracep->fullCData(oldp+6286,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                       ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                           ? 0x10U : 
                                          ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                            ? 8U : 4U))
                                       : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end))),5);
        tracep->fullCData(oldp+6287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q),5);
        tracep->fullCData(oldp+6288,(((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                       ? 0x10U : ((2U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res))
                                                   ? 8U
                                                   : 4U))),5);
        tracep->fullCData(oldp+6289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end),5);
        tracep->fullBit(oldp+6290,((IData)((0U != (0x1cU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))));
        tracep->fullIData(oldp+6291,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                       ? ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q))
                                           ? 0xffffffffU
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q)
                                               ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)
                                               : 0U))
                                       : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                           ? ((((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                 >> 4U)))) 
                                                  & (2U 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                        << 2U))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                   >> 3U)))) 
                                                    & (1U 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                          << 2U)))) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                  >> 2U)))) 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                      << 2U))) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                 >> 1U)))) 
                                                  & (3U 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                        << 2U)))) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                                 & (2U 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                       << 2U))))
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q)
                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                              [0U] : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q)))),32);
        tracep->fullIData(oldp+6292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q),32);
        tracep->fullIData(oldp+6293,(((((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                         >> 4U)))) 
                                          & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                   << 2U))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                           >> 3U)))) 
                                            & (1U | 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                << 2U)))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                          >> 2U)))) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                              << 2U))) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                         >> 1U)))) 
                                          & (3U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                   << 2U)))) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                         & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                  << 2U))))),32);
        tracep->fullIData(oldp+6294,(((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                       ? 0U : ((8U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))
                                                ? (
                                                   (((((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                      >> 4U)))) 
                                                       & (1U 
                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                             << 2U))) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                        >> 3U)))) 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                            << 2U))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                       >> 2U)))) 
                                                        & (3U 
                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                              << 2U)))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                                      >> 1U)))) 
                                                       & (2U 
                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                             << 2U)))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                                      & (1U 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                            << 2U))))
                                                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q)
                                                    ? 
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                                   [1U]
                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q)))),32);
        tracep->fullIData(oldp+6295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q),32);
        tracep->fullIData(oldp+6296,(((((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                         >> 4U)))) 
                                          & (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                                   << 2U))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                           >> 3U)))) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q 
                                               << 2U))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                          >> 2U)))) 
                                           & (3U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                               << 2U)))) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q) 
                                                         >> 1U)))) 
                                          & (2U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                   << 2U)))) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q)))) 
                                         & (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q 
                                                  << 2U))))),32);
        tracep->fullIData(oldp+6297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[0]),32);
        tracep->fullIData(oldp+6298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[1]),32);
        tracep->fullIData(oldp+6299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[0]),32);
        tracep->fullIData(oldp+6300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[1]),32);
        tracep->fullIData(oldp+6301,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q)),32);
        tracep->fullIData(oldp+6302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp),32);
        tracep->fullIData(oldp+6303,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)),32);
        tracep->fullIData(oldp+6304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp),32);
        tracep->fullQData(oldp+6305,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                      << 4U)),40);
        tracep->fullQData(oldp+6307,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                      << 4U)),40);
        tracep->fullCData(oldp+6309,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1aU)))),7);
        tracep->fullCData(oldp+6310,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                       >> 0x1aU)))),7);
        tracep->fullCData(oldp+6311,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                       >> 0x1bU)))),7);
        tracep->fullCData(oldp+6312,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                       >> 0x1bU)))),7);
        tracep->fullCData(oldp+6313,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                      << 1U)),7);
        tracep->fullCData(oldp+6314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4),7);
        tracep->fullCData(oldp+6315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4),7);
        tracep->fullCData(oldp+6316,((0x40U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                               << 1U))),7);
        tracep->fullQData(oldp+6317,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                      << 3U)),36);
        tracep->fullQData(oldp+6319,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                      << 5U)),38);
        tracep->fullQData(oldp+6321,(((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                      << 6U)),38);
        tracep->fullQData(oldp+6323,((0x3fffffffffULL 
                                      & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                            << 5U)))),38);
        tracep->fullQData(oldp+6325,((0x3fffffffffULL 
                                      & (~ ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                            << 6U)))),38);
        tracep->fullCData(oldp+6327,((0x7fU & (IData)(
                                                      ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                       >> 0x19U)))),7);
        tracep->fullCData(oldp+6328,((0x7fU & (IData)(
                                                      ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                       >> 0x1aU)))),7);
        tracep->fullCData(oldp+6329,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                       >> 0x18U)))),7);
        tracep->fullCData(oldp+6330,((0x7fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                       >> 0x19U)))),7);
        tracep->fullCData(oldp+6331,((0x7fU & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                          >> 0x19U))))),7);
        tracep->fullCData(oldp+6332,((0x7fU & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                          >> 0x1aU))))),7);
        tracep->fullCData(oldp+6333,((0x7fU & (~ (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x18U))))),7);
        tracep->fullCData(oldp+6334,((0x7fU & (~ (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q 
                                                          >> 0x19U))))),7);
        tracep->fullCData(oldp+6335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4),7);
        tracep->fullCData(oldp+6336,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5),7);
        tracep->fullBit(oldp+6337,((1U & (((((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                      >> 0x1aU)) 
                                             + (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                        >> 0x1aU))) 
                                            + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                               << 1U)) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                                          >> 6U))));
        tracep->fullBit(oldp+6338,((1U & (((((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                      >> 0x1bU)) 
                                             + (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                        >> 0x1bU))) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4)) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                          >> 6U))));
        tracep->fullBit(oldp+6339,((1U & (((((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                      >> 0x1bU)) 
                                             + (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                        >> 0x1bU))) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4)) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)) 
                                          >> 6U))));
        tracep->fullBit(oldp+6340,((1U & (((((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                      >> 0x1aU)) 
                                             + (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                        >> 0x1aU))) 
                                            + (0x40U 
                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                                  << 1U))) 
                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)) 
                                          >> 6U))));
        tracep->fullCData(oldp+6341,((0x3fU & ((((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                          >> 0x1aU)) 
                                                 + (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                            >> 0x1aU))) 
                                                + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q) 
                                                   << 1U)) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))),6);
        tracep->fullCData(oldp+6342,((0x3fU & ((((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                          >> 0x1bU)) 
                                                 + (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                            >> 0x1bU))) 
                                                + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4)) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))),6);
        tracep->fullCData(oldp+6343,((0x3fU & ((((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                          >> 0x1bU)) 
                                                 + (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                            >> 0x1bU))) 
                                                + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4)) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))),6);
        tracep->fullCData(oldp+6344,((0x3fU & ((((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                                          >> 0x1aU)) 
                                                 + (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                                            >> 0x1aU))) 
                                                + ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q) 
                                                   << 1U)) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))),6);
        tracep->fullCData(oldp+6345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign),4);
        tracep->fullQData(oldp+6346,((0xffffffff8ULL 
                                      & (((0xffffffff8ULL 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q) 
                                              << 3U)) 
                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q 
                                              << 3U) 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                                << 1U))) 
                                         | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q 
                                             << 3U) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 
                                               << 1U))))),36);
        tracep->fullBit(oldp+6348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
        tracep->fullWData(oldp+6349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data),300);
        tracep->fullBit(oldp+6359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6360,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                          >> 0xaU))));
        tracep->fullCData(oldp+6361,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                               >> 5U))),5);
        tracep->fullBit(oldp+6362,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                          >> 4U))));
        tracep->fullCData(oldp+6363,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                            >> 2U))),2);
        tracep->fullBit(oldp+6364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                          >> 1U))));
        tracep->fullIData(oldp+6365,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                       >> 1U))),32);
        tracep->fullIData(oldp+6366,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                       >> 1U))),32);
        tracep->fullSData(oldp+6367,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                  << 0xdU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    >> 0x13U)))),14);
        tracep->fullCData(oldp+6368,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                            >> 0x11U))),2);
        tracep->fullBit(oldp+6369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6370,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          >> 0xfU))));
        tracep->fullSData(oldp+6371,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 1U))),14);
        tracep->fullCData(oldp+6372,((3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             << 1U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               >> 0x1fU)))),2);
        tracep->fullCData(oldp+6373,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                            >> 0x1cU))),3);
        tracep->fullBit(oldp+6374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6375,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                          >> 0x1aU))));
        tracep->fullCData(oldp+6376,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               >> 0x15U))),5);
        tracep->fullBit(oldp+6377,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+6378,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                          >> 0x13U))));
        tracep->fullIData(oldp+6379,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                       << 0xdU) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                   >> 0x13U))),32);
        tracep->fullIData(oldp+6380,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                       << 0xdU) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                                                   >> 0x13U))),32);
        tracep->fullBit(oldp+6381,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+6382,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[0U])));
        tracep->fullBit(oldp+6383,(((((2U == (3U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               >> 0x11U))) 
                                      | (3U == (3U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0x11U)))) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                                    & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          >> 0x10U)))));
        tracep->fullBit(oldp+6384,((1U & ((((((((((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0xeU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                     >> 0xdU)) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    >> 0xcU)) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0xbU)) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 7U)) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 6U)) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 5U)) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               >> 4U)) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                              >> 3U)) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             >> 2U)))));
        tracep->fullBit(oldp+6385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen));
        tracep->fullBit(oldp+6386,((1U & ((((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 0xdU) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                   >> 0xcU)) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0xbU)) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 6U)) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 5U)) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               >> 4U)) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                              >> 3U)) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             >> 2U)))));
        tracep->fullIData(oldp+6387,(((1U & ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0xeU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0xdU)) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 >> 0xcU)) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0xbU)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                           << 0xdU) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                             >> 0x13U))
                                       : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                           << 0x1cU) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                             >> 4U)))),32);
        tracep->fullBit(oldp+6388,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                           >> 0x14U) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                             >> 0x13U)))));
        tracep->fullIData(oldp+6389,(((IData)(4U) + 
                                      ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                        << 0xdU) | 
                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                        >> 0x13U)))),32);
        tracep->fullBit(oldp+6390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch));
        tracep->fullBit(oldp+6391,((((3U == (7U & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   >> 0x1cU))) 
                                     | (4U == (7U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                >> 0x1cU)))) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))));
        tracep->fullWData(oldp+6392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data),102);
        tracep->fullBit(oldp+6396,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U] 
                                          >> 5U))));
        tracep->fullCData(oldp+6397,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[3U])),5);
        tracep->fullIData(oldp+6398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[2U]),32);
        tracep->fullIData(oldp+6399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data[1U]),32);
        tracep->fullIData(oldp+6400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen),32);
        tracep->fullIData(oldp+6401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc),32);
        tracep->fullIData(oldp+6402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl),32);
        tracep->fullIData(oldp+6403,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
                                       >> 0x1fU) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)),32);
        tracep->fullBit(oldp+6404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[0]));
        tracep->fullBit(oldp+6405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[1]));
        tracep->fullBit(oldp+6406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[2]));
        tracep->fullBit(oldp+6407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[3]));
        tracep->fullBit(oldp+6408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[4]));
        tracep->fullBit(oldp+6409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[5]));
        tracep->fullBit(oldp+6410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[6]));
        tracep->fullBit(oldp+6411,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[7]));
        tracep->fullBit(oldp+6412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[8]));
        tracep->fullBit(oldp+6413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[9]));
        tracep->fullBit(oldp+6414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[10]));
        tracep->fullBit(oldp+6415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[11]));
        tracep->fullBit(oldp+6416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[12]));
        tracep->fullBit(oldp+6417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[13]));
        tracep->fullBit(oldp+6418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[14]));
        tracep->fullBit(oldp+6419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[15]));
        tracep->fullBit(oldp+6420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[16]));
        tracep->fullBit(oldp+6421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[17]));
        tracep->fullBit(oldp+6422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[18]));
        tracep->fullBit(oldp+6423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[19]));
        tracep->fullBit(oldp+6424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[20]));
        tracep->fullBit(oldp+6425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[21]));
        tracep->fullBit(oldp+6426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[22]));
        tracep->fullBit(oldp+6427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[23]));
        tracep->fullBit(oldp+6428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[24]));
        tracep->fullBit(oldp+6429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[25]));
        tracep->fullBit(oldp+6430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[26]));
        tracep->fullBit(oldp+6431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[27]));
        tracep->fullBit(oldp+6432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[28]));
        tracep->fullBit(oldp+6433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[29]));
        tracep->fullBit(oldp+6434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[30]));
        tracep->fullBit(oldp+6435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[31]));
        tracep->fullIData(oldp+6436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[0]),19);
        tracep->fullIData(oldp+6437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[1]),19);
        tracep->fullIData(oldp+6438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[2]),19);
        tracep->fullIData(oldp+6439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[3]),19);
        tracep->fullIData(oldp+6440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[4]),19);
        tracep->fullIData(oldp+6441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[5]),19);
        tracep->fullIData(oldp+6442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[6]),19);
        tracep->fullIData(oldp+6443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[7]),19);
        tracep->fullIData(oldp+6444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[8]),19);
        tracep->fullIData(oldp+6445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[9]),19);
        tracep->fullIData(oldp+6446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[10]),19);
        tracep->fullIData(oldp+6447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[11]),19);
        tracep->fullIData(oldp+6448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[12]),19);
        tracep->fullIData(oldp+6449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[13]),19);
        tracep->fullIData(oldp+6450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[14]),19);
        tracep->fullIData(oldp+6451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[15]),19);
        tracep->fullIData(oldp+6452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[16]),19);
        tracep->fullIData(oldp+6453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[17]),19);
        tracep->fullIData(oldp+6454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[18]),19);
        tracep->fullIData(oldp+6455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[19]),19);
        tracep->fullIData(oldp+6456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[20]),19);
        tracep->fullIData(oldp+6457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[21]),19);
        tracep->fullIData(oldp+6458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[22]),19);
        tracep->fullIData(oldp+6459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[23]),19);
        tracep->fullIData(oldp+6460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[24]),19);
        tracep->fullIData(oldp+6461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[25]),19);
        tracep->fullIData(oldp+6462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[26]),19);
        tracep->fullIData(oldp+6463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[27]),19);
        tracep->fullIData(oldp+6464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[28]),19);
        tracep->fullIData(oldp+6465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[29]),19);
        tracep->fullIData(oldp+6466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[30]),19);
        tracep->fullIData(oldp+6467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[31]),19);
        tracep->fullCData(oldp+6468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[0]),6);
        tracep->fullCData(oldp+6469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[1]),6);
        tracep->fullCData(oldp+6470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[2]),6);
        tracep->fullCData(oldp+6471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[3]),6);
        tracep->fullCData(oldp+6472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[4]),6);
        tracep->fullCData(oldp+6473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[5]),6);
        tracep->fullCData(oldp+6474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[6]),6);
        tracep->fullCData(oldp+6475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[7]),6);
        tracep->fullCData(oldp+6476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[8]),6);
        tracep->fullCData(oldp+6477,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[9]),6);
        tracep->fullCData(oldp+6478,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[10]),6);
        tracep->fullCData(oldp+6479,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[11]),6);
        tracep->fullCData(oldp+6480,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[12]),6);
        tracep->fullCData(oldp+6481,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[13]),6);
        tracep->fullCData(oldp+6482,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[14]),6);
        tracep->fullCData(oldp+6483,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[15]),6);
        tracep->fullCData(oldp+6484,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[16]),6);
        tracep->fullCData(oldp+6485,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[17]),6);
        tracep->fullCData(oldp+6486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[18]),6);
        tracep->fullCData(oldp+6487,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[19]),6);
        tracep->fullCData(oldp+6488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[20]),6);
        tracep->fullCData(oldp+6489,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[21]),6);
        tracep->fullCData(oldp+6490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[22]),6);
        tracep->fullCData(oldp+6491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[23]),6);
        tracep->fullCData(oldp+6492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[24]),6);
        tracep->fullCData(oldp+6493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[25]),6);
        tracep->fullCData(oldp+6494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[26]),6);
        tracep->fullCData(oldp+6495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[27]),6);
        tracep->fullCData(oldp+6496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[28]),6);
        tracep->fullCData(oldp+6497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[29]),6);
        tracep->fullCData(oldp+6498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[30]),6);
        tracep->fullCData(oldp+6499,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[31]),6);
        tracep->fullSData(oldp+6500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[0]),10);
        tracep->fullSData(oldp+6501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[1]),10);
        tracep->fullSData(oldp+6502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[2]),10);
        tracep->fullSData(oldp+6503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[3]),10);
        tracep->fullSData(oldp+6504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[4]),10);
        tracep->fullSData(oldp+6505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[5]),10);
        tracep->fullSData(oldp+6506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[6]),10);
        tracep->fullSData(oldp+6507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[7]),10);
        tracep->fullSData(oldp+6508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[8]),10);
        tracep->fullSData(oldp+6509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[9]),10);
        tracep->fullSData(oldp+6510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[10]),10);
        tracep->fullSData(oldp+6511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[11]),10);
        tracep->fullSData(oldp+6512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[12]),10);
        tracep->fullSData(oldp+6513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[13]),10);
        tracep->fullSData(oldp+6514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[14]),10);
        tracep->fullSData(oldp+6515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[15]),10);
        tracep->fullSData(oldp+6516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[16]),10);
        tracep->fullSData(oldp+6517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[17]),10);
        tracep->fullSData(oldp+6518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[18]),10);
        tracep->fullSData(oldp+6519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[19]),10);
        tracep->fullSData(oldp+6520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[20]),10);
        tracep->fullSData(oldp+6521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[21]),10);
        tracep->fullSData(oldp+6522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[22]),10);
        tracep->fullSData(oldp+6523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[23]),10);
        tracep->fullSData(oldp+6524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[24]),10);
        tracep->fullSData(oldp+6525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[25]),10);
        tracep->fullSData(oldp+6526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[26]),10);
        tracep->fullSData(oldp+6527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[27]),10);
        tracep->fullSData(oldp+6528,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[28]),10);
        tracep->fullSData(oldp+6529,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[29]),10);
        tracep->fullSData(oldp+6530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[30]),10);
        tracep->fullSData(oldp+6531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[31]),10);
        tracep->fullBit(oldp+6532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[0]));
        tracep->fullBit(oldp+6533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[1]));
        tracep->fullBit(oldp+6534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[2]));
        tracep->fullBit(oldp+6535,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[3]));
        tracep->fullBit(oldp+6536,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[4]));
        tracep->fullBit(oldp+6537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[5]));
        tracep->fullBit(oldp+6538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[6]));
        tracep->fullBit(oldp+6539,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[7]));
        tracep->fullBit(oldp+6540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[8]));
        tracep->fullBit(oldp+6541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[9]));
        tracep->fullBit(oldp+6542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[10]));
        tracep->fullBit(oldp+6543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[11]));
        tracep->fullBit(oldp+6544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[12]));
        tracep->fullBit(oldp+6545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[13]));
        tracep->fullBit(oldp+6546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[14]));
        tracep->fullBit(oldp+6547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[15]));
        tracep->fullBit(oldp+6548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[16]));
        tracep->fullBit(oldp+6549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[17]));
        tracep->fullBit(oldp+6550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[18]));
        tracep->fullBit(oldp+6551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[19]));
        tracep->fullBit(oldp+6552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[20]));
        tracep->fullBit(oldp+6553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[21]));
        tracep->fullBit(oldp+6554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[22]));
        tracep->fullBit(oldp+6555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[23]));
        tracep->fullBit(oldp+6556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[24]));
        tracep->fullBit(oldp+6557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[25]));
        tracep->fullBit(oldp+6558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[26]));
        tracep->fullBit(oldp+6559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[27]));
        tracep->fullBit(oldp+6560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[28]));
        tracep->fullBit(oldp+6561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[29]));
        tracep->fullBit(oldp+6562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[30]));
        tracep->fullBit(oldp+6563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[31]));
        tracep->fullIData(oldp+6564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[0]),20);
        tracep->fullIData(oldp+6565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[1]),20);
        tracep->fullIData(oldp+6566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[2]),20);
        tracep->fullIData(oldp+6567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[3]),20);
        tracep->fullIData(oldp+6568,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[4]),20);
        tracep->fullIData(oldp+6569,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[5]),20);
        tracep->fullIData(oldp+6570,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[6]),20);
        tracep->fullIData(oldp+6571,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[7]),20);
        tracep->fullIData(oldp+6572,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[8]),20);
        tracep->fullIData(oldp+6573,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[9]),20);
        tracep->fullIData(oldp+6574,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[10]),20);
        tracep->fullIData(oldp+6575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[11]),20);
        tracep->fullIData(oldp+6576,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[12]),20);
        tracep->fullIData(oldp+6577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[13]),20);
        tracep->fullIData(oldp+6578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[14]),20);
        tracep->fullIData(oldp+6579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[15]),20);
        tracep->fullIData(oldp+6580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[16]),20);
        tracep->fullIData(oldp+6581,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[17]),20);
        tracep->fullIData(oldp+6582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[18]),20);
        tracep->fullIData(oldp+6583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[19]),20);
        tracep->fullIData(oldp+6584,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[20]),20);
        tracep->fullIData(oldp+6585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[21]),20);
        tracep->fullIData(oldp+6586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[22]),20);
        tracep->fullIData(oldp+6587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[23]),20);
        tracep->fullIData(oldp+6588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[24]),20);
        tracep->fullIData(oldp+6589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[25]),20);
        tracep->fullIData(oldp+6590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[26]),20);
        tracep->fullIData(oldp+6591,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[27]),20);
        tracep->fullIData(oldp+6592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[28]),20);
        tracep->fullIData(oldp+6593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[29]),20);
        tracep->fullIData(oldp+6594,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[30]),20);
        tracep->fullIData(oldp+6595,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[31]),20);
        tracep->fullCData(oldp+6596,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[0]),2);
        tracep->fullCData(oldp+6597,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[1]),2);
        tracep->fullCData(oldp+6598,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[2]),2);
        tracep->fullCData(oldp+6599,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[3]),2);
        tracep->fullCData(oldp+6600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[4]),2);
        tracep->fullCData(oldp+6601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[5]),2);
        tracep->fullCData(oldp+6602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[6]),2);
        tracep->fullCData(oldp+6603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[7]),2);
        tracep->fullCData(oldp+6604,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[8]),2);
        tracep->fullCData(oldp+6605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[9]),2);
        tracep->fullCData(oldp+6606,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[10]),2);
        tracep->fullCData(oldp+6607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[11]),2);
        tracep->fullCData(oldp+6608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[12]),2);
        tracep->fullCData(oldp+6609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[13]),2);
        tracep->fullCData(oldp+6610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[14]),2);
        tracep->fullCData(oldp+6611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[15]),2);
        tracep->fullCData(oldp+6612,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[16]),2);
        tracep->fullCData(oldp+6613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[17]),2);
        tracep->fullCData(oldp+6614,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[18]),2);
        tracep->fullCData(oldp+6615,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[19]),2);
        tracep->fullCData(oldp+6616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[20]),2);
        tracep->fullCData(oldp+6617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[21]),2);
        tracep->fullCData(oldp+6618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[22]),2);
        tracep->fullCData(oldp+6619,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[23]),2);
        tracep->fullCData(oldp+6620,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[24]),2);
        tracep->fullCData(oldp+6621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[25]),2);
        tracep->fullCData(oldp+6622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[26]),2);
        tracep->fullCData(oldp+6623,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[27]),2);
        tracep->fullCData(oldp+6624,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[28]),2);
        tracep->fullCData(oldp+6625,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[29]),2);
        tracep->fullCData(oldp+6626,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[30]),2);
        tracep->fullCData(oldp+6627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[31]),2);
        tracep->fullCData(oldp+6628,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[0]),2);
        tracep->fullCData(oldp+6629,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[1]),2);
        tracep->fullCData(oldp+6630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[2]),2);
        tracep->fullCData(oldp+6631,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[3]),2);
        tracep->fullCData(oldp+6632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[4]),2);
        tracep->fullCData(oldp+6633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[5]),2);
        tracep->fullCData(oldp+6634,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[6]),2);
        tracep->fullCData(oldp+6635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[7]),2);
        tracep->fullCData(oldp+6636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[8]),2);
        tracep->fullCData(oldp+6637,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[9]),2);
        tracep->fullCData(oldp+6638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[10]),2);
        tracep->fullCData(oldp+6639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[11]),2);
        tracep->fullCData(oldp+6640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[12]),2);
        tracep->fullCData(oldp+6641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[13]),2);
        tracep->fullCData(oldp+6642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[14]),2);
        tracep->fullCData(oldp+6643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[15]),2);
        tracep->fullCData(oldp+6644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[16]),2);
        tracep->fullCData(oldp+6645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[17]),2);
        tracep->fullCData(oldp+6646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[18]),2);
        tracep->fullCData(oldp+6647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[19]),2);
        tracep->fullCData(oldp+6648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[20]),2);
        tracep->fullCData(oldp+6649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[21]),2);
        tracep->fullCData(oldp+6650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[22]),2);
        tracep->fullCData(oldp+6651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[23]),2);
        tracep->fullCData(oldp+6652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[24]),2);
        tracep->fullCData(oldp+6653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[25]),2);
        tracep->fullCData(oldp+6654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[26]),2);
        tracep->fullCData(oldp+6655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[27]),2);
        tracep->fullCData(oldp+6656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[28]),2);
        tracep->fullCData(oldp+6657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[29]),2);
        tracep->fullCData(oldp+6658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[30]),2);
        tracep->fullCData(oldp+6659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[31]),2);
        tracep->fullBit(oldp+6660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[0]));
        tracep->fullBit(oldp+6661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[1]));
        tracep->fullBit(oldp+6662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[2]));
        tracep->fullBit(oldp+6663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[3]));
        tracep->fullBit(oldp+6664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[4]));
        tracep->fullBit(oldp+6665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[5]));
        tracep->fullBit(oldp+6666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[6]));
        tracep->fullBit(oldp+6667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[7]));
        tracep->fullBit(oldp+6668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[8]));
        tracep->fullBit(oldp+6669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[9]));
        tracep->fullBit(oldp+6670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[10]));
        tracep->fullBit(oldp+6671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[11]));
        tracep->fullBit(oldp+6672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[12]));
        tracep->fullBit(oldp+6673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[13]));
        tracep->fullBit(oldp+6674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[14]));
        tracep->fullBit(oldp+6675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[15]));
        tracep->fullBit(oldp+6676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[16]));
        tracep->fullBit(oldp+6677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[17]));
        tracep->fullBit(oldp+6678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[18]));
        tracep->fullBit(oldp+6679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[19]));
        tracep->fullBit(oldp+6680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[20]));
        tracep->fullBit(oldp+6681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[21]));
        tracep->fullBit(oldp+6682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[22]));
        tracep->fullBit(oldp+6683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[23]));
        tracep->fullBit(oldp+6684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[24]));
        tracep->fullBit(oldp+6685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[25]));
        tracep->fullBit(oldp+6686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[26]));
        tracep->fullBit(oldp+6687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[27]));
        tracep->fullBit(oldp+6688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[28]));
        tracep->fullBit(oldp+6689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[29]));
        tracep->fullBit(oldp+6690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[30]));
        tracep->fullBit(oldp+6691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[31]));
        tracep->fullBit(oldp+6692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[0]));
        tracep->fullBit(oldp+6693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[1]));
        tracep->fullBit(oldp+6694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[2]));
        tracep->fullBit(oldp+6695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[3]));
        tracep->fullBit(oldp+6696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[4]));
        tracep->fullBit(oldp+6697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[5]));
        tracep->fullBit(oldp+6698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[6]));
        tracep->fullBit(oldp+6699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[7]));
        tracep->fullBit(oldp+6700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[8]));
        tracep->fullBit(oldp+6701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[9]));
        tracep->fullBit(oldp+6702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[10]));
        tracep->fullBit(oldp+6703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[11]));
        tracep->fullBit(oldp+6704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[12]));
        tracep->fullBit(oldp+6705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[13]));
        tracep->fullBit(oldp+6706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[14]));
        tracep->fullBit(oldp+6707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[15]));
        tracep->fullBit(oldp+6708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[16]));
        tracep->fullBit(oldp+6709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[17]));
        tracep->fullBit(oldp+6710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[18]));
        tracep->fullBit(oldp+6711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[19]));
        tracep->fullBit(oldp+6712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[20]));
        tracep->fullBit(oldp+6713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[21]));
        tracep->fullBit(oldp+6714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[22]));
        tracep->fullBit(oldp+6715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[23]));
        tracep->fullBit(oldp+6716,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[24]));
        tracep->fullBit(oldp+6717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[25]));
        tracep->fullBit(oldp+6718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[26]));
        tracep->fullBit(oldp+6719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[27]));
        tracep->fullBit(oldp+6720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[28]));
        tracep->fullBit(oldp+6721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[29]));
        tracep->fullBit(oldp+6722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[30]));
        tracep->fullBit(oldp+6723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[31]));
        tracep->fullIData(oldp+6724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[0]),20);
        tracep->fullIData(oldp+6725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[1]),20);
        tracep->fullIData(oldp+6726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[2]),20);
        tracep->fullIData(oldp+6727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[3]),20);
        tracep->fullIData(oldp+6728,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[4]),20);
        tracep->fullIData(oldp+6729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[5]),20);
        tracep->fullIData(oldp+6730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[6]),20);
        tracep->fullIData(oldp+6731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[7]),20);
        tracep->fullIData(oldp+6732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[8]),20);
        tracep->fullIData(oldp+6733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[9]),20);
        tracep->fullIData(oldp+6734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[10]),20);
        tracep->fullIData(oldp+6735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[11]),20);
        tracep->fullIData(oldp+6736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[12]),20);
        tracep->fullIData(oldp+6737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[13]),20);
        tracep->fullIData(oldp+6738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[14]),20);
        tracep->fullIData(oldp+6739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[15]),20);
        tracep->fullIData(oldp+6740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[16]),20);
        tracep->fullIData(oldp+6741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[17]),20);
        tracep->fullIData(oldp+6742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[18]),20);
        tracep->fullIData(oldp+6743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[19]),20);
        tracep->fullIData(oldp+6744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[20]),20);
        tracep->fullIData(oldp+6745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[21]),20);
        tracep->fullIData(oldp+6746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[22]),20);
        tracep->fullIData(oldp+6747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[23]),20);
        tracep->fullIData(oldp+6748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[24]),20);
        tracep->fullIData(oldp+6749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[25]),20);
        tracep->fullIData(oldp+6750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[26]),20);
        tracep->fullIData(oldp+6751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[27]),20);
        tracep->fullIData(oldp+6752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[28]),20);
        tracep->fullIData(oldp+6753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[29]),20);
        tracep->fullIData(oldp+6754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[30]),20);
        tracep->fullIData(oldp+6755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[31]),20);
        tracep->fullCData(oldp+6756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[0]),2);
        tracep->fullCData(oldp+6757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[1]),2);
        tracep->fullCData(oldp+6758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[2]),2);
        tracep->fullCData(oldp+6759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[3]),2);
        tracep->fullCData(oldp+6760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[4]),2);
        tracep->fullCData(oldp+6761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[5]),2);
        tracep->fullCData(oldp+6762,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[6]),2);
        tracep->fullCData(oldp+6763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[7]),2);
        tracep->fullCData(oldp+6764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[8]),2);
        tracep->fullCData(oldp+6765,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[9]),2);
        tracep->fullCData(oldp+6766,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[10]),2);
        tracep->fullCData(oldp+6767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[11]),2);
        tracep->fullCData(oldp+6768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[12]),2);
        tracep->fullCData(oldp+6769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[13]),2);
        tracep->fullCData(oldp+6770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[14]),2);
        tracep->fullCData(oldp+6771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[15]),2);
        tracep->fullCData(oldp+6772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[16]),2);
        tracep->fullCData(oldp+6773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[17]),2);
        tracep->fullCData(oldp+6774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[18]),2);
        tracep->fullCData(oldp+6775,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[19]),2);
        tracep->fullCData(oldp+6776,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[20]),2);
        tracep->fullCData(oldp+6777,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[21]),2);
        tracep->fullCData(oldp+6778,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[22]),2);
        tracep->fullCData(oldp+6779,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[23]),2);
        tracep->fullCData(oldp+6780,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[24]),2);
        tracep->fullCData(oldp+6781,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[25]),2);
        tracep->fullCData(oldp+6782,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[26]),2);
        tracep->fullCData(oldp+6783,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[27]),2);
        tracep->fullCData(oldp+6784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[28]),2);
        tracep->fullCData(oldp+6785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[29]),2);
        tracep->fullCData(oldp+6786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[30]),2);
        tracep->fullCData(oldp+6787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[31]),2);
        tracep->fullCData(oldp+6788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[0]),2);
        tracep->fullCData(oldp+6789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[1]),2);
        tracep->fullCData(oldp+6790,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[2]),2);
        tracep->fullCData(oldp+6791,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[3]),2);
        tracep->fullCData(oldp+6792,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[4]),2);
        tracep->fullCData(oldp+6793,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[5]),2);
        tracep->fullCData(oldp+6794,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[6]),2);
        tracep->fullCData(oldp+6795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[7]),2);
        tracep->fullCData(oldp+6796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[8]),2);
        tracep->fullCData(oldp+6797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[9]),2);
        tracep->fullCData(oldp+6798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[10]),2);
        tracep->fullCData(oldp+6799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[11]),2);
        tracep->fullCData(oldp+6800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[12]),2);
        tracep->fullCData(oldp+6801,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[13]),2);
        tracep->fullCData(oldp+6802,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[14]),2);
        tracep->fullCData(oldp+6803,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[15]),2);
        tracep->fullCData(oldp+6804,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[16]),2);
        tracep->fullCData(oldp+6805,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[17]),2);
        tracep->fullCData(oldp+6806,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[18]),2);
        tracep->fullCData(oldp+6807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[19]),2);
        tracep->fullCData(oldp+6808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[20]),2);
        tracep->fullCData(oldp+6809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[21]),2);
        tracep->fullCData(oldp+6810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[22]),2);
        tracep->fullCData(oldp+6811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[23]),2);
        tracep->fullCData(oldp+6812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[24]),2);
        tracep->fullCData(oldp+6813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[25]),2);
        tracep->fullCData(oldp+6814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[26]),2);
        tracep->fullCData(oldp+6815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[27]),2);
        tracep->fullCData(oldp+6816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[28]),2);
        tracep->fullCData(oldp+6817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[29]),2);
        tracep->fullCData(oldp+6818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[30]),2);
        tracep->fullCData(oldp+6819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[31]),2);
        tracep->fullBit(oldp+6820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[0]));
        tracep->fullBit(oldp+6821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[1]));
        tracep->fullBit(oldp+6822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[2]));
        tracep->fullBit(oldp+6823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[3]));
        tracep->fullBit(oldp+6824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[4]));
        tracep->fullBit(oldp+6825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[5]));
        tracep->fullBit(oldp+6826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[6]));
        tracep->fullBit(oldp+6827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[7]));
        tracep->fullBit(oldp+6828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[8]));
        tracep->fullBit(oldp+6829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[9]));
        tracep->fullBit(oldp+6830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[10]));
        tracep->fullBit(oldp+6831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[11]));
        tracep->fullBit(oldp+6832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[12]));
        tracep->fullBit(oldp+6833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[13]));
        tracep->fullBit(oldp+6834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[14]));
        tracep->fullBit(oldp+6835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[15]));
        tracep->fullBit(oldp+6836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[16]));
        tracep->fullBit(oldp+6837,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[17]));
        tracep->fullBit(oldp+6838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[18]));
        tracep->fullBit(oldp+6839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[19]));
        tracep->fullBit(oldp+6840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[20]));
        tracep->fullBit(oldp+6841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[21]));
        tracep->fullBit(oldp+6842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[22]));
        tracep->fullBit(oldp+6843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[23]));
        tracep->fullBit(oldp+6844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[24]));
        tracep->fullBit(oldp+6845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[25]));
        tracep->fullBit(oldp+6846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[26]));
        tracep->fullBit(oldp+6847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[27]));
        tracep->fullBit(oldp+6848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[28]));
        tracep->fullBit(oldp+6849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[29]));
        tracep->fullBit(oldp+6850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[30]));
        tracep->fullBit(oldp+6851,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[31]));
        tracep->fullBit(oldp+6852,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[0]));
        tracep->fullBit(oldp+6853,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[1]));
        tracep->fullBit(oldp+6854,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[2]));
        tracep->fullBit(oldp+6855,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[3]));
        tracep->fullBit(oldp+6856,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[4]));
        tracep->fullBit(oldp+6857,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[5]));
        tracep->fullBit(oldp+6858,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[6]));
        tracep->fullBit(oldp+6859,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[7]));
        tracep->fullBit(oldp+6860,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[8]));
        tracep->fullBit(oldp+6861,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[9]));
        tracep->fullBit(oldp+6862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[10]));
        tracep->fullBit(oldp+6863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[11]));
        tracep->fullBit(oldp+6864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[12]));
        tracep->fullBit(oldp+6865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[13]));
        tracep->fullBit(oldp+6866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[14]));
        tracep->fullBit(oldp+6867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[15]));
        tracep->fullBit(oldp+6868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[16]));
        tracep->fullBit(oldp+6869,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[17]));
        tracep->fullBit(oldp+6870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[18]));
        tracep->fullBit(oldp+6871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[19]));
        tracep->fullBit(oldp+6872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[20]));
        tracep->fullBit(oldp+6873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[21]));
        tracep->fullBit(oldp+6874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[22]));
        tracep->fullBit(oldp+6875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[23]));
        tracep->fullBit(oldp+6876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[24]));
        tracep->fullBit(oldp+6877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[25]));
        tracep->fullBit(oldp+6878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[26]));
        tracep->fullBit(oldp+6879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[27]));
        tracep->fullBit(oldp+6880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[28]));
        tracep->fullBit(oldp+6881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[29]));
        tracep->fullBit(oldp+6882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[30]));
        tracep->fullBit(oldp+6883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[31]));
        tracep->fullBit(oldp+6884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req));
        tracep->fullCData(oldp+6885,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size)
                                       : 4U)),3);
        tracep->fullIData(oldp+6886,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                              << 4U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset)))
                                       : ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                                >> 1U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                                >> 1U)) 
                                           << 0xcU) 
                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                             << 4U)))),32);
        tracep->fullCData(oldp+6887,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)
                                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb)
                                       : 0xfU)),4);
        VL_EXTEND_WI(128,32, __Vtemp543, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache) {
            __Vtemp545[0U] = __Vtemp543[0U];
            __Vtemp545[1U] = __Vtemp543[1U];
            __Vtemp545[2U] = __Vtemp543[2U];
            __Vtemp545[3U] = __Vtemp543[3U];
        } else {
            __Vtemp545[0U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[0U]
                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[0U]);
            __Vtemp545[1U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[1U]
                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[1U]);
            __Vtemp545[2U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[2U]
                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[2U]);
            __Vtemp545[3U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[3U]
                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[3U]);
        }
        tracep->fullWData(oldp+6888,(__Vtemp545),128);
        tracep->fullWData(oldp+6892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D),256);
        tracep->fullWData(oldp+6900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D),256);
        tracep->fullBit(oldp+6908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena));
        tracep->fullIData(oldp+6909,(((((0U == (3U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                   >> 0x18U))) 
                                        & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))
                                       ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)
                                       : (((((1U == 
                                              (3U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                >> 0x18U))) 
                                             & (0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                                           | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit)))
                                           ? (0x1ffffeU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)
                                           : (1U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                               << 1U))))),21);
        tracep->fullIData(oldp+6910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer),21);
        tracep->fullIData(oldp+6911,(((((0U == (3U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                   >> 0x18U))) 
                                        & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en))
                                       ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)
                                       : (((((1U == 
                                              (3U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                >> 0x18U))) 
                                             & (0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
                                           | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit)))
                                           ? (0x1ffffeU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)
                                           : (1U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag 
                                               << 1U))))),21);
        tracep->fullIData(oldp+6912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer),21);
        tracep->fullBit(oldp+6913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena));
        tracep->fullIData(oldp+6914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__output_buffer),32);
        tracep->fullBit(oldp+6915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena));
        tracep->fullIData(oldp+6916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__output_buffer),32);
        tracep->fullBit(oldp+6917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena));
        tracep->fullIData(oldp+6918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer),32);
        tracep->fullBit(oldp+6919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena));
        tracep->fullIData(oldp+6920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer),32);
        tracep->fullBit(oldp+6921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena));
        tracep->fullIData(oldp+6922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__output_buffer),32);
        tracep->fullBit(oldp+6923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena));
        tracep->fullIData(oldp+6924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__output_buffer),32);
        tracep->fullBit(oldp+6925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena));
        tracep->fullIData(oldp+6926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer),32);
        tracep->fullBit(oldp+6927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena));
        tracep->fullIData(oldp+6928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer),32);
        tracep->fullBit(oldp+6929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way));
        tracep->fullCData(oldp+6930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset),4);
        tracep->fullCData(oldp+6931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index),8);
        tracep->fullCData(oldp+6932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb),4);
        tracep->fullIData(oldp+6933,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata),32);
        tracep->fullCData(oldp+6934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state),3);
        tracep->fullBit(oldp+6935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state));
        tracep->fullBit(oldp+6936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op));
        tracep->fullBit(oldp+6937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache));
        tracep->fullCData(oldp+6938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size),3);
        tracep->fullCData(oldp+6939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index),8);
        tracep->fullIData(oldp+6940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag),20);
        tracep->fullCData(oldp+6941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset),4);
        tracep->fullCData(oldp+6942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb),4);
        tracep->fullIData(oldp+6943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata),32);
        tracep->fullBit(oldp+6944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en));
        tracep->fullCData(oldp+6945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode),2);
        tracep->fullIData(oldp+6946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag),20);
        tracep->fullCData(oldp+6947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index),8);
        tracep->fullCData(oldp+6948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_offset),4);
        tracep->fullBit(oldp+6949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer)));
        tracep->fullBit(oldp+6950,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer)));
        tracep->fullIData(oldp+6951,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                                  >> 1U))),20);
        tracep->fullIData(oldp+6952,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                                  >> 1U))),20);
        tracep->fullBit(oldp+6953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit));
        tracep->fullBit(oldp+6954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit));
        tracep->fullBit(oldp+6955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit));
        tracep->fullWData(oldp+6956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data),128);
        tracep->fullWData(oldp+6960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data),128);
        tracep->fullIData(oldp+6964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[
                                     (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                            >> 2U))]),32);
        tracep->fullIData(oldp+6965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[
                                     (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                            >> 2U))]),32);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay) {
            __Vtemp546[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[0U];
            __Vtemp546[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[1U];
            __Vtemp546[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[2U];
            __Vtemp546[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data[3U];
        } else {
            __Vtemp546[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[0U];
            __Vtemp546[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[1U];
            __Vtemp546[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[2U];
            __Vtemp546[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data[3U];
        }
        tracep->fullWData(oldp+6966,(__Vtemp546),128);
        tracep->fullBit(oldp+6970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward));
        tracep->fullIData(oldp+6971,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                            >> 0x18U)
                                         : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                            >> 0x18U)) 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                              >> 0x10U)
                                           : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                              >> 0x10U)) 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                   >> 8U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata
                                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData)))))),32);
        tracep->fullIData(oldp+6972,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData),32);
        tracep->fullIData(oldp+6973,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward)
                                       ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                >> 0x18U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                                >> 0x18U)) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata 
                                                      >> 8U)
                                                      : 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData 
                                                      >> 8U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb))
                                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata
                                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData)))))
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData)),32);
        tracep->fullBit(oldp+6974,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr) 
                                          >> 7U))));
        tracep->fullBit(oldp+6975,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way));
        tracep->fullBit(oldp+6976,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))))));
        tracep->fullBit(oldp+6977,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))
                                           : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D[
                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index)))))));
        tracep->fullBit(oldp+6978,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way)
                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer
                                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer))));
        tracep->fullIData(oldp+6979,((0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer 
                                                   >> 1U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer 
                                                   >> 1U)))),20);
        tracep->fullBit(oldp+6980,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay));
        tracep->fullCData(oldp+6981,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum),2);
        tracep->fullBit(oldp+6982,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer));
        tracep->fullBit(oldp+6983,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0));
        tracep->fullBit(oldp+6984,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1));
        tracep->fullBit(oldp+6985,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2));
        tracep->fullBit(oldp+6986,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3));
        tracep->fullBit(oldp+6987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0));
        tracep->fullBit(oldp+6988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1));
        tracep->fullBit(oldp+6989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2));
        tracep->fullBit(oldp+6990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3));
        tracep->fullBit(oldp+6991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit));
        tracep->fullBit(oldp+6992,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit));
        tracep->fullBit(oldp+6993,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit));
        tracep->fullCData(oldp+6994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr),8);
        tracep->fullCData(oldp+6995,(((3U == (3U & 
                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                                       ? 2U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                                                ? 1U
                                                : 0U))),3);
        tracep->fullWData(oldp+6996,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D),256);
        tracep->fullWData(oldp+7004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D),256);
        tracep->fullBit(oldp+7012,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena));
        tracep->fullIData(oldp+7013,(((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                        & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                                       ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)
                                       : (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                             & (3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                                           | ((((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                                              & (3U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))))
                                           ? (0x1ffffeU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)
                                           : (1U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                               << 1U))))),21);
        tracep->fullIData(oldp+7014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer),21);
        tracep->fullBit(oldp+7015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena));
        tracep->fullIData(oldp+7016,(((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                        & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en))
                                       ? (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)
                                       : (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                             & (3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                                           | ((((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en)) 
                                              & (3U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))))
                                           ? (0x1ffffeU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)
                                           : (1U | 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag 
                                               << 1U))))),21);
        tracep->fullIData(oldp+7017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer),21);
        tracep->fullBit(oldp+7018,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena));
        tracep->fullIData(oldp+7019,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__output_buffer),32);
        tracep->fullIData(oldp+7020,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__output_buffer),32);
        tracep->fullIData(oldp+7021,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer),32);
        tracep->fullIData(oldp+7022,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer),32);
        tracep->fullIData(oldp+7023,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__output_buffer),32);
        tracep->fullIData(oldp+7024,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__output_buffer),32);
        tracep->fullIData(oldp+7025,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer),32);
        tracep->fullIData(oldp+7026,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer),32);
        tracep->fullBit(oldp+7027,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way));
        tracep->fullCData(oldp+7028,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset),4);
        tracep->fullCData(oldp+7029,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index),8);
        tracep->fullCData(oldp+7030,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb),4);
        tracep->fullIData(oldp+7031,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata),32);
        tracep->fullCData(oldp+7032,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state),3);
        tracep->fullBit(oldp+7033,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state));
        tracep->fullBit(oldp+7034,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op));
        tracep->fullBit(oldp+7035,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache));
        tracep->fullCData(oldp+7036,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size),3);
        tracep->fullCData(oldp+7037,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index),8);
        tracep->fullIData(oldp+7038,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag),20);
        tracep->fullCData(oldp+7039,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset),4);
        tracep->fullCData(oldp+7040,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb),4);
        tracep->fullIData(oldp+7041,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata),32);
        tracep->fullBit(oldp+7042,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en));
        tracep->fullCData(oldp+7043,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode),2);
        tracep->fullBit(oldp+7044,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r));
        tracep->fullBit(oldp+7045,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit_r));
        tracep->fullBit(oldp+7046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit_r));
        tracep->fullBit(oldp+7047,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer)));
        tracep->fullBit(oldp+7048,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer)));
        tracep->fullIData(oldp+7049,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                                  >> 1U))),20);
        tracep->fullIData(oldp+7050,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                                  >> 1U))),20);
        tracep->fullBit(oldp+7051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit));
        tracep->fullBit(oldp+7052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit));
        tracep->fullBit(oldp+7053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit));
        tracep->fullWData(oldp+7054,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data),128);
        tracep->fullWData(oldp+7058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data),128);
        tracep->fullIData(oldp+7062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[
                                     (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                            >> 2U))]),32);
        tracep->fullIData(oldp+7063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[
                                     (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                            >> 2U))]),32);
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay) {
            __Vtemp547[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[0U];
            __Vtemp547[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[1U];
            __Vtemp547[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[2U];
            __Vtemp547[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data[3U];
        } else {
            __Vtemp547[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[0U];
            __Vtemp547[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[1U];
            __Vtemp547[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[2U];
            __Vtemp547[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data[3U];
        }
        tracep->fullWData(oldp+7064,(__Vtemp547),128);
        tracep->fullBit(oldp+7068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward));
        tracep->fullIData(oldp+7069,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                            >> 0x18U)
                                         : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                            >> 0x18U)) 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                              >> 0x10U)
                                           : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                              >> 0x10U)) 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                   >> 8U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata
                                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData)))))),32);
        tracep->fullIData(oldp+7070,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData),32);
        tracep->fullIData(oldp+7071,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward)
                                       ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                >> 0x18U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                                >> 0x18U)) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata 
                                                      >> 8U)
                                                      : 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData 
                                                      >> 8U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb))
                                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata
                                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData)))))
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData)),32);
        tracep->fullBit(oldp+7072,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr) 
                                          >> 7U))));
        tracep->fullBit(oldp+7073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way));
        tracep->fullBit(oldp+7074,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D[
                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))))));
        tracep->fullBit(oldp+7075,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D[
                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index))))));
        tracep->fullBit(oldp+7076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d));
        tracep->fullBit(oldp+7077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v));
        tracep->fullIData(oldp+7078,((0xfffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay)
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer 
                                                   >> 1U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer 
                                                   >> 1U)))),20);
        tracep->fullBit(oldp+7079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay));
        tracep->fullCData(oldp+7080,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum),2);
        tracep->fullBit(oldp+7081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer));
        tracep->fullBit(oldp+7082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank0));
        tracep->fullBit(oldp+7083,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank1));
        tracep->fullBit(oldp+7084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank2));
        tracep->fullBit(oldp+7085,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank3));
        tracep->fullBit(oldp+7086,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank0));
        tracep->fullBit(oldp+7087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank1));
        tracep->fullBit(oldp+7088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank2));
        tracep->fullBit(oldp+7089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank3));
        tracep->fullCData(oldp+7090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr),8);
        tracep->fullBit(oldp+7091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state));
        tracep->fullBit(oldp+7092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state));
        tracep->fullCData(oldp+7093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state),3);
        tracep->fullBit(oldp+7094,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state))));
        tracep->fullBit(oldp+7095,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state)))));
        tracep->fullBit(oldp+7096,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))));
        tracep->fullBit(oldp+7097,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))));
        tracep->fullCData(oldp+7098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size),3);
        tracep->fullCData(oldp+7099,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                       ? 3U : 0U)),8);
        tracep->fullCData(oldp+7100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size),3);
        tracep->fullCData(oldp+7101,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type))
                                       ? 3U : 0U)),8);
        tracep->fullCData(oldp+7102,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                       ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))),3);
        tracep->fullWData(oldp+7103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data),128);
        tracep->fullCData(oldp+7107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num),3);
        tracep->fullBit(oldp+7108,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num))));
        tracep->fullQData(oldp+7109,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc))),64);
        tracep->fullQData(oldp+7111,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata))),64);
        tracep->fullIData(oldp+7113,((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                >> 2U))),32);
        tracep->fullIData(oldp+7114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),32);
        tracep->fullCData(oldp+7115,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code))),3);
        tracep->fullQData(oldp+7116,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr))),64);
        tracep->fullQData(oldp+7118,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr))),64);
        tracep->fullQData(oldp+7120,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data))),64);
        tracep->fullQData(oldp+7122,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr))),64);
        tracep->fullQData(oldp+7124,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr))),64);
        tracep->fullQData(oldp+7126,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))),64);
        tracep->fullQData(oldp+7128,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd))),64);
        tracep->fullQData(oldp+7130,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg))),64);
        tracep->fullQData(oldp+7132,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))),64);
        tracep->fullQData(oldp+7134,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))),64);
        tracep->fullQData(oldp+7136,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv))),64);
        tracep->fullQData(oldp+7138,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry))),64);
        tracep->fullQData(oldp+7140,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))),64);
        tracep->fullQData(oldp+7142,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi))),64);
        tracep->fullQData(oldp+7144,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0))),64);
        tracep->fullQData(oldp+7146,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1))),64);
        tracep->fullQData(oldp+7148,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))),64);
        tracep->fullQData(oldp+7150,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))),64);
        tracep->fullQData(oldp+7152,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh))),64);
        tracep->fullQData(oldp+7154,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0))),64);
        tracep->fullQData(oldp+7156,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1))),64);
        tracep->fullQData(oldp+7158,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2))),64);
        tracep->fullQData(oldp+7160,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3))),64);
        tracep->fullQData(oldp+7162,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),64);
        tracep->fullQData(oldp+7164,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg))),64);
        tracep->fullQData(oldp+7166,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))),64);
        tracep->fullQData(oldp+7168,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid))),64);
        tracep->fullQData(oldp+7170,((QData)((IData)(
                                                     ((0xfffffffeU 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))),64);
        tracep->fullQData(oldp+7172,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry))),64);
        tracep->fullQData(oldp+7174,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0))),64);
        tracep->fullQData(oldp+7176,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1))),64);
        tracep->fullQData(oldp+7178,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [1U]))),64);
        tracep->fullQData(oldp+7180,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [2U]))),64);
        tracep->fullQData(oldp+7182,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [3U]))),64);
        tracep->fullQData(oldp+7184,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [4U]))),64);
        tracep->fullQData(oldp+7186,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [5U]))),64);
        tracep->fullQData(oldp+7188,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [6U]))),64);
        tracep->fullQData(oldp+7190,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [7U]))),64);
        tracep->fullQData(oldp+7192,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [8U]))),64);
        tracep->fullQData(oldp+7194,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [9U]))),64);
        tracep->fullQData(oldp+7196,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xaU]))),64);
        tracep->fullQData(oldp+7198,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xbU]))),64);
        tracep->fullQData(oldp+7200,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xcU]))),64);
        tracep->fullQData(oldp+7202,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xdU]))),64);
        tracep->fullQData(oldp+7204,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xeU]))),64);
        tracep->fullQData(oldp+7206,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0xfU]))),64);
        tracep->fullQData(oldp+7208,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x10U]))),64);
        tracep->fullQData(oldp+7210,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x11U]))),64);
        tracep->fullQData(oldp+7212,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x12U]))),64);
        tracep->fullQData(oldp+7214,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x13U]))),64);
        tracep->fullQData(oldp+7216,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x14U]))),64);
        tracep->fullQData(oldp+7218,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x15U]))),64);
        tracep->fullQData(oldp+7220,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x16U]))),64);
        tracep->fullQData(oldp+7222,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x17U]))),64);
        tracep->fullQData(oldp+7224,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x18U]))),64);
        tracep->fullQData(oldp+7226,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x19U]))),64);
        tracep->fullQData(oldp+7228,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1aU]))),64);
        tracep->fullQData(oldp+7230,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1bU]))),64);
        tracep->fullQData(oldp+7232,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1cU]))),64);
        tracep->fullQData(oldp+7234,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1dU]))),64);
        tracep->fullQData(oldp+7236,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1eU]))),64);
        tracep->fullQData(oldp+7238,((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                     [0x1fU]))),64);
        tracep->fullBit(oldp+7240,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
        tracep->fullBit(oldp+7241,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        tracep->fullBit(oldp+7242,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        tracep->fullBit(oldp+7243,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
        tracep->fullBit(oldp+7244,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        tracep->fullBit(oldp+7245,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                          >> 1U))));
        tracep->fullBit(oldp+7246,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                          >> 2U))));
        tracep->fullBit(oldp+7247,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        tracep->fullBit(oldp+7248,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                          >> 3U))));
        tracep->fullIData(oldp+7249,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        tracep->fullIData(oldp+7250,(((0x7ffffeU & 
                                       (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x420000U 
                                                                   & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        tracep->fullBit(oldp+7251,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        tracep->fullBit(oldp+7252,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
        tracep->fullBit(oldp+7253,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        tracep->fullBit(oldp+7254,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                          >> 4U))));
        tracep->fullCData(oldp+7255,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        tracep->fullCData(oldp+7256,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        tracep->fullCData(oldp+7257,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        tracep->fullCData(oldp+7258,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        tracep->fullCData(oldp+7259,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        tracep->fullCData(oldp+7260,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        tracep->fullCData(oldp+7261,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        tracep->fullCData(oldp+7262,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        tracep->fullCData(oldp+7263,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        tracep->fullCData(oldp+7264,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        tracep->fullCData(oldp+7265,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        tracep->fullCData(oldp+7266,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        tracep->fullCData(oldp+7267,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        tracep->fullCData(oldp+7268,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        tracep->fullCData(oldp+7269,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        tracep->fullCData(oldp+7270,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        tracep->fullCData(oldp+7271,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        tracep->fullCData(oldp+7272,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        tracep->fullCData(oldp+7273,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        tracep->fullCData(oldp+7274,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        tracep->fullCData(oldp+7275,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        tracep->fullCData(oldp+7276,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        tracep->fullCData(oldp+7277,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
        tracep->fullCData(oldp+7278,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                            >> 3U))),3);
        tracep->fullCData(oldp+7279,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
        tracep->fullCData(oldp+7280,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+7281,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        tracep->fullBit(oldp+7282,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        tracep->fullBit(oldp+7283,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        tracep->fullBit(oldp+7284,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        tracep->fullCData(oldp+7285,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        tracep->fullCData(oldp+7286,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        tracep->fullCData(oldp+7287,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        tracep->fullBit(oldp+7288,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        tracep->fullCData(oldp+7289,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        tracep->fullCData(oldp+7290,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        tracep->fullIData(oldp+7291,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        tracep->fullBit(oldp+7292,((1U & (~ ((0x1fe0U 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                  >> 0x10U)) 
                                             | ((0x1fafU 
                                                 == 
                                                 (0x1fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                     >> 0x10U))) 
                                                | (0x1fd0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                                       >> 0x10U)))))))));
        tracep->fullCData(oldp+7293,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
        tracep->fullCData(oldp+7294,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        tracep->fullCData(oldp+7295,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        tracep->fullBit(oldp+7296,((1U & (~ (((0x1fafU 
                                               == (0x1fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                      >> 0x10U))) 
                                              | (0x1fd0U 
                                                 == 
                                                 (0x1fffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                     >> 0x10U)))) 
                                             | (0x1fe0U 
                                                == 
                                                (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                                 >> 0x10U)))))));
        tracep->fullIData(oldp+7297,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        tracep->fullCData(oldp+7298,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        tracep->fullCData(oldp+7299,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        tracep->fullCData(oldp+7300,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        tracep->fullCData(oldp+7301,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        tracep->fullBit(oldp+7302,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        tracep->fullBit(oldp+7303,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        tracep->fullIData(oldp+7304,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        tracep->fullCData(oldp+7305,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        tracep->fullCData(oldp+7306,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        tracep->fullCData(oldp+7307,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        tracep->fullCData(oldp+7308,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        tracep->fullBit(oldp+7309,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        tracep->fullBit(oldp+7310,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        tracep->fullIData(oldp+7311,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        tracep->fullBit(oldp+7312,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                    & ((0U == (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                        : ((0U != (0x3fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                      >> 0xeU))) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        tracep->fullIData(oldp+7313,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                       ? ((((0U != 
                                             (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                >> 8U)
                                             : 0U) 
                                           << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                                       : 0U)),32);
        tracep->fullBit(oldp+7314,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        tracep->fullBit(oldp+7315,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        tracep->fullBit(oldp+7316,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                    & ((0U == (0x3fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                        : ((0U != (0x3fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                      >> 0xeU))) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        tracep->fullBit(oldp+7317,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        tracep->fullBit(oldp+7318,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        tracep->fullBit(oldp+7319,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        tracep->fullIData(oldp+7320,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        tracep->fullCData(oldp+7321,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        tracep->fullCData(oldp+7322,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        tracep->fullBit(oldp+7323,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        tracep->fullIData(oldp+7324,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                       ? 0U : ((0U 
                                                != 
                                                (0x3fU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                    >> 0xeU)))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                   >> 8U)
                                                : 0U))),24);
        tracep->fullIData(oldp+7325,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        tracep->fullBit(oldp+7326,((0U == (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+7327,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
        tracep->fullBit(oldp+7328,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
        tracep->fullBit(oldp+7329,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
        tracep->fullIData(oldp+7330,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
        tracep->fullCData(oldp+7331,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
        tracep->fullCData(oldp+7332,((0xffU & ((4U 
                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                ? (
                                                   (2U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                     : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                      >> 0x10U)
                                                      : 
                                                     (0xc0U 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                      >> 8U)
                                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                      : 
                                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                      >> 3U))))))),8);
        tracep->fullBit(oldp+7333,((0U != (0x3fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+7334,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
        tracep->fullBit(oldp+7335,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        tracep->fullIData(oldp+7336,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        tracep->fullIData(oldp+7337,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        tracep->fullBit(oldp+7338,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        tracep->fullBit(oldp+7339,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        tracep->fullBit(oldp+7340,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        tracep->fullCData(oldp+7341,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        tracep->fullCData(oldp+7342,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        tracep->fullCData(oldp+7343,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        tracep->fullIData(oldp+7344,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        tracep->fullIData(oldp+7345,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        tracep->fullCData(oldp+7346,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        tracep->fullCData(oldp+7347,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        tracep->fullCData(oldp+7348,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        tracep->fullBit(oldp+7349,(((0U == (0x3fU & 
                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                             >> 0xeU)))
                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                     : ((0U != (0x3fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU))) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
        tracep->fullBit(oldp+7350,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        tracep->fullBit(oldp+7351,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        tracep->fullIData(oldp+7352,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                    >> 8U)
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        tracep->fullIData(oldp+7353,(((0U != (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                          >> 8U) : 0U)),24);
        tracep->fullCData(oldp+7354,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
        tracep->fullCData(oldp+7355,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
        tracep->fullBit(oldp+7356,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        tracep->fullBit(oldp+7357,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        tracep->fullBit(oldp+7358,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        tracep->fullBit(oldp+7359,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        tracep->fullBit(oldp+7360,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
        tracep->fullCData(oldp+7361,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
        tracep->fullBit(oldp+7362,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        tracep->fullBit(oldp+7363,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        tracep->fullCData(oldp+7364,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        tracep->fullCData(oldp+7365,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        tracep->fullCData(oldp+7366,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        tracep->fullCData(oldp+7367,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        tracep->fullBit(oldp+7368,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        tracep->fullBit(oldp+7369,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        tracep->fullCData(oldp+7370,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        tracep->fullCData(oldp+7371,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        tracep->fullIData(oldp+7372,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        tracep->fullBit(oldp+7373,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        tracep->fullBit(oldp+7374,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        tracep->fullBit(oldp+7375,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        tracep->fullSData(oldp+7376,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        tracep->fullCData(oldp+7377,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        tracep->fullBit(oldp+7378,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        tracep->fullBit(oldp+7379,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        tracep->fullBit(oldp+7380,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                          >> 7U))));
        tracep->fullBit(oldp+7381,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 2U))));
        tracep->fullBit(oldp+7382,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                             >> 2U)))));
        tracep->fullBit(oldp+7383,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        tracep->fullBit(oldp+7384,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        tracep->fullCData(oldp+7385,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        tracep->fullCData(oldp+7386,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        tracep->fullCData(oldp+7387,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        tracep->fullCData(oldp+7388,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        tracep->fullBit(oldp+7389,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+7390,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+7391,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+7392,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+7393,((((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                     | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                       & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                             >> 2U))))));
        tracep->fullBit(oldp+7394,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 3U))));
        tracep->fullBit(oldp+7395,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 4U))));
        tracep->fullBit(oldp+7396,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                            ? ((0xcU 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 3U))))
                                            : ((8U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)))) 
                                          >> 3U))));
        tracep->fullBit(oldp+7397,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                            ? ((0xcU 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 3U))))
                                            : ((8U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)))) 
                                          >> 2U))));
        tracep->fullBit(oldp+7398,((1U & (((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                            ? ((0xcU 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 3U))))
                                            : ((8U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)))) 
                                          >> 1U))));
        tracep->fullBit(oldp+7399,((1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : ((8U & 
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)))))));
        tracep->fullCData(oldp+7400,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
        tracep->fullBit(oldp+7401,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        tracep->fullBit(oldp+7402,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        tracep->fullBit(oldp+7403,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                          >> 1U))));
        tracep->fullBit(oldp+7404,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
        tracep->fullBit(oldp+7405,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                          >> 2U))));
        tracep->fullBit(oldp+7406,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        tracep->fullBit(oldp+7407,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        tracep->fullBit(oldp+7408,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        tracep->fullBit(oldp+7409,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        tracep->fullBit(oldp+7410,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        tracep->fullBit(oldp+7411,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        tracep->fullBit(oldp+7412,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        tracep->fullBit(oldp+7413,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        tracep->fullBit(oldp+7414,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        tracep->fullBit(oldp+7415,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        tracep->fullBit(oldp+7416,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        tracep->fullBit(oldp+7417,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        tracep->fullBit(oldp+7418,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        tracep->fullBit(oldp+7419,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        tracep->fullBit(oldp+7420,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        tracep->fullBit(oldp+7421,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        tracep->fullBit(oldp+7422,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        tracep->fullBit(oldp+7423,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        tracep->fullBit(oldp+7424,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        tracep->fullSData(oldp+7425,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
        tracep->fullBit(oldp+7426,((0U != (((((((((
                                                   ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [0U] 
                                                         | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [1U]) 
                                                        | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [2U]) 
                                                       | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [3U]) 
                                                      | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [4U]) 
                                                     | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [5U]) 
                                                    | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [6U]) 
                                                   | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [7U]) 
                                                  | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [8U]) 
                                                 | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [9U]) 
                                                | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [0xaU]) 
                                               | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xbU]) 
                                              | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xcU]) 
                                             | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [0xdU]) 
                                            | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [0xeU]) 
                                           | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [0xfU]))));
        tracep->fullCData(oldp+7427,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        tracep->fullCData(oldp+7428,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        tracep->fullCData(oldp+7429,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        tracep->fullCData(oldp+7430,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        tracep->fullSData(oldp+7431,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        tracep->fullBit(oldp+7432,((1U & (~ (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
        tracep->fullCData(oldp+7433,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        tracep->fullCData(oldp+7434,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        tracep->fullBit(oldp+7435,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                          | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                    == 
                                                    (7U 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                                | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
        tracep->fullBit(oldp+7436,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                      == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                    & (2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
        tracep->fullBit(oldp+7437,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        tracep->fullBit(oldp+7438,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        tracep->fullBit(oldp+7439,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        tracep->fullBit(oldp+7440,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        tracep->fullBit(oldp+7441,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        tracep->fullBit(oldp+7442,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        tracep->fullBit(oldp+7443,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        tracep->fullCData(oldp+7444,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        tracep->fullBit(oldp+7445,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        tracep->fullBit(oldp+7446,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        tracep->fullBit(oldp+7447,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        tracep->fullBit(oldp+7448,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        tracep->fullBit(oldp+7449,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        tracep->fullBit(oldp+7450,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        tracep->fullBit(oldp+7451,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        tracep->fullBit(oldp+7452,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        tracep->fullSData(oldp+7453,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        tracep->fullSData(oldp+7454,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        tracep->fullBit(oldp+7455,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                           ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                          >> 8U))));
        tracep->fullBit(oldp+7456,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        tracep->fullBit(oldp+7457,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        tracep->fullBit(oldp+7458,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        tracep->fullBit(oldp+7459,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        tracep->fullBit(oldp+7460,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        tracep->fullBit(oldp+7461,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
        tracep->fullBit(oldp+7462,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
        tracep->fullBit(oldp+7463,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
        tracep->fullBit(oldp+7464,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
        tracep->fullBit(oldp+7465,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
        tracep->fullBit(oldp+7466,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        tracep->fullBit(oldp+7467,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        tracep->fullBit(oldp+7468,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        tracep->fullBit(oldp+7469,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        tracep->fullBit(oldp+7470,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        tracep->fullBit(oldp+7471,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        tracep->fullBit(oldp+7472,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                    & (((0U == (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                        | (1U == (3U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                          & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                >> 2U)))))));
        tracep->fullCData(oldp+7473,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        tracep->fullCData(oldp+7474,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        tracep->fullCData(oldp+7475,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        tracep->fullBit(oldp+7476,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        tracep->fullBit(oldp+7477,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        tracep->fullBit(oldp+7478,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        tracep->fullBit(oldp+7479,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        tracep->fullBit(oldp+7480,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        tracep->fullCData(oldp+7481,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        tracep->fullCData(oldp+7482,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        tracep->fullBit(oldp+7483,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        tracep->fullCData(oldp+7484,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        tracep->fullCData(oldp+7485,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        tracep->fullCData(oldp+7486,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        tracep->fullCData(oldp+7487,((0xfU & ((IData)(1U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        tracep->fullCData(oldp+7488,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+7489,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+7490,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+7491,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+7492,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+7493,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+7494,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+7495,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+7496,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+7497,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+7498,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+7499,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+7500,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+7501,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+7502,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+7503,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        tracep->fullBit(oldp+7504,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        tracep->fullBit(oldp+7505,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        tracep->fullCData(oldp+7506,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        tracep->fullCData(oldp+7507,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        tracep->fullCData(oldp+7508,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        tracep->fullBit(oldp+7509,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        tracep->fullBit(oldp+7510,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        tracep->fullBit(oldp+7511,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        tracep->fullBit(oldp+7512,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        tracep->fullBit(oldp+7513,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        tracep->fullCData(oldp+7514,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        tracep->fullBit(oldp+7515,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        tracep->fullSData(oldp+7516,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        tracep->fullBit(oldp+7517,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        tracep->fullBit(oldp+7518,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        tracep->fullBit(oldp+7519,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullBit(oldp+7520,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullBit(oldp+7521,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullCData(oldp+7522,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                              - (IData)(1U)))),4);
        tracep->fullSData(oldp+7523,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        tracep->fullCData(oldp+7524,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                               >> 2U))),8);
        tracep->fullCData(oldp+7525,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        tracep->fullCData(oldp+7526,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        tracep->fullCData(oldp+7527,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        tracep->fullCData(oldp+7528,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        tracep->fullCData(oldp+7529,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        tracep->fullCData(oldp+7530,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        tracep->fullCData(oldp+7531,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        tracep->fullCData(oldp+7532,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        tracep->fullCData(oldp+7533,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        tracep->fullCData(oldp+7534,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        tracep->fullCData(oldp+7535,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        tracep->fullCData(oldp+7536,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        tracep->fullCData(oldp+7537,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        tracep->fullCData(oldp+7538,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        tracep->fullCData(oldp+7539,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        tracep->fullCData(oldp+7540,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        tracep->fullCData(oldp+7541,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        tracep->fullCData(oldp+7542,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        tracep->fullCData(oldp+7543,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        tracep->fullCData(oldp+7544,((0xfU & ((IData)(1U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        tracep->fullCData(oldp+7545,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U]),3);
        tracep->fullCData(oldp+7546,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [1U]),3);
        tracep->fullCData(oldp+7547,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [2U]),3);
        tracep->fullCData(oldp+7548,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [3U]),3);
        tracep->fullCData(oldp+7549,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [4U]),3);
        tracep->fullCData(oldp+7550,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [5U]),3);
        tracep->fullCData(oldp+7551,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [6U]),3);
        tracep->fullCData(oldp+7552,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [7U]),3);
        tracep->fullCData(oldp+7553,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [8U]),3);
        tracep->fullCData(oldp+7554,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [9U]),3);
        tracep->fullCData(oldp+7555,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xaU]),3);
        tracep->fullCData(oldp+7556,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xbU]),3);
        tracep->fullCData(oldp+7557,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xcU]),3);
        tracep->fullCData(oldp+7558,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xdU]),3);
        tracep->fullCData(oldp+7559,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xeU]),3);
        tracep->fullCData(oldp+7560,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xfU]),3);
        tracep->fullCData(oldp+7561,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                               >> 3U))),8);
        tracep->fullCData(oldp+7562,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+7563,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+7564,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+7565,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+7566,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+7567,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+7568,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+7569,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+7570,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+7571,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+7572,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+7573,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+7574,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+7575,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+7576,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+7577,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        tracep->fullBit(oldp+7578,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        tracep->fullSData(oldp+7579,((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
        tracep->fullCData(oldp+7580,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        tracep->fullCData(oldp+7581,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        tracep->fullCData(oldp+7582,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        tracep->fullCData(oldp+7583,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        tracep->fullSData(oldp+7584,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        tracep->fullIData(oldp+7585,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        tracep->fullIData(oldp+7586,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        tracep->fullIData(oldp+7587,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        tracep->fullIData(oldp+7588,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        tracep->fullIData(oldp+7589,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        tracep->fullIData(oldp+7590,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        tracep->fullIData(oldp+7591,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        tracep->fullIData(oldp+7592,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        tracep->fullSData(oldp+7593,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        tracep->fullQData(oldp+7594,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        tracep->fullCData(oldp+7596,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        tracep->fullIData(oldp+7597,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        tracep->fullSData(oldp+7598,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        tracep->fullSData(oldp+7599,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        tracep->fullBit(oldp+7600,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        tracep->fullBit(oldp+7601,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        tracep->fullBit(oldp+7602,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        tracep->fullSData(oldp+7603,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 0x10U))),14);
        tracep->fullCData(oldp+7604,((7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+7605,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U))),4);
        tracep->fullBit(oldp+7606,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 8U))));
        tracep->fullBit(oldp+7607,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 9U))));
        tracep->fullBit(oldp+7608,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7609,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x40U == (0x7ffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+7610,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        tracep->fullBit(oldp+7611,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        tracep->fullBit(oldp+7612,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        tracep->fullBit(oldp+7613,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        tracep->fullBit(oldp+7614,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        tracep->fullBit(oldp+7615,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x10U == (0x7ffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+7616,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x14U == (0x7ffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+7617,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        tracep->fullBit(oldp+7618,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        tracep->fullBit(oldp+7619,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        tracep->fullBit(oldp+7620,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        tracep->fullBit(oldp+7621,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        tracep->fullBit(oldp+7622,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        tracep->fullBit(oldp+7623,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        tracep->fullBit(oldp+7624,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        tracep->fullCData(oldp+7625,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        tracep->fullCData(oldp+7626,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        tracep->fullQData(oldp+7627,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        tracep->fullIData(oldp+7629,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        tracep->fullCData(oldp+7630,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
        tracep->fullCData(oldp+7631,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
        tracep->fullCData(oldp+7632,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        tracep->fullCData(oldp+7633,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        tracep->fullCData(oldp+7634,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        tracep->fullCData(oldp+7635,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        tracep->fullCData(oldp+7636,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        tracep->fullCData(oldp+7637,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        tracep->fullCData(oldp+7638,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        tracep->fullSData(oldp+7639,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        tracep->fullQData(oldp+7640,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        tracep->fullIData(oldp+7642,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        tracep->fullBit(oldp+7643,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        tracep->fullBit(oldp+7644,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        tracep->fullBit(oldp+7645,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        tracep->fullBit(oldp+7646,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        tracep->fullBit(oldp+7647,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        tracep->fullBit(oldp+7648,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        tracep->fullQData(oldp+7649,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                        << 0x28U) | 
                                       (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                         << 0x24U) 
                                        | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                            << 4U) 
                                           | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        tracep->fullIData(oldp+7651,(((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
        tracep->fullIData(oldp+7652,(((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                          & ((((IData)(1U) 
                                               + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        tracep->fullIData(oldp+7653,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        tracep->fullCData(oldp+7654,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        tracep->fullBit(oldp+7655,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+7656,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+7657,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullCData(oldp+7658,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        tracep->fullCData(oldp+7659,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        tracep->fullBit(oldp+7660,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        tracep->fullCData(oldp+7661,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        tracep->fullBit(oldp+7662,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        tracep->fullQData(oldp+7663,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_araddr)) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (0x800U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                                       << 8U) 
                                                                      | ((0xf0U 
                                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                                             << 4U)) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arid)))))))),45);
        tracep->fullQData(oldp+7665,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        tracep->fullIData(oldp+7667,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 0xdU))),32);
        tracep->fullCData(oldp+7668,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                    >> 0xbU)))),2);
        tracep->fullCData(oldp+7669,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        tracep->fullCData(oldp+7670,((0xfU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 4U)))),4);
        tracep->fullCData(oldp+7671,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                    >> 8U)))),3);
        tracep->fullBit(oldp+7672,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        tracep->fullCData(oldp+7673,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        tracep->fullQData(oldp+7674,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                          << 4U) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        tracep->fullIData(oldp+7676,(((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        tracep->fullIData(oldp+7677,(((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                          & ((((IData)(1U) 
                                               + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        tracep->fullIData(oldp+7678,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        tracep->fullCData(oldp+7679,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        tracep->fullBit(oldp+7680,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+7681,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+7682,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullCData(oldp+7683,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        tracep->fullCData(oldp+7684,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        tracep->fullCData(oldp+7685,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        tracep->fullBit(oldp+7686,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        tracep->fullQData(oldp+7687,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (0x801U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                                       << 8U) 
                                                                      | (0xf0U 
                                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                                            << 4U)))))))),45);
        tracep->fullQData(oldp+7689,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        tracep->fullIData(oldp+7691,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 0xdU))),32);
        tracep->fullCData(oldp+7692,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                    >> 0xbU)))),2);
        tracep->fullCData(oldp+7693,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        tracep->fullCData(oldp+7694,((0xfU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 4U)))),4);
        tracep->fullCData(oldp+7695,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                    >> 8U)))),3);
        tracep->fullBit(oldp+7696,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        tracep->fullBit(oldp+7697,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        tracep->fullBit(oldp+7698,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        tracep->fullCData(oldp+7699,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        tracep->fullBit(oldp+7700,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        tracep->fullCData(oldp+7701,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        tracep->fullBit(oldp+7702,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        tracep->fullBit(oldp+7703,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        tracep->fullQData(oldp+7704,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                        << 0x28U) | 
                                       (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                         << 0x24U) 
                                        | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                            << 4U) 
                                           | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        tracep->fullIData(oldp+7706,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        tracep->fullIData(oldp+7707,(((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        tracep->fullIData(oldp+7708,(((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                          & ((((IData)(1U) 
                                               + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        tracep->fullIData(oldp+7709,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        tracep->fullCData(oldp+7710,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        tracep->fullBit(oldp+7711,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+7712,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+7713,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullCData(oldp+7714,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        tracep->fullCData(oldp+7715,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        tracep->fullBit(oldp+7716,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        tracep->fullCData(oldp+7717,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        tracep->fullBit(oldp+7718,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        tracep->fullQData(oldp+7719,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        tracep->fullIData(oldp+7721,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 0xdU))),32);
        tracep->fullCData(oldp+7722,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                    >> 0xbU)))),2);
        tracep->fullCData(oldp+7723,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        tracep->fullCData(oldp+7724,((0xfU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 4U)))),4);
        tracep->fullCData(oldp+7725,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                    >> 8U)))),3);
        tracep->fullBit(oldp+7726,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        tracep->fullCData(oldp+7727,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        tracep->fullQData(oldp+7728,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                          << 4U) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        tracep->fullIData(oldp+7730,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        tracep->fullIData(oldp+7731,(((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        tracep->fullIData(oldp+7732,(((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                          & ((((IData)(1U) 
                                               + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        tracep->fullIData(oldp+7733,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        tracep->fullCData(oldp+7734,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        tracep->fullBit(oldp+7735,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+7736,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+7737,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullCData(oldp+7738,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        tracep->fullCData(oldp+7739,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        tracep->fullCData(oldp+7740,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        tracep->fullBit(oldp+7741,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        tracep->fullQData(oldp+7742,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        tracep->fullIData(oldp+7744,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 0xdU))),32);
        tracep->fullCData(oldp+7745,((3U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                    >> 0xbU)))),2);
        tracep->fullCData(oldp+7746,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        tracep->fullCData(oldp+7747,((0xfU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 4U)))),4);
        tracep->fullCData(oldp+7748,((7U & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                    >> 8U)))),3);
        tracep->fullBit(oldp+7749,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        tracep->fullBit(oldp+7750,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        tracep->fullBit(oldp+7751,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        tracep->fullCData(oldp+7752,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        tracep->fullBit(oldp+7753,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        tracep->fullCData(oldp+7754,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        tracep->fullIData(oldp+7755,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        tracep->fullBit(oldp+7756,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        tracep->fullBit(oldp+7757,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
        tracep->fullIData(oldp+7758,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        tracep->fullIData(oldp+7759,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        tracep->fullIData(oldp+7760,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        tracep->fullIData(oldp+7761,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        tracep->fullIData(oldp+7762,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        tracep->fullIData(oldp+7763,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        tracep->fullIData(oldp+7764,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        tracep->fullIData(oldp+7765,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        tracep->fullIData(oldp+7766,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        tracep->fullIData(oldp+7767,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        tracep->fullIData(oldp+7768,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        tracep->fullIData(oldp+7769,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        tracep->fullIData(oldp+7770,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        tracep->fullIData(oldp+7771,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        tracep->fullCData(oldp+7772,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        tracep->fullBit(oldp+7773,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        tracep->fullIData(oldp+7774,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        tracep->fullIData(oldp+7775,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        tracep->fullIData(oldp+7776,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        tracep->fullCData(oldp+7777,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        tracep->fullBit(oldp+7778,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        tracep->fullBit(oldp+7779,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        tracep->fullBit(oldp+7780,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        tracep->fullBit(oldp+7781,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        tracep->fullBit(oldp+7782,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        tracep->fullBit(oldp+7783,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        tracep->fullBit(oldp+7784,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        tracep->fullBit(oldp+7785,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        tracep->fullIData(oldp+7786,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        tracep->fullIData(oldp+7787,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        tracep->fullIData(oldp+7788,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        tracep->fullIData(oldp+7789,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        tracep->fullIData(oldp+7790,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        tracep->fullCData(oldp+7791,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        tracep->fullSData(oldp+7792,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        tracep->fullCData(oldp+7793,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        tracep->fullBit(oldp+7794,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        tracep->fullIData(oldp+7795,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        tracep->fullCData(oldp+7796,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        tracep->fullBit(oldp+7797,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7798,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        tracep->fullBit(oldp+7799,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        tracep->fullBit(oldp+7800,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        tracep->fullIData(oldp+7801,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        tracep->fullBit(oldp+7802,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7803,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        tracep->fullIData(oldp+7804,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        tracep->fullBit(oldp+7805,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                          >> 0x13U))));
        tracep->fullIData(oldp+7806,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        tracep->fullCData(oldp+7807,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        __Vtemp548[0U] = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r))))) 
                           << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP) 
                                      << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi)))));
        __Vtemp548[1U] = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r))))) 
                           >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                                                      ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r)))) 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp548[2U] = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                                                   : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r)))) 
                                   >> 0x20U)) >> 0x1cU);
        tracep->fullWData(oldp+7808,(__Vtemp548),68);
        __Vtemp550[0U] = ((((1U & (((((((((((((((((
                                                   (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                        >> 0x13U))) 
                                            | (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                       >> 0x15U))) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))
                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm
                             : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB) 
                           << 0x19U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod)) 
                                         << 0x18U) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh)) 
                                            << 0x17U) 
                                           | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu)) 
                                               << 0x16U) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul)
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu))
                                                       ? 4U
                                                       : 0U)))) 
                                                  << 0x13U) 
                                                 | ((0x60000U 
                                                     & (((0x20000U 
                                                          & ((- (IData)(
                                                                        (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))) 
                                                             << 0x11U)) 
                                                         | (0x40000U 
                                                            & ((- (IData)(
                                                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)))) 
                                                               << 0x11U))) 
                                                        | ((- (IData)(
                                                                      ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w)) 
                                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))) 
                                                           << 0x11U))) 
                                                    | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w)) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                                        << 0x10U) 
                                                       | ((0xfffcU 
                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                              >> 0xcU)) 
                                                          | (3U 
                                                             & (((1U 
                                                                  & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd)))) 
                                                                 | (2U 
                                                                    & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr))))) 
                                                                | (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)))))))))))));
        __Vtemp550[1U] = ((((1U & (((((((((((((((((
                                                   (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                        >> 0x13U))) 
                                            | (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                       >> 0x15U))) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))
                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm
                             : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB) 
                           >> 7U) | ((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((1U 
                                                                  & ((0ULL 
                                                                      != 
                                                                      (0x280000ULL 
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                                                  ? 
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                                     >> 4U))
                                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA))))) 
                                     << 0x19U));
        __Vtemp551[3U] = ((0x3e000000U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid)
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
                                                    & ((((IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                  >> 0xeU)) 
                                                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                                            >> 1U)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                                                           >> 3U)) 
                                                       & (0U 
                                                          != 
                                                          (0x30U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d))))
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 4U))))) 
                                          << 0x19U)) 
                          | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((1U 
                                                                      & ((0ULL 
                                                                          != 
                                                                          (0x280000ULL 
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                                                      ? 
                                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                                         >> 4U))
                                                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)))) 
                                      >> 0x20U)) >> 7U));
        __Vtemp553[3U] = (((((((((((((((0U == (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w))) 
                                       & (0U == (1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)))) 
                                      & (0U == (1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)))) 
                                     & (0ULL == (0xfd00000ULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d))) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn))) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd))) 
                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr))) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill))) 
                              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb))) 
                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop))) 
                            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                           << 0x1fU) | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h)) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp))) 
                                         << 0x1eU) 
                                        | __Vtemp551[3U]));
        __Vtemp554[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                     >> 4U)))) 
                           << 0x12U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                          << 0xfU) 
                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu) 
                                                      << 0xbU) 
                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b) 
                                                        << 0xaU)))))) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w) 
                                             << 4U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h) 
                                                << 3U) 
                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b) 
                                                  << 2U))) 
                                           | ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg)) 
                                                & (5U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 0xeU)))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp)))))));
        __Vtemp559[2U] = ((0xfc000000U & (((((0x4000000U 
                                              & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch))) 
                                                 << 0x1aU)) 
                                             | (0x8000000U 
                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd))) 
                                                   << 0x1aU))) 
                                            | (0xc000000U 
                                               & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr))) 
                                                  << 0x1aU))) 
                                           | (0x10000000U 
                                              & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill))) 
                                                 << 0x1aU))) 
                                          | (0x14000000U 
                                             & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb))) 
                                                << 0x1aU)))) 
                          | ((0x3e00000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                            << 0x11U)) 
                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop) 
                                 << 0x14U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc) 
                                                  << 0x12U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                                    >> 4U))) 
                                                             >> 0x20U)) 
                                                    >> 0xeU))))));
        __Vtemp564[5U] = ((__Vtemp550[1U] >> 0x11U) 
                          | (0xffff8000U & ((IData)(
                                                    (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((1U 
                                                                         & ((0ULL 
                                                                             != 
                                                                             (0x280000ULL 
                                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                                                         ? 
                                                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                                                          << 0x1cU) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                                            >> 4U))
                                                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA))))) 
                                            << 8U)));
        __Vtemp564[6U] = ((((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((1U 
                                                                    & ((0ULL 
                                                                        != 
                                                                        (0x280000ULL 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                                                    ? 
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                                       >> 4U))
                                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA))))) 
                            >> 0x18U) | (0x7f00U & 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((1U 
                                                                        & ((0ULL 
                                                                            != 
                                                                            (0x280000ULL 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                                                        ? 
                                                                       ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                                                           >> 4U))
                                                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)))) 
                                                   >> 0x20U)) 
                                          << 8U))) 
                          | (__Vtemp553[3U] << 0xfU));
        __Vtemp566[0U] = __Vtemp554[0U];
        __Vtemp566[1U] = (((IData)((((QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                     >> 4U)))) 
                           >> 0xeU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U])) 
                                                       >> 4U))) 
                                                >> 0x20U)) 
                                       << 0x12U));
        __Vtemp566[2U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int) 
                           << 0x1fU) | ((0x60000000U 
                                         & (((0x20000000U 
                                              & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid))) 
                                                 << 0x1dU)) 
                                             | (0x40000000U 
                                                & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl))) 
                                                   << 0x1dU))) 
                                            | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh))) 
                                               << 0x1dU))) 
                                        | __Vtemp559[2U]));
        __Vtemp566[3U] = ((__Vtemp550[0U] << 0xfU) 
                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn) 
                              << 0xeU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp) 
                                           << 0xdU) 
                                          | (0x7fffffffU 
                                             & ((0x1000U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                    << 9U)) 
                                                | ((0x800U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       << 9U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                          << 9U)) 
                                                      | ((0x200U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                             << 9U)) 
                                                         | ((0x7fffff00U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall) 
                                                                << 8U)) 
                                                            | ((0x7fffff80U 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break) 
                                                                   << 7U)) 
                                                               | ((0x7fffffc0U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP) 
                                                                      << 6U)) 
                                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int) 
                                                                     >> 1U))))))))))));
        __Vtemp566[4U] = ((__Vtemp550[0U] >> 0x11U) 
                          | (__Vtemp550[1U] << 0xfU));
        __Vtemp566[5U] = __Vtemp564[5U];
        __Vtemp566[6U] = __Vtemp564[6U];
        __Vtemp566[7U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op) 
                           << 0x10U) | ((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h)) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu)) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                         << 0xfU) | 
                                        (__Vtemp553[3U] 
                                         >> 0x11U)));
        tracep->fullWData(oldp+7811,(__Vtemp566),254);
        tracep->fullBit(oldp+7819,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op)) 
                                     & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state))) 
                                    | ((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op))) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid)) 
                                       & (((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                                  >> 2U)) 
                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache))))));
        tracep->fullBit(oldp+7820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullIData(oldp+7821,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),19);
        tracep->fullCData(oldp+7822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),6);
        tracep->fullSData(oldp+7823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),10);
        tracep->fullBit(oldp+7824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullIData(oldp+7825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),20);
        tracep->fullCData(oldp+7826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),2);
        tracep->fullCData(oldp+7827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),2);
        tracep->fullBit(oldp+7828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullBit(oldp+7829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullIData(oldp+7830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),20);
        tracep->fullCData(oldp+7831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),2);
        tracep->fullCData(oldp+7832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                     [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                   >> 0x1fU)))]),2);
        tracep->fullBit(oldp+7833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullBit(oldp+7834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                   [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                 >> 0x1fU)))]));
        tracep->fullBit(oldp+7835,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive))));
        tracep->fullBit(oldp+7836,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) 
                                    & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          >> 0x10U)))));
        tracep->fullIData(oldp+7837,(((1U == (3U & 
                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  >> 0x1fU))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                           << 2U) | 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                           >> 0x1eU))
                                       : ((2U == (3U 
                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                      << 1U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                        >> 0x1fU))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                               << 2U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                 >> 0x1eU))
                                           : ((3U == 
                                               (3U 
                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                      >> 0x1fU))))
                                               ? ((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                                   << 2U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                     >> 0x1eU))
                                               : ((0x80000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U])
                                                   ? 
                                                  (1U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                      >> 1U))
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                    << 2U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                      >> 0x1eU))))))),32);
        tracep->fullBit(oldp+7838,((1U & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid)
                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r
                                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus) 
                                                  >> 0x21U)))));
        tracep->fullIData(oldp+7839,((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid)
                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r
                                               : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus))),32);
        tracep->fullIData(oldp+7840,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r)),32);
        tracep->fullBit(oldp+7841,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid)
                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r)
                                     : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel))));
        tracep->fullIData(oldp+7842,(((1U & ((0ULL 
                                              != (0x280000ULL 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                           << 0x1cU) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                             >> 4U))
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA)),32);
        tracep->fullIData(oldp+7843,(((1U & (((((((
                                                   (((((((((((((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli) 
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
                                                       | (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                  >> 0x13U))) 
                                                      | (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                                                 >> 0x15U))) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi)) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori)) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc)))
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm
                                       : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB)),32);
        tracep->fullBit(oldp+7844,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__load_delay)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken))));
        tracep->fullIData(oldp+7845,(((IData)((0ULL 
                                               != (0xff00000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))
                                       ? (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[2U] 
                                            << 0x1cU) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[1U] 
                                              >> 4U)) 
                                          + ((IData)(
                                                     (0ULL 
                                                      != 
                                                      (0x300000ULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d)))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                                 >> 0x19U)))) 
                                                  << 0x1cU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 
                                                    << 2U))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                                 >> 0x1dU)))) 
                                                  << 0x12U) 
                                                 | (0x3fffcU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                       >> 0xcU)))))
                                       : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA 
                                          + (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                             >> 0x13U)))) 
                                              << 0x12U) 
                                             | (0x3fffcU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                   >> 0xcU)))))),32);
        tracep->fullBit(oldp+7846,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus)) 
                                     & (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                           & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                          & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                     >> 0x28U))) 
                                         & ((0x1fU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                        >> 0x21U))) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                             & (0U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                            & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                       >> 0x28U))) 
                                           & ((0x1fU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                          >> 0x21U))) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))))) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))));
        tracep->fullBit(oldp+7847,(((((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
                                          >> 7U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid)) 
                                     & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj) 
                                          & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                         & ((((0x1fU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                          >> 0x21U))) 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA)) 
                                             | ((0x1fU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U]) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA))) 
                                            | ((0x1fU 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U]) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                              >> 0x21U)))))) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd) 
                                            & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                           & ((((0x1fU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus 
                                                            >> 0x21U))) 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB)) 
                                               | ((0x1fU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U]) 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB))) 
                                              | ((0x1fU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[2U]) 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB)))))) 
                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U] 
                                       != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus[0U]))));
        tracep->fullSData(oldp+7848,(((0x3f80U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                                                  << 1U)) 
                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP) 
                                          << 6U) | 
                                         (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR) 
                                           << 5U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL) 
                                            << 4U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS) 
                                               << 3U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME) 
                                                     << 1U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                       >> 0x1fU))))))))),14);
        tracep->fullIData(oldp+7849,((0x7ffffU & ((
                                                   ((- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                    >> 0x1aU))))) 
                                                    & (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                               >> 0x22U))) 
                                                   | ((- (IData)(
                                                                 (5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                      >> 0x1aU))))) 
                                                      & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                          << 0xbU) 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                            >> 0x15U)))) 
                                                  | ((- (IData)(
                                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
                                                                 & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                        >> 0xfU)) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))))) 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                                        >> 0xdU))))),19);
        tracep->fullSData(oldp+7850,((0x3ffU & ((((- (IData)(
                                                             (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                  >> 0x1aU))))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                             >> 0x18U))) 
                                                 | ((- (IData)(
                                                               (5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                    >> 0x1aU))))) 
                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                        << 0x18U) 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                          >> 8U)))) 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
                                                               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                      >> 0xfU)) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                              >> 0x18U)))))),10);
        tracep->fullIData(oldp+7851,(((0x21U == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                            >> 0xbU))))
                                       ? (((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 0x1aU)) 
                                           << 0x15U) 
                                          | (0x1fffffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))
                                       : (((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                    >> 0x11U)) 
                                           << 0xcU) 
                                          | (0xfffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult)))),32);
        tracep->fullIData(oldp+7852,((((- (IData)((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)))) 
                                       & (((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                    >> 0xdU)) 
                                           << 0x1dU) 
                                          | (0x1fffffffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select) 
                                                        >> 1U)))) 
                                         & (((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                      >> 0xaU)) 
                                             << 0x1dU) 
                                            | (0x1fffffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))),32);
        tracep->fullCData(oldp+7853,(((8U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                              >> 0xfU) 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus) 
                                                << 3U))) 
                                      | (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[0U] 
                                               >> 2U)))),8);
        tracep->fullIData(oldp+7854,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q) 
                                      << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc)))),32);
        tracep->fullQData(oldp+7855,((0x1ffffffffULL 
                                      & ((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) 
                                           & (QData)((IData)(
                                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign)
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                                              [0U]
                                                               : 
                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[6U] 
                                                                << 0x18U) 
                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                  >> 8U)))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                                                    >> 1U))))) 
                                             & (QData)((IData)(
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc))))))) 
                                         | (0x1ffffffffULL 
                                            & ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                                                      >> 4U))))) 
                                               & (((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                     ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                                    + 
                                                    ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                     ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                                    << 1U)) 
                                                  >> 3U)))))),33);
        tracep->fullQData(oldp+7857,((0x1ffffffffULL 
                                      & ((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q))))) 
                                           & (QData)((IData)(
                                                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign)
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res
                                                              [1U]
                                                               : 
                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                                << 0x18U) 
                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U] 
                                                                  >> 8U)))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                                                    >> 1U))))) 
                                             & (QData)((IData)(
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc))))))) 
                                         | (0x1ffffffffULL 
                                            & ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q) 
                                                                      >> 4U))))) 
                                               & ((((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                      ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q) 
                                                     + 
                                                     ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                      ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q)) 
                                                    + 
                                                    ((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q))) 
                                                     ^ 
                                                     ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q)) 
                                                      << 3U))) 
                                                   + 
                                                   (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q)))) 
                                                  >> 3U)))))),33);
        tracep->fullIData(oldp+7859,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q) 
                                      << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc)))),32);
        tracep->fullBit(oldp+7860,(((0x1fU == (0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc))) 
                                    & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q 
                                               >> 0x1fU)))));
        tracep->fullCData(oldp+7861,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        tracep->fullBit(oldp+7862,((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes))));
        tracep->fullIData(oldp+7863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes),32);
        tracep->fullWData(oldp+7864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes),160);
        tracep->fullCData(oldp+7869,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        tracep->fullBit(oldp+7870,((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes))));
        tracep->fullIData(oldp+7871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes),32);
        tracep->fullWData(oldp+7872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes),160);
        tracep->fullIData(oldp+7877,(((((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                        >> 2U))))) 
                                        & (((- (IData)(
                                                       (1U 
                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData) 
                                                              >> 7U))))) 
                                            << 8U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData))) 
                                       | ((- (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                          >> 2U))))) 
                                          & (((- (IData)(
                                                         (1U 
                                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                              >> 1U) 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData) 
                                                                >> 0xfU))))) 
                                              << 0x10U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData)))) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                         >> 2U))))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata))),32);
        tracep->fullIData(oldp+7878,(((2U == (3U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               >> 0x11U)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                           << 0x1fU) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                             >> 1U))
                                       : ((3U == (3U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                     >> 0x11U)))
                                           ? ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                 << 0x1fU) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                   >> 1U)) 
                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                   << 0x1fU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                     >> 1U))) 
                                              | ((~ 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                      >> 1U))) 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                     << 2U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                       >> 0x1eU))))
                                           : 0U))),32);
        tracep->fullCData(oldp+7879,((0xfU & (((- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                               >> 0x1cU))))) 
                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                   << 4U) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[1U] 
                                                     >> 0x1cU))) 
                                              | ((- (IData)(
                                                            (4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                 >> 0x1cU))))) 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                     << 2U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                                       >> 0x1eU)))))),5);
        tracep->fullBit(oldp+7880,((1U & ((1U == (7U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                     >> 0x1cU)))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                              >> 0x1aU)
                                           : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                              >> 0x18U)))));
        tracep->fullIData(oldp+7881,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                            >> 0x18U)
                                         : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 0x18U)) 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                              >> 0x10U)
                                           : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                              >> 0x10U)) 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                                   >> 8U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata
                                                 : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        tracep->fullIData(oldp+7882,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op) 
                                       & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset) 
                                                 >> 2U)) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum)))
                                       ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                                >> 0x18U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x18U)) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata 
                                                      >> 8U)
                                                      : 
                                                     (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                      >> 8U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb))
                                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata
                                                       : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                       : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        tracep->fullIData(oldp+7883,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                            >> 0x18U)
                                         : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 0x18U)) 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                           ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                              >> 0x10U)
                                           : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                              >> 0x10U)) 
                                         << 0x10U)) 
                                       | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                                   >> 8U)
                                                : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata
                                                 : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        tracep->fullIData(oldp+7884,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op) 
                                       & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset) 
                                                 >> 2U)) 
                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum)))
                                       ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                             ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                                >> 0x18U)
                                             : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x18U)) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                      ? 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata 
                                                      >> 8U)
                                                      : 
                                                     (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                      >> 8U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb))
                                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata
                                                       : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                                       : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        tracep->fullBit(oldp+7885,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        tracep->fullBit(oldp+7886,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        tracep->fullBit(oldp+7887,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        tracep->fullIData(oldp+7888,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        tracep->fullIData(oldp+7889,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        tracep->fullIData(oldp+7890,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        tracep->fullIData(oldp+7891,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        tracep->fullIData(oldp+7892,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        tracep->fullBit(oldp+7893,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast))));
        tracep->fullBit(oldp+7894,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast))));
        tracep->fullBit(oldp+7895,(((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                      >> 2U)))));
        tracep->fullBit(oldp+7896,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->fullBit(oldp+7897,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->fullBit(oldp+7898,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 3U) | 
                                          (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        tracep->fullBit(oldp+7899,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        tracep->fullBit(oldp+7900,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->fullBit(oldp+7901,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                       | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        tracep->fullBit(oldp+7902,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        tracep->fullBit(oldp+7903,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->fullBit(oldp+7904,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->fullBit(oldp+7905,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        tracep->fullBit(oldp+7906,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        tracep->fullBit(oldp+7907,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->fullBit(oldp+7908,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                       | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        tracep->fullBit(oldp+7909,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
        tracep->fullBit(oldp+7910,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8000U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+7911,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                    & (0x8010U == (0xffffU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    }
}
