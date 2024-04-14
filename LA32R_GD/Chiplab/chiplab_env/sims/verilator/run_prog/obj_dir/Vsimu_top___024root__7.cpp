// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsimu_top___024root___combo__TOP__20(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___combo__TOP__20\n"); );
    // Variables
    CData/*31:0*/ __Vtemp422;
    CData/*31:0*/ __Vtemp423;
    CData/*31:0*/ __Vtemp424;
    CData/*31:0*/ __Vtemp425;
    CData/*31:0*/ __Vtemp426;
    CData/*31:0*/ __Vtemp427;
    CData/*31:0*/ __Vtemp428;
    CData/*31:0*/ __Vtemp429;
    CData/*31:0*/ __Vtemp430;
    QData/*63:0*/ __Vtemp431;
    QData/*63:0*/ __Vtemp432;
    QData/*63:0*/ __Vtemp433;
    QData/*63:0*/ __Vtemp434;
    QData/*63:0*/ __Vtemp435;
    QData/*63:0*/ __Vtemp436;
    QData/*63:0*/ __Vtemp437;
    QData/*63:0*/ __Vtemp438;
    QData/*63:0*/ __Vtemp439;
    QData/*63:0*/ __Vtemp440;
    QData/*63:0*/ __Vtemp441;
    QData/*63:0*/ __Vtemp442;
    QData/*63:0*/ __Vtemp443;
    QData/*63:0*/ __Vtemp444;
    QData/*63:0*/ __Vtemp445;
    QData/*63:0*/ __Vtemp446;
    QData/*63:0*/ __Vtemp447;
    QData/*63:0*/ __Vtemp448;
    QData/*63:0*/ __Vtemp449;
    QData/*63:0*/ __Vtemp450;
    QData/*63:0*/ __Vtemp451;
    QData/*63:0*/ __Vtemp452;
    QData/*63:0*/ __Vtemp453;
    QData/*63:0*/ __Vtemp454;
    QData/*63:0*/ __Vtemp455;
    QData/*63:0*/ __Vtemp456;
    QData/*63:0*/ __Vtemp457;
    QData/*63:0*/ __Vtemp458;
    QData/*63:0*/ __Vtemp459;
    QData/*63:0*/ __Vtemp460;
    QData/*63:0*/ __Vtemp461;
    // Body
    __Vtemp422 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x17U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x17U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x17U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x17U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x17U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x17U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp422 << 0x17U));
    __Vtemp423 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x18U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x18U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x18U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x18U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x18U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x18U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0xffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp423 << 0x18U));
    __Vtemp424 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x19U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x19U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x19U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x19U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x19U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x19U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x1ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp424 << 0x19U));
    __Vtemp425 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1aU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1aU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1aU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1aU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1aU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1aU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x3ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp425 << 0x1aU));
    __Vtemp426 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1bU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1bU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1bU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1bU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1bU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1bU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp426 << 0x1bU));
    __Vtemp427 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1cU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1cU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1cU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1cU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1cU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1cU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0xfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp427 << 0x1cU));
    __Vtemp428 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1dU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1dU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1dU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1dU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1dU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1dU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp428 << 0x1dU));
    __Vtemp429 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1eU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1eU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1eU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1eU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1eU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1eU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x3fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp429 << 0x1eU));
    __Vtemp430 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x1fU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x1fU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x1fU] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x1fU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x1fU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x1fU]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp430 << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0U] 
        = ((- (QData)((IData)((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1)))) 
           & ((QData)((IData)(((((((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                    [0U]) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                     >> 6U))) 
                                  | ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                      [0U]) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                       >> 0x19U))))
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                 [0U] : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                 [0U]) << 0xcU) | (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                    [0U] 
                                                    << 6U) 
                                                   | ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [0U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [0U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                        [0U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                        [0U]) 
                                                       << 4U) 
                                                      | ((((((0xcU 
                                                              == 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0U]) 
                                                             & (IData)(
                                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                        >> 6U))) 
                                                            | ((0x15U 
                                                                == 
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0U]) 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                          >> 0x19U))))
                                                            ? 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                           [0U]
                                                            : 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                           [0U]) 
                                                          << 2U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                              [0U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                              [0U]) 
                                                             << 1U) 
                                                            | ((((0xcU 
                                                                  == 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                  [0U]) 
                                                                 & (IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                            >> 6U))) 
                                                                | ((0x15U 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [0U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 0x19U))))
                                                                ? 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                               [0U]
                                                                : 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                               [0U])))))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | (IData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                              [0U] 
                                              << 1U)) 
                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [0U])) 
                                    + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                               [1U] 
                                               << 1U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                               [0U])) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 1U))) 
                                     + (IData)((0x7fffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                [1U])))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 1U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 2U))) 
                                     + (IData)((0x3fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 1U))))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 2U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 3U))) 
                                     + (IData)((0x1fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 2U))))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 3U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 4U))) 
                                     + (IData)((0xfffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 3U))))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 4U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 5U))) 
                                     + (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 4U))))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 5U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 6U))) 
                                     + (IData)((0x3ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 5U))))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 6U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 7U))) 
                                     + (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 6U))))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 7U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 8U))) 
                                     + (IData)((0xffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 7U))))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 8U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 9U))) 
                                     + (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 8U))))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 9U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xaU))) 
                                     + (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 9U))))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xaU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xbU))) 
                                     + (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xaU))))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xbU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xcU))) 
                                     + (IData)((0xfffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xbU))))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xcU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xdU))) 
                                     + (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xcU))))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xdU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xeU))) 
                                     + (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xdU))))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xeU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0xfU))) 
                                     + (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xeU))))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0xfU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x10U))) 
                                     + (IData)((0xffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0xfU))))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x10U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x11U))) 
                                     + (IData)((0x7fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x10U))))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x11U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x12U))) 
                                     + (IData)((0x3fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x11U))))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x12U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x13U))) 
                                     + (IData)((0x1fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x12U))))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x13U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x14U))) 
                                     + (IData)((0xfffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x13U))))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x14U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x15U))) 
                                     + (IData)((0x7ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x14U))))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x15U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x16U))) 
                                     + (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x15U))))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x16U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x17U))) 
                                     + (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x16U))))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x17U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x18U))) 
                                     + (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x17U))))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x18U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x19U))) 
                                     + (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x18U))))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x19U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1aU))) 
                                     + (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x19U))))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1bU))) 
                                     + (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1aU))))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1cU))) 
                                     + (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1bU))))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1dU))) 
                                     + (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1cU))))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1eU))) 
                                     + (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1dU))))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x1fU))) 
                                     + (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1eU))))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x1fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x20U))) 
                                     + (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x1fU))))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x20U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x21U))) 
                                     + (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x20U))))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x21U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x22U))) 
                                     + (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x21U))))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x22U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x23U))) 
                                     + (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x22U))))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x23U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x24U))) 
                                     + (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x23U))))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x24U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x25U))) 
                                     + (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x24U))))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x25U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x26U))) 
                                     + (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x25U))))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x26U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x27U))) 
                                     + (IData)((0x1ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x26U))))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x27U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x28U))) 
                                     + (IData)((0xffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x27U))))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x28U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x29U))) 
                                     + (IData)((0x7fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x28U))))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x29U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2aU))) 
                                     + (IData)((0x3fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x29U))))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2bU))) 
                                     + (IData)((0x1fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2aU))))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2cU))) 
                                     + (IData)((0xfffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2bU))))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2dU))) 
                                     + (IData)((0x7ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2cU))))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2eU))) 
                                     + (IData)((0x3ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2dU))))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x2fU))) 
                                     + (IData)((0x1ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2eU))))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x2fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x30U))) 
                                     + (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x2fU))))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x30U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x31U))) 
                                     + (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x30U))))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x31U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x32U))) 
                                     + (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x31U))))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x32U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x33U))) 
                                     + (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x32U))))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x33U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x34U))) 
                                     + (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x33U))))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x34U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x35U))) 
                                     + (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x34U))))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x35U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x36U))) 
                                     + (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x35U))))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x36U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x37U))) 
                                     + (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x36U))))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x37U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x38U))) 
                                     + (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x37U))))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x38U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x39U))) 
                                     + (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x38U))))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x39U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3aU))) 
                                     + (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x39U))))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x3aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3bU))) 
                                     + (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x3aU))))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x3bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3cU))) 
                                     + (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x3bU))))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x3cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3dU))) 
                                     + (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x3cU))))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x3dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3eU))) 
                                     + (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x3dU))))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S) 
           | ((QData)((IData)((1U & (((IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                  [0U] 
                                                  >> 0x3eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                 [0U] 
                                                 >> 0x3fU))) 
                                     + (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                   [1U] 
                                                   >> 0x3eU))))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | (IData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                             [1U]) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                [2U] 
                                                << 1U))) 
                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                              [2U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 1U)) 
                                      + (IData)((0x7fffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                 [2U]))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 2U)) 
                                      + (IData)((0x3fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 1U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 3U)) 
                                      + (IData)((0x1fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 2U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 4U)) 
                                      + (IData)((0xfffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 3U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 5U)) 
                                      + (IData)((0x7ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 4U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 6U)) 
                                      + (IData)((0x3ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 5U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 7U)) 
                                      + (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 6U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 8U)) 
                                      + (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 7U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 9U)) 
                                      + (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 8U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xaU)) 
                                      + (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 9U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xbU)) 
                                      + (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xaU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xcU)) 
                                      + (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xbU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xdU)) 
                                      + (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xcU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xeU)) 
                                      + (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xdU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0xfU)) 
                                      + (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xeU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x10U)) 
                                      + (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0xfU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x11U)) 
                                      + (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x10U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x12U)) 
                                      + (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x11U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x13U)) 
                                      + (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x12U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x14U)) 
                                      + (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x13U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x15U)) 
                                      + (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x14U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x16U)) 
                                      + (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x15U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x17U)) 
                                      + (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x16U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x18U)) 
                                      + (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x17U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x19U)) 
                                      + (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x18U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1aU)) 
                                      + (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x19U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1bU)) 
                                      + (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1cU)) 
                                      + (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1dU)) 
                                      + (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1eU)) 
                                      + (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x1fU)) 
                                      + (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x20U)) 
                                      + (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x1fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x21U)) 
                                      + (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x20U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x22U)) 
                                      + (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x21U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x23U)) 
                                      + (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x22U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x24U)) 
                                      + (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x23U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x25U)) 
                                      + (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x24U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x26U)) 
                                      + (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x25U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x27U)) 
                                      + (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x26U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x28U)) 
                                      + (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x27U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x29U)) 
                                      + (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x28U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2aU)) 
                                      + (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x29U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2bU)) 
                                      + (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2cU)) 
                                      + (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2dU)) 
                                      + (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2eU)) 
                                      + (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x2fU)) 
                                      + (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x30U)) 
                                      + (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x2fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x31U)) 
                                      + (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x30U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x32U)) 
                                      + (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x31U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x33U)) 
                                      + (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x32U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x34U)) 
                                      + (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x33U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x35U)) 
                                      + (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x34U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x36U)) 
                                      + (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x35U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x37U)) 
                                      + (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x36U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x38U)) 
                                      + (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x37U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x39U)) 
                                      + (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x38U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3aU)) 
                                      + (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x39U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3bU)) 
                                      + (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x3aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3cU)) 
                                      + (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x3bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3dU)) 
                                      + (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x3cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3eU)) 
                                      + (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x3dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                               [1U] 
                                               >> 0x3fU)) 
                                      + (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                    [2U] 
                                                    >> 0x3eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                [2U] 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                     [0U] 
                                                     << 1U))) 
                                      + (1U & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [0U]))) 
                                     + (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                      [1U] 
                                                      << 1U)))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                      [0U]))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 1U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                       [1U])))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 1U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 2U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 1U))))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 2U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 3U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 2U))))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 3U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 4U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 3U))))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 4U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 5U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 4U))))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 5U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 6U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 5U))))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 6U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 7U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 6U))))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 7U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 8U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 7U))))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 8U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 9U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 8U))))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 9U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xaU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 9U))))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xaU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xbU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xaU))))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xbU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xcU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xbU))))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xcU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xdU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xcU))))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xdU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xeU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xdU))))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xeU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0xfU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xeU))))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0xfU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x10U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0xfU))))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x10U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x11U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x10U))))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x11U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x12U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x11U))))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x12U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x13U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x12U))))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x13U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x14U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x13U))))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x14U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x15U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x14U))))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x15U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x16U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x15U))))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x16U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x17U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x16U))))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x17U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x18U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x17U))))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x18U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x19U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x18U))))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x19U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x19U))))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1aU))))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1bU))))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1cU))))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1dU))))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x1fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1eU))))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x1fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x20U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x1fU))))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x20U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x21U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x20U))))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x21U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x22U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x21U))))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x22U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x23U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x22U))))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x23U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x24U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x23U))))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x24U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x25U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x24U))))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x25U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x26U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x25U))))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x26U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x27U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x26U))))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x27U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x28U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x27U))))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x28U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x29U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x28U))))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x29U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x29U))))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2aU))))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2bU))))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2cU))))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2dU))))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x2fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2eU))))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x2fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x30U)))) 
                                      + (1U & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x2fU))))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x30U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x31U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x30U))))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x31U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x32U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x31U))))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x32U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x33U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x32U))))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x33U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x34U)))) 
                                      + (1U & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x33U))))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x34U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x35U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x34U))))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x35U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x36U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x35U))))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x36U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x37U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x36U))))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x37U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x38U)))) 
                                      + (1U & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x37U))))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x38U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x39U)))) 
                                      + (1U & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x38U))))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x39U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x39U))))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x3aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x3aU))))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x3bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3cU)))) 
                                      + (1U & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x3bU))))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (7ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x3cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3dU)))) 
                                      + (1U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x3cU))))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (3ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x3dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3eU)))) 
                                      + (1U & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x3dU))))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (1ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [0U] 
                                                         >> 0x3eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [0U] 
                                                        >> 0x3fU)))) 
                                      + (1U & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                          [1U] 
                                                          >> 0x3eU))))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                    [1U])) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                       [2U] 
                                                       << 1U)))) 
                                     + (1U & (IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                     [2U]))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 1U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                        [2U])))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 1U)))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 2U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 1U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 2U)))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 3U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 2U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 3U)))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 4U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 3U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 4U)))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 5U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 4U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 5U)))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 6U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 5U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 6U)))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 7U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 6U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 7U)))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 8U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 7U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 8U)))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 9U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 8U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 9U)))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xaU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 9U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xaU)))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xbU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xaU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xbU)))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xcU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xbU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xcU)))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xdU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xcU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xdU)))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xeU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xdU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xeU)))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0xfU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xeU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0xfU)))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x10U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0xfU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x10U)))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x11U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x10U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x11U)))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x12U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x11U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x12U)))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x13U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x12U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x13U)))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x14U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x13U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x14U)))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x15U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x14U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x15U)))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x16U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x15U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x16U)))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x17U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x16U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x17U)))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x18U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x17U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x18U)))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x19U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x18U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x19U)))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x19U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1aU)))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1bU)))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1cU)))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1dU)))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1eU)))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x1fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x1fU)))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x20U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x1fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x20U)))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x21U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x20U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x21U)))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x22U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x21U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x22U)))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x23U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x22U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x23U)))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x24U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x23U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x24U)))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x25U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x24U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x25U)))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x26U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x25U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x26U)))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x27U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x26U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x27U)))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x28U))) 
                                       + (1U & (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x27U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x28U)))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x29U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x28U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x29U)))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x29U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2aU)))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2bU)))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2cU)))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2dU)))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2eU)))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x2fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x2fU)))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x30U))) 
                                       + (1U & (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x2fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x30U)))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x31U))) 
                                       + (1U & (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x30U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x31U)))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x32U))) 
                                       + (1U & (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x31U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x32U)))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x33U))) 
                                       + (1U & (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x32U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x33U)))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x34U))) 
                                       + (1U & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x33U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x34U)))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x35U))) 
                                       + (1U & (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x34U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x35U)))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x36U))) 
                                       + (1U & (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x35U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x36U)))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x37U))) 
                                       + (1U & (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x36U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x37U)))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x38U))) 
                                       + (1U & (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x37U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x38U)))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x39U))) 
                                       + (1U & (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x38U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x39U)))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3aU))) 
                                       + (1U & (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x39U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3aU)))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3bU))) 
                                       + (1U & (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x3aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3bU)))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3cU))) 
                                       + (1U & (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x3bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3cU)))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3dU))) 
                                       + (1U & (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x3cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3dU)))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3eU))) 
                                       + (1U & (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x3dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3eU)))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [1U] 
                                                      >> 0x3fU))) 
                                       + (1U & (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                           [2U] 
                                                           >> 0x3eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                       [2U] 
                                                       >> 0x3fU)))) 
                                     >> 1U)))) << 0x3fU));
    __Vtemp431 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 1U))))) 
                          & (1ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [1U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [1U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [1U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [1U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [1U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [1U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [1U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [1U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [1U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [1U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [1U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [1U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [1U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [1U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [1U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [1U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [1U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [1U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [1U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [1U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [1U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[1U] 
        = __Vtemp431;
    __Vtemp432 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [1U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 2U))))) 
                          & (2ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [2U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [2U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [2U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [2U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [2U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [2U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [2U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [2U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [2U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [2U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [2U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [2U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [2U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [2U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [2U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [2U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [2U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [2U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [2U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [2U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [2U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[2U] 
        = __Vtemp432;
    __Vtemp433 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [2U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 3U))))) 
                          & (3ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [3U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [3U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [3U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [3U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [3U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [3U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [3U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [3U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [3U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [3U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [3U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [3U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [3U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [3U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [3U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [3U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [3U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [3U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [3U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [3U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [3U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[3U] 
        = __Vtemp433;
    __Vtemp434 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [3U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 4U))))) 
                          & (4ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [4U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [4U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [4U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [4U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [4U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [4U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [4U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [4U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [4U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [4U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [4U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [4U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [4U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [4U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [4U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [4U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [4U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [4U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [4U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [4U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [4U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[4U] 
        = __Vtemp434;
    __Vtemp435 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [4U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 5U))))) 
                          & (5ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [5U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [5U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [5U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [5U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [5U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [5U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [5U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [5U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [5U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [5U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [5U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [5U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [5U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [5U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [5U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [5U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [5U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [5U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [5U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [5U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [5U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[5U] 
        = __Vtemp435;
    __Vtemp436 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [5U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 6U))))) 
                          & (6ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [6U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [6U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [6U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [6U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [6U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [6U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [6U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [6U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [6U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [6U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [6U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [6U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [6U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [6U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [6U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [6U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [6U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [6U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [6U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [6U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [6U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[6U] 
        = __Vtemp436;
    __Vtemp437 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [6U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 7U))))) 
                          & (7ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [7U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [7U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [7U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [7U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [7U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [7U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [7U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [7U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [7U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [7U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [7U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [7U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [7U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [7U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [7U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [7U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [7U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [7U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [7U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [7U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [7U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[7U] 
        = __Vtemp437;
    __Vtemp438 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [7U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 8U))))) 
                          & (8ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [8U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [8U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [8U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [8U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [8U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [8U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [8U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [8U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [8U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [8U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [8U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [8U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [8U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [8U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [8U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [8U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [8U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [8U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [8U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [8U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [8U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[8U] 
        = __Vtemp438;
    __Vtemp439 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [8U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 9U))))) 
                          & (9ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [9U]) 
                                                          & (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                     >> 6U))) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [9U]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 0x19U))))
                                                         ? 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                        [9U]
                                                         : 
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                        [9U]) 
                                                       << 0xcU) 
                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                          [9U] 
                                                          << 6U) 
                                                         | ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [9U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [9U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                              [9U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                              [9U]) 
                                                             << 4U) 
                                                            | ((((((0xcU 
                                                                    == 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                    [9U]) 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                              >> 6U))) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [9U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                  ? 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                 [9U]
                                                                  : 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                 [9U]) 
                                                                << 2U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [9U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [9U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                    [9U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                    [9U]) 
                                                                   << 1U) 
                                                                  | ((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [9U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [9U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [9U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [9U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[9U] 
        = __Vtemp439;
    __Vtemp440 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [9U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                               >> 0xaU))))) 
                          & (0xaULL | ((QData)((IData)(
                                                       ((((((0xcU 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [0xaU]) 
                                                            & (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                       >> 6U))) 
                                                           | ((0x15U 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xaU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 0x19U))))
                                                           ? 
                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                          [0xaU]
                                                           : 
                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                          [0xaU]) 
                                                         << 0xcU) 
                                                        | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                            [0xaU] 
                                                            << 6U) 
                                                           | ((((((0xcU 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0xaU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 6U))) 
                                                                 | ((0x15U 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xaU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 0x19U))))
                                                                 ? 
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                [0xaU]
                                                                 : 
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                [0xaU]) 
                                                               << 4U) 
                                                              | ((((((0xcU 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [0xaU]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                    | ((0x15U 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xaU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                    ? 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                   [0xaU]
                                                                    : 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                   [0xaU]) 
                                                                  << 2U) 
                                                                 | ((((((0xcU 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0xaU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                       | ((0x15U 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xaU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                       ? 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                      [0xaU]
                                                                       : 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                      [0xaU]) 
                                                                     << 1U) 
                                                                    | ((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xaU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xaU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                       [0xaU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                       [0xaU])))))))) 
                                       << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xaU] 
        = __Vtemp440;
    __Vtemp441 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xaU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0xbU))))) 
                            & (0xbULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xbU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 6U))) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xbU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 0x19U))))
                                                             ? 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                            [0xbU]
                                                             : 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                            [0xbU]) 
                                                           << 0xcU) 
                                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0xbU] 
                                                              << 6U) 
                                                             | ((((((0xcU 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xbU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 6U))) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xbU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                  [0xbU]
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                  [0xbU]) 
                                                                 << 4U) 
                                                                | ((((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xbU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xbU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                     [0xbU]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                     [0xbU]) 
                                                                    << 2U) 
                                                                   | ((((((0xcU 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xbU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xbU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                         ? 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                        [0xbU]
                                                                         : 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                        [0xbU]) 
                                                                       << 1U) 
                                                                      | ((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xbU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xbU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xbU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xbU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xbU] 
        = __Vtemp441;
    __Vtemp442 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xbU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0xcU))))) 
                            & (0xcULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xcU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 6U))) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xcU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 0x19U))))
                                                             ? 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                            [0xcU]
                                                             : 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                            [0xcU]) 
                                                           << 0xcU) 
                                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0xcU] 
                                                              << 6U) 
                                                             | ((((((0xcU 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xcU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 6U))) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xcU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                  [0xcU]
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                  [0xcU]) 
                                                                 << 4U) 
                                                                | ((((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xcU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xcU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                     [0xcU]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                     [0xcU]) 
                                                                    << 2U) 
                                                                   | ((((((0xcU 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xcU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xcU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                         ? 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                        [0xcU]
                                                                         : 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                        [0xcU]) 
                                                                       << 1U) 
                                                                      | ((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xcU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xcU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xcU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xcU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xcU] 
        = __Vtemp442;
    __Vtemp443 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xcU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0xdU))))) 
                            & (0xdULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xdU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 6U))) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xdU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 0x19U))))
                                                             ? 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                            [0xdU]
                                                             : 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                            [0xdU]) 
                                                           << 0xcU) 
                                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0xdU] 
                                                              << 6U) 
                                                             | ((((((0xcU 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xdU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 6U))) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xdU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                  [0xdU]
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                  [0xdU]) 
                                                                 << 4U) 
                                                                | ((((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xdU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xdU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                     [0xdU]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                     [0xdU]) 
                                                                    << 2U) 
                                                                   | ((((((0xcU 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xdU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xdU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                         ? 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                        [0xdU]
                                                                         : 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                        [0xdU]) 
                                                                       << 1U) 
                                                                      | ((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xdU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xdU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xdU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xdU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xdU] 
        = __Vtemp443;
    __Vtemp444 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xdU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0xeU))))) 
                            & (0xeULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xeU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 6U))) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xeU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 0x19U))))
                                                             ? 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                            [0xeU]
                                                             : 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                            [0xeU]) 
                                                           << 0xcU) 
                                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0xeU] 
                                                              << 6U) 
                                                             | ((((((0xcU 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xeU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 6U))) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xeU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                  [0xeU]
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                  [0xeU]) 
                                                                 << 4U) 
                                                                | ((((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xeU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xeU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                     [0xeU]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                     [0xeU]) 
                                                                    << 2U) 
                                                                   | ((((((0xcU 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xeU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xeU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                         ? 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                        [0xeU]
                                                                         : 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                        [0xeU]) 
                                                                       << 1U) 
                                                                      | ((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xeU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xeU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xeU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xeU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xeU] 
        = __Vtemp444;
    __Vtemp445 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xeU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0xfU))))) 
                            & (0xfULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xfU]) 
                                                              & (IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                         >> 6U))) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xfU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 0x19U))))
                                                             ? 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                            [0xfU]
                                                             : 
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                            [0xfU]) 
                                                           << 0xcU) 
                                                          | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                              [0xfU] 
                                                              << 6U) 
                                                             | ((((((0xcU 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xfU]) 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                               >> 6U))) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xfU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                  [0xfU]
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                  [0xfU]) 
                                                                 << 4U) 
                                                                | ((((((0xcU 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xfU]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xfU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                     [0xfU]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                     [0xfU]) 
                                                                    << 2U) 
                                                                   | ((((((0xcU 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xfU]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xfU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                         ? 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                        [0xfU]
                                                                         : 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                        [0xfU]) 
                                                                       << 1U) 
                                                                      | ((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xfU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xfU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xfU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xfU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0xfU] 
        = __Vtemp445;
    __Vtemp446 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0xfU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                   >> 0x10U))))) 
                            & (0x10ULL | ((QData)((IData)(
                                                          ((((((0xcU 
                                                                == 
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x10U]) 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                          >> 6U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                  [0x10U]) 
                                                                 & (IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                            >> 0x19U))))
                                                              ? 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                             [0x10U]
                                                              : 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                             [0x10U]) 
                                                            << 0xcU) 
                                                           | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0x10U] 
                                                               << 6U) 
                                                              | ((((((0xcU 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [0x10U]) 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                    | ((0x15U 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0x10U]) 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                    ? 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                   [0x10U]
                                                                    : 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                   [0x10U]) 
                                                                  << 4U) 
                                                                 | ((((((0xcU 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x10U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                       | ((0x15U 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0x10U]) 
                                                                          & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                       ? 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                      [0x10U]
                                                                       : 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                      [0x10U]) 
                                                                     << 2U) 
                                                                    | ((((((0xcU 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x10U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x10U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                         [0x10U]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                         [0x10U]) 
                                                                        << 1U) 
                                                                       | ((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x10U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x10U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                          [0x10U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                          [0x10U])))))))) 
                                          << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x10U] 
        = __Vtemp446;
    __Vtemp447 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x10U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x11U))))) 
                             & (0x11ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x11U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x11U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x11U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x11U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x11U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x11U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x11U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x11U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x11U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x11U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x11U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x11U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x11U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x11U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x11U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x11U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x11U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x11U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x11U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x11U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x11U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x11U] 
        = __Vtemp447;
    __Vtemp448 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x11U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x12U))))) 
                             & (0x12ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x12U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x12U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x12U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x12U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x12U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x12U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x12U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x12U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x12U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x12U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x12U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x12U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x12U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x12U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x12U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x12U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x12U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x12U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x12U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x12U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x12U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x12U] 
        = __Vtemp448;
    __Vtemp449 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x12U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x13U))))) 
                             & (0x13ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x13U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x13U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x13U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x13U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x13U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x13U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x13U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x13U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x13U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x13U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x13U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x13U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x13U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x13U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x13U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x13U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x13U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x13U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x13U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x13U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x13U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x13U] 
        = __Vtemp449;
    __Vtemp450 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x13U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x14U))))) 
                             & (0x14ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x14U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x14U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x14U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x14U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x14U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x14U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x14U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x14U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x14U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x14U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x14U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x14U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x14U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x14U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x14U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x14U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x14U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x14U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x14U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x14U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x14U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x14U] 
        = __Vtemp450;
    __Vtemp451 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x14U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x15U))))) 
                             & (0x15ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x15U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x15U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x15U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x15U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x15U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x15U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x15U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x15U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x15U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x15U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x15U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x15U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x15U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x15U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x15U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x15U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x15U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x15U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x15U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x15U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x15U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x15U] 
        = __Vtemp451;
    __Vtemp452 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x15U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x16U))))) 
                             & (0x16ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x16U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x16U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x16U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x16U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x16U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x16U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x16U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x16U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x16U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x16U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x16U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x16U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x16U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x16U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x16U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x16U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x16U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x16U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x16U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x16U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x16U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x16U] 
        = __Vtemp452;
    __Vtemp453 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x16U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x17U))))) 
                             & (0x17ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x17U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x17U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x17U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x17U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x17U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x17U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x17U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x17U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x17U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x17U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x17U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x17U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x17U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x17U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x17U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x17U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x17U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x17U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x17U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x17U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x17U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x17U] 
        = __Vtemp453;
    __Vtemp454 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x17U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x18U))))) 
                             & (0x18ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x18U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x18U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x18U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x18U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x18U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x18U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x18U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x18U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x18U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x18U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x18U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x18U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x18U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x18U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x18U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x18U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x18U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x18U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x18U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x18U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x18U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x18U] 
        = __Vtemp454;
    __Vtemp455 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x18U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x19U))))) 
                             & (0x19ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x19U]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x19U]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x19U]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x19U]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x19U] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x19U]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x19U]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x19U]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x19U]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x19U]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x19U]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x19U]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x19U]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x19U]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x19U]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x19U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x19U]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x19U]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x19U]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x19U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x19U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x19U] 
        = __Vtemp455;
    __Vtemp456 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x19U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x1aU))))) 
                             & (0x1aULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1aU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1aU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1aU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1aU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1aU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1aU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1aU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1aU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1aU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1aU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1aU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1aU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1aU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1aU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1aU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1aU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1aU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1aU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1aU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1aU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1aU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1aU] 
        = __Vtemp456;
    __Vtemp457 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x1aU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x1bU))))) 
                             & (0x1bULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1bU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1bU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1bU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1bU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1bU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1bU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1bU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1bU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1bU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1bU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1bU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1bU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1bU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1bU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1bU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1bU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1bU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1bU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1bU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1bU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1bU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1bU] 
        = __Vtemp457;
    __Vtemp458 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x1bU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x1cU))))) 
                             & (0x1cULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1cU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1cU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1cU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1cU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1cU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1cU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1cU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1cU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1cU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1cU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1cU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1cU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1cU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1cU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1cU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1cU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1cU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1cU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1cU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1cU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1cU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1cU] 
        = __Vtemp458;
    __Vtemp459 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x1cU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x1dU))))) 
                             & (0x1dULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1dU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1dU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1dU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1dU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1dU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1dU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1dU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1dU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1dU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1dU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1dU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1dU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1dU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1dU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1dU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1dU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1dU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1dU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1dU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1dU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1dU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1dU] 
        = __Vtemp459;
    __Vtemp460 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x1dU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                    >> 0x1eU))))) 
                             & (0x1eULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1eU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1eU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1eU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1eU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1eU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1eU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1eU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1eU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1eU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1eU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1eU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1eU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1eU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1eU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1eU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1eU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1eU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1eU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1eU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1eU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1eU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1eU] 
        = __Vtemp460;
    __Vtemp461 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                  [0x1eU] | ((- (QData)((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
                                                 >> 0x1fU)))) 
                             & (0x1fULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1fU]) 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                           >> 6U))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1fU]) 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                             >> 0x19U))))
                                                               ? 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                              [0x1fU]
                                                               : 
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                              [0x1fU]) 
                                                             << 0xcU) 
                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x1fU] 
                                                                << 6U) 
                                                               | ((((((0xcU 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0x1fU]) 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1fU]) 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                     ? 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                    [0x1fU]
                                                                     : 
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                    [0x1fU]) 
                                                                   << 4U) 
                                                                  | ((((((0xcU 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0x1fU]) 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1fU]) 
                                                                           & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                       [0x1fU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                       [0x1fU]) 
                                                                      << 2U) 
                                                                     | ((((((0xcU 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0x1fU]) 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1fU]) 
                                                                              & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                          [0x1fU]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                          [0x1fU]) 
                                                                         << 1U) 
                                                                        | ((((0xcU 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x1fU]) 
                                                                             & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 6U))) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1fU]) 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                                                >> 0x19U))))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1fU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1fU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[0x1fU] 
        = __Vtemp461;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
        = (((QData)((IData)((((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
                              << 0x1fU) | (0x7fffffffU 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU] 
                                                      >> 6U)))))) 
            << 6U) | (QData)((IData)((0x3fU & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1
                                                      [0x1fU])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
        = ((IData)((0x800000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult
            : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))
                ? (((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)))) 
                    & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                 >> 0xdU)) << 0x1dU) 
                       | (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))) 
                   | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select) 
                                        >> 1U)))) & 
                      (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                 >> 0xaU)) << 0x1dU) 
                       | (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))
                : ((0x21U == (0x3fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                               >> 0xbU))))
                    ? (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                 >> 0x1aU)) << 0x15U) 
                       | (0x1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))
                    : (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                 >> 0x11U)) << 0xcU) 
                       | (0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS 
        = ((((1U == (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW))) 
             & (0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))) 
            & (0x2000000000ULL == (0x2000000020ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus))) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME 
        = ((((1U == (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW))) 
             & (0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))) 
            & (0x2000000020ULL == (0x2000000060ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus))) 
           & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)) 
              & ((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                >> 4U))) <= (3U & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                           >> 9U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL 
        = (((((0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)) 
              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                  >> 0xfU) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))) 
             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))) 
            & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                       >> 0x25U))) & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                 >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR 
        = ((((0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)) 
             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                    >> 0xfU)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))) 
           & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                         >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI 
        = ((((((0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)) 
               & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                      >> 0xfU)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))) 
              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select))) 
             & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                        >> 0x25U))) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                               >> 5U))) 
           & ((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                             >> 4U))) > (3U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus 
                                                       >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                    [0U])) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                       [1U] 
                                                       << 1U)))) 
                                     + (1U & (IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                     [1U]))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 1U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                        [1U])))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 1U)))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 2U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 1U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 2U)))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 3U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 2U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 3U)))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 4U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 3U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 4U)))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 5U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 4U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 5U)))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 6U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 5U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 6U)))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 7U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 6U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 7U)))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 8U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 7U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 8U)))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 9U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 8U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 9U)))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xaU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 9U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xaU)))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xbU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xaU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xbU)))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xcU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xbU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xcU)))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xdU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xcU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xdU)))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xeU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xdU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xeU)))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0xfU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xeU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0xfU)))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x10U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0xfU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x10U)))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x11U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x10U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x11U)))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x12U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x11U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x12U)))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x13U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x12U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x13U)))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x14U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x13U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x14U)))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x15U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x14U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x15U)))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x16U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x15U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x16U)))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x17U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x16U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x17U)))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x18U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x17U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x18U)))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x19U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x18U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x19U)))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x19U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1aU)))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1bU)))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1cU)))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1dU)))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1eU)))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x1fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x1fU)))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x20U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x1fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x20U)))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x21U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x20U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x21U)))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x22U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x21U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x22U)))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x23U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x22U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x23U)))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x24U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x23U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x24U)))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x25U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x24U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x25U)))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x26U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x25U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x26U)))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x27U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x26U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x27U)))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x28U))) 
                                       + (1U & (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x27U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x28U)))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x29U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x28U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x29U)))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x29U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2aU)))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2bU)))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2cU)))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2dU)))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2eU)))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x2fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x2fU)))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x30U))) 
                                       + (1U & (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x2fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x30U)))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x31U))) 
                                       + (1U & (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x30U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x31U)))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x32U))) 
                                       + (1U & (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x31U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x32U)))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x33U))) 
                                       + (1U & (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x32U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x33U)))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x34U))) 
                                       + (1U & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x33U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x34U)))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x35U))) 
                                       + (1U & (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x34U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x35U)))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x36U))) 
                                       + (1U & (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x35U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x36U)))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x37U))) 
                                       + (1U & (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x36U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x37U)))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x38U))) 
                                       + (1U & (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x37U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x38U)))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x39U))) 
                                       + (1U & (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x38U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x39U)))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3aU))) 
                                       + (1U & (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x39U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3aU)))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3bU))) 
                                       + (1U & (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x3aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3bU)))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3cU))) 
                                       + (1U & (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x3bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3cU)))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3dU))) 
                                       + (1U & (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x3cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3dU)))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3eU))) 
                                       + (1U & (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x3dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3eU)))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                      [0U] 
                                                      >> 0x3fU))) 
                                       + (1U & (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                           [1U] 
                                                           >> 0x3eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                       [1U] 
                                                       >> 0x3fU)))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                     [3U] 
                                                     << 1U))) 
                                      + (1U & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                      [3U]))) 
                                     + (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                      [0U] 
                                                      << 1U)))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                      [3U]))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 1U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                       [0U])))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 1U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 2U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 1U))))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 2U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 3U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 2U))))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 3U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 4U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 3U))))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 4U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 5U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 4U))))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 5U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 6U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 5U))))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 6U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 7U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 6U))))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 7U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 8U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 7U))))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 8U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 9U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 8U))))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 9U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xaU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 9U))))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xaU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xbU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xaU))))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xbU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xcU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xbU))))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xcU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xdU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xcU))))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xdU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xeU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xdU))))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xeU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0xfU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xeU))))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0xfU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x10U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0xfU))))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x10U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x11U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x10U))))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x11U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x12U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x11U))))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x12U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x13U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x12U))))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x13U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x14U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x13U))))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x14U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x15U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x14U))))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x15U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x16U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x15U))))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x16U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x17U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x16U))))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x17U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x18U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x17U))))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x18U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x19U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x18U))))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x19U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x19U))))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1aU))))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1bU))))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1cU))))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1dU))))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x1fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1eU))))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x1fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x20U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x1fU))))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x20U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x21U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x20U))))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x21U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x22U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x21U))))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x22U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x23U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x22U))))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x23U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x24U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x23U))))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x24U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x25U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x24U))))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x25U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x26U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x25U))))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x26U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x27U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x26U))))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x27U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x28U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x27U))))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x28U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x29U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x28U))))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x29U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x29U))))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2aU))))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2bU))))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2cU))))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2dU))))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x2fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2eU))))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x2fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x30U)))) 
                                      + (1U & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x2fU))))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x30U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x31U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x30U))))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x31U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x32U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x31U))))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x32U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x33U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x32U))))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x33U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x34U)))) 
                                      + (1U & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x33U))))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x34U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x35U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x34U))))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x35U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x36U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x35U))))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x36U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x37U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x36U))))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x37U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x38U)))) 
                                      + (1U & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x37U))))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x38U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x39U)))) 
                                      + (1U & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x38U))))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x39U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x39U))))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x3aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x3aU))))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x3bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3cU)))) 
                                      + (1U & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x3bU))))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (7ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x3cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3dU)))) 
                                      + (1U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x3cU))))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (3ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x3dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3eU)))) 
                                      + (1U & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x3dU))))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (1ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC
                                                         [3U] 
                                                         >> 0x3eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig
                                                        [3U] 
                                                        >> 0x3fU)))) 
                                      + (1U & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                          [0U] 
                                                          >> 0x3eU))))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | (IData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                             [0U]) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                [1U] 
                                                << 1U))) 
                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                              [1U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 1U)) 
                                      + (IData)((0x7fffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                 [1U]))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 2U)) 
                                      + (IData)((0x3fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 1U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 3U)) 
                                      + (IData)((0x1fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 2U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 4U)) 
                                      + (IData)((0xfffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 3U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 5U)) 
                                      + (IData)((0x7ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 4U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 6U)) 
                                      + (IData)((0x3ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 5U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 7U)) 
                                      + (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 6U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 8U)) 
                                      + (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 7U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 9U)) 
                                      + (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 8U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xaU)) 
                                      + (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 9U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xbU)) 
                                      + (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xaU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xcU)) 
                                      + (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xbU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xdU)) 
                                      + (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xcU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xeU)) 
                                      + (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xdU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0xfU)) 
                                      + (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xeU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x10U)) 
                                      + (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0xfU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x11U)) 
                                      + (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x10U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x12U)) 
                                      + (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x11U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x13U)) 
                                      + (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x12U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x14U)) 
                                      + (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x13U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x15U)) 
                                      + (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x14U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x16U)) 
                                      + (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x15U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x17U)) 
                                      + (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x16U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x18U)) 
                                      + (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x17U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x19U)) 
                                      + (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x18U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1aU)) 
                                      + (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x19U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1bU)) 
                                      + (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1cU)) 
                                      + (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1dU)) 
                                      + (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1eU)) 
                                      + (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x1fU)) 
                                      + (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x20U)) 
                                      + (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x1fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x21U)) 
                                      + (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x20U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x22U)) 
                                      + (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x21U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x23U)) 
                                      + (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x22U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x24U)) 
                                      + (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x23U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x25U)) 
                                      + (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x24U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x26U)) 
                                      + (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x25U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x27U)) 
                                      + (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x26U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x28U)) 
                                      + (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x27U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x29U)) 
                                      + (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x28U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2aU)) 
                                      + (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x29U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2bU)) 
                                      + (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2cU)) 
                                      + (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2dU)) 
                                      + (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2eU)) 
                                      + (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x2fU)) 
                                      + (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x30U)) 
                                      + (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x2fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x31U)) 
                                      + (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x30U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x32U)) 
                                      + (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x31U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x33U)) 
                                      + (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x32U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x34U)) 
                                      + (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x33U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x35U)) 
                                      + (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x34U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x36U)) 
                                      + (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x35U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x37U)) 
                                      + (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x36U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x38U)) 
                                      + (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x37U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x39U)) 
                                      + (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x38U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x3aU)) 
                                      + (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x39U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                               [0U] 
                                               >> 0x3bU)) 
                                      + (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC
                                                    [1U] 
                                                    >> 0x3aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig
                                                [1U] 
                                                >> 0x3bU)))))) 
              << 0x3bU));
}
