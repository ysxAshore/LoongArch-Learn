// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

void Vsimu_top___024root___settle__TOP__10(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__10\n"); );
    // Variables
    QData/*63:0*/ __Vtemp227;
    QData/*63:0*/ __Vtemp228;
    QData/*63:0*/ __Vtemp229;
    QData/*63:0*/ __Vtemp230;
    QData/*63:0*/ __Vtemp231;
    QData/*63:0*/ __Vtemp232;
    QData/*63:0*/ __Vtemp233;
    QData/*63:0*/ __Vtemp234;
    QData/*63:0*/ __Vtemp235;
    QData/*63:0*/ __Vtemp236;
    QData/*63:0*/ __Vtemp237;
    QData/*63:0*/ __Vtemp238;
    QData/*63:0*/ __Vtemp239;
    QData/*63:0*/ __Vtemp240;
    QData/*63:0*/ __Vtemp241;
    QData/*63:0*/ __Vtemp242;
    QData/*63:0*/ __Vtemp243;
    QData/*63:0*/ __Vtemp244;
    QData/*63:0*/ __Vtemp245;
    QData/*63:0*/ __Vtemp246;
    QData/*63:0*/ __Vtemp247;
    QData/*63:0*/ __Vtemp248;
    QData/*63:0*/ __Vtemp249;
    QData/*63:0*/ __Vtemp250;
    // Body
    __Vtemp227 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [7U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                               >> 8U))))) 
                          & (8ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [8U]) 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [8U]) 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                               >> 0x13U)))
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
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [8U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [8U]) 
                                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                        >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [8U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [8U]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [8U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [8U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[8U] 
        = __Vtemp227;
    __Vtemp228 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [8U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                               >> 9U))))) 
                          & (9ULL | ((QData)((IData)(
                                                     ((((((0xcU 
                                                           == 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                           [9U]) 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                         | ((0x15U 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [9U]) 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                               >> 0x13U)))
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
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [9U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                  | ((0x15U 
                                                                      == 
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                      [9U]) 
                                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                        >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [9U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [9U]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                     [9U]
                                                                      : 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                     [9U])))))))) 
                                     << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[9U] 
        = __Vtemp228;
    __Vtemp229 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [9U] | ((- (QData)((IData)((1U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                               >> 0xaU))))) 
                          & (0xaULL | ((QData)((IData)(
                                                       ((((((0xcU 
                                                             == 
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                             [0xaU]) 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                           | ((0x15U 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xaU]) 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                 >> 0x13U)))
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
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                 | ((0x15U 
                                                                     == 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                     [0xaU]) 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                       >> 0x13U)))
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
                                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                    | ((0x15U 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0xaU]) 
                                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                          >> 0x13U)))
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
                                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                       | ((0x15U 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0xaU]) 
                                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                             >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0xaU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
                                                                        ? 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                       [0xaU]
                                                                        : 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                       [0xaU])))))))) 
                                       << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xaU] 
        = __Vtemp229;
    __Vtemp230 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xaU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0xbU))))) 
                            & (0xbULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xbU]) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xbU]) 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                   >> 0x13U)))
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
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xbU]) 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                         >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xbU]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
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
                                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xbU]) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                               >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xbU]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xbU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xbU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xbU] 
        = __Vtemp230;
    __Vtemp231 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xbU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0xcU))))) 
                            & (0xcULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xcU]) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xcU]) 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                   >> 0x13U)))
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
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xcU]) 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                         >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xcU]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
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
                                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xcU]) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                               >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xcU]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xcU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xcU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xcU] 
        = __Vtemp231;
    __Vtemp232 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xcU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0xdU))))) 
                            & (0xdULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xdU]) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xdU]) 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                   >> 0x13U)))
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
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xdU]) 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                         >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xdU]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
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
                                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xdU]) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                               >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xdU]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xdU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xdU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xdU] 
        = __Vtemp232;
    __Vtemp233 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xdU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0xeU))))) 
                            & (0xeULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xeU]) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xeU]) 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                   >> 0x13U)))
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
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xeU]) 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                         >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xeU]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
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
                                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xeU]) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                               >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xeU]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xeU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xeU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xeU] 
        = __Vtemp233;
    __Vtemp234 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xeU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0xfU))))) 
                            & (0xfULL | ((QData)((IData)(
                                                         ((((((0xcU 
                                                               == 
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                               [0xfU]) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                             | ((0x15U 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0xfU]) 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                   >> 0x13U)))
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
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                   | ((0x15U 
                                                                       == 
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                       [0xfU]) 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                         >> 0x13U)))
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
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                      | ((0x15U 
                                                                          == 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                          [0xfU]) 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                            >> 0x13U)))
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
                                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                         | ((0x15U 
                                                                             == 
                                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                             [0xfU]) 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                               >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0xfU]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                          ? 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                         [0xfU]
                                                                          : 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                         [0xfU])))))))) 
                                         << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0xfU] 
        = __Vtemp234;
    __Vtemp235 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0xfU] | ((- (QData)((IData)((1U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                   >> 0x10U))))) 
                            & (0x10ULL | ((QData)((IData)(
                                                          ((((((0xcU 
                                                                == 
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                [0x10U]) 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                              | ((0x15U 
                                                                  == 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                  [0x10U]) 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                    >> 0x13U)))
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
                                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                    | ((0x15U 
                                                                        == 
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                        [0x10U]) 
                                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                          >> 0x13U)))
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
                                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                       | ((0x15U 
                                                                           == 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                           [0x10U]) 
                                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                             >> 0x13U)))
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
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                          | ((0x15U 
                                                                              == 
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                              [0x10U]) 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x10U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                           ? 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                          [0x10U]
                                                                           : 
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                          [0x10U])))))))) 
                                          << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x10U] 
        = __Vtemp235;
    __Vtemp236 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x10U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x11U))))) 
                             & (0x11ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x11U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x11U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x11U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x11U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x11U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x11U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x11U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x11U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x11U] 
        = __Vtemp236;
    __Vtemp237 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x11U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x12U))))) 
                             & (0x12ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x12U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x12U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x12U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x12U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x12U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x12U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x12U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x12U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x12U] 
        = __Vtemp237;
    __Vtemp238 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x12U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x13U))))) 
                             & (0x13ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x13U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x13U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x13U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x13U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x13U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x13U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x13U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x13U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x13U] 
        = __Vtemp238;
    __Vtemp239 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x13U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x14U))))) 
                             & (0x14ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x14U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x14U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x14U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x14U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x14U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x14U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x14U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x14U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x14U] 
        = __Vtemp239;
    __Vtemp240 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x14U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x15U))))) 
                             & (0x15ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x15U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x15U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x15U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x15U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x15U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x15U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x15U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x15U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x15U] 
        = __Vtemp240;
    __Vtemp241 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x15U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x16U))))) 
                             & (0x16ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x16U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x16U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x16U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x16U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x16U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x16U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x16U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x16U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x16U] 
        = __Vtemp241;
    __Vtemp242 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x16U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x17U))))) 
                             & (0x17ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x17U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x17U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x17U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x17U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x17U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x17U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x17U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x17U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x17U] 
        = __Vtemp242;
    __Vtemp243 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x17U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x18U))))) 
                             & (0x18ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x18U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x18U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x18U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x18U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x18U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x18U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x18U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x18U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x18U] 
        = __Vtemp243;
    __Vtemp244 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x18U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x19U))))) 
                             & (0x19ULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x19U]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x19U]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x19U]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x19U]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x19U]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x19U]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x19U]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x19U])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x19U] 
        = __Vtemp244;
    __Vtemp245 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x19U] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x1aU))))) 
                             & (0x1aULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1aU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1aU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1aU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1aU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1aU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1aU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1aU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1aU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1aU] 
        = __Vtemp245;
    __Vtemp246 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x1aU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x1bU))))) 
                             & (0x1bULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1bU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1bU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1bU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1bU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1bU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1bU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1bU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1bU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1bU] 
        = __Vtemp246;
    __Vtemp247 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x1bU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x1cU))))) 
                             & (0x1cULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1cU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1cU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1cU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1cU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1cU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1cU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1cU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1cU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1cU] 
        = __Vtemp247;
    __Vtemp248 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x1cU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x1dU))))) 
                             & (0x1dULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1dU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1dU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1dU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1dU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1dU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1dU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1dU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1dU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1dU] 
        = __Vtemp248;
    __Vtemp249 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x1dU] | ((- (QData)((IData)((1U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                    >> 0x1eU))))) 
                             & (0x1eULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1eU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1eU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1eU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1eU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1eU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1eU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1eU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1eU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1eU] 
        = __Vtemp249;
    __Vtemp250 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                  [0x1eU] | ((- (QData)((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 
                                                 >> 0x1fU)))) 
                             & (0x1fULL | ((QData)((IData)(
                                                           ((((((0xcU 
                                                                 == 
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                 [0x1fU]) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                               | ((0x15U 
                                                                   == 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                   [0x1fU]) 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                     >> 0x13U)))
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
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                     | ((0x15U 
                                                                         == 
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                         [0x1fU]) 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                           >> 0x13U)))
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
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                        | ((0x15U 
                                                                            == 
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                            [0x1fU]) 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                              >> 0x13U)))
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
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                           | ((0x15U 
                                                                               == 
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                               [0x1fU]) 
                                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
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
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus) 
                                                                            | ((0x15U 
                                                                                == 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                                                                                [0x1fU]) 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus 
                                                                                >> 0x13U)))
                                                                            ? 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                           [0x1fU]
                                                                            : 
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                           [0x1fU])))))))) 
                                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[0x1fU] 
        = __Vtemp250;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
        = (((QData)((IData)((((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0) 
                              << 0x1fU) | (0x7fffffffU 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU] 
                                                      >> 6U)))))) 
            << 6U) | (QData)((IData)((0x3fU & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0
                                                      [0x1fU])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR 
        = ((((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                 >> 0x16U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                               >> 0x15U)) & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))) 
           & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                         >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF 
        = (((((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                  >> 0x16U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                >> 0x15U)) & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))) 
            & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                       >> 0x25U))) & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                                 >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI 
        = ((((((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                   >> 0x16U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                 >> 0x15U)) & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))) 
             & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                        >> 0x25U))) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                               >> 5U))) 
           & ((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                     >> 3U)) > (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                              >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
        = ((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                   >> 0x16U) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                   >> 0x15U)))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc
            : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select))
                ? (((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select)))) 
                    & ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                       << 0x11U)) | 
                       (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))) 
                   | ((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select) 
                                        >> 1U)))) & 
                      ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
                                       << 0x14U)) | 
                       (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))))
                : ((0x21U == (0x3fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                               >> 0xbU))))
                    ? (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                 >> 0x1aU)) << 0x15U) 
                       | (0x1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))
                    : (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus 
                                 >> 0x11U)) << 0xcU) 
                       | (0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req 
        = (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin) 
                & (0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR))) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI))) 
            & (~ (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid)
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus) 
                          >> 0x21U)))) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3)
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index)
                     : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                            >> 4U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra 
        = (0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en) 
                        & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state))))
                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)
                         ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr 
                            >> 4U) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr 
                                      >> 4U)) : (((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit))
                                                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index)
                                                  : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok)) 
              | (0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc))) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIf_to_if_valid 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go));
}

void Vsimu_top___024root___initial__TOP__1(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;

void Vsimu_top___024root___eval_initial(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_initial\n"); );
    // Body
    Vsimu_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
}

void Vsimu_top___024root___settle__TOP__2(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__3(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__4(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__5(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__6(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__7(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__8(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;
void Vsimu_top___024root___settle__TOP__9(Vsimu_top___024root* vlSelf) VL_ATTR_COLD;

void Vsimu_top___024root___eval_settle(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_settle\n"); );
    // Body
    Vsimu_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsimu_top___024root___settle__TOP__3(vlSelf);
    Vsimu_top___024root___settle__TOP__4(vlSelf);
    Vsimu_top___024root___settle__TOP__5(vlSelf);
    Vsimu_top___024root___settle__TOP__6(vlSelf);
    Vsimu_top___024root___settle__TOP__7(vlSelf);
    Vsimu_top___024root___settle__TOP__8(vlSelf);
    Vsimu_top___024root___settle__TOP__9(vlSelf);
    Vsimu_top___024root___settle__TOP__10(vlSelf);
}

void Vsimu_top___024root___final(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___final\n"); );
}

void Vsimu_top___024root___ctor_var_reset(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->enable_delay = VL_RAND_RESET_I(1);
    vlSelf->random_seed = VL_RAND_RESET_I(23);
    vlSelf->ram_ren = VL_RAND_RESET_I(1);
    vlSelf->ram_raddr = VL_RAND_RESET_I(32);
    vlSelf->ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->ram_wen = VL_RAND_RESET_I(4);
    vlSelf->ram_waddr = VL_RAND_RESET_I(32);
    vlSelf->ram_wdata = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->debug0_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug0_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->num_data = VL_RAND_RESET_I(32);
    vlSelf->open_trace = VL_RAND_RESET_I(1);
    vlSelf->num_monitor = VL_RAND_RESET_I(1);
    vlSelf->confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->write_uart_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->uart_ctr_bus);
    vlSelf->uart_rx = VL_RAND_RESET_I(1);
    vlSelf->uart_tx = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->led_rg0 = VL_RAND_RESET_I(2);
    vlSelf->led_rg1 = VL_RAND_RESET_I(2);
    vlSelf->num_csn = VL_RAND_RESET_I(8);
    vlSelf->num_a_g = VL_RAND_RESET_I(7);
    vlSelf->__SYM__switch = VL_RAND_RESET_I(8);
    vlSelf->btn_key_col = VL_RAND_RESET_I(4);
    vlSelf->btn_key_row = VL_RAND_RESET_I(4);
    vlSelf->btn_step = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_bready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_rready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__UART_RI = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_exe_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_to_if_bus = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(300, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_mem_bus);
    VL_RAND_RESET_W(102, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus);
    VL_RAND_RESET_W(71, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_to_id_bus);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_id_bus = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(72, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus);
    VL_RAND_RESET_W(254, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus);
    VL_RAND_RESET_W(222, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus);
    VL_RAND_RESET_W(129, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_if_bus = VL_RAND_RESET_Q(37);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus = VL_RAND_RESET_Q(52);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(89, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus);
    VL_RAND_RESET_W(100, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_if_bus = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_tlb_bus = VL_RAND_RESET_I(30);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_exe_bus = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__u_id_stage__rf_to_diff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csrRData = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_type = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_allowin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIf_to_if_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__preIF_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__tlb_excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__refetch = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_reflush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__TLBR = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PPI = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__PIF = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r = VL_RAND_RESET_Q(37);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r = VL_RAND_RESET_Q(34);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__id_to_if_bus_r_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__idle_lock = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__dmw_select = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__i26 = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_nor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_orn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__alu_op = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rj = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__need_rkd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrB = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataA = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regDataB = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT____Vcellout__u_regfile__rf_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataA = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__forwardDataB = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__load_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_eq_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__rj_lt_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ine = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__INE_EXCP = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_excp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(254, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_mulResult = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT____Vcellinp__u_mul__resetn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__div_finish_ready_i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_regW = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_finalResult = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__slt_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__or_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_alu__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__Carry = VL_RAND_RESET_I(17);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__BoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__las__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellinp__las__y = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__p = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__COut = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SOut = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__Carry = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiSig[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__thiC[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi1__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__thi2__Carry = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forSig[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__forC[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for1__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__S = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__for2__Carry = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifSig = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fifC = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__16__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__18__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__20__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__neg2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__fir__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__las__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__div_start_handshaked = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_d = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__fsm_q = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_lzc_q = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_lzc_q = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__lzc_diff_fast = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_r_shift_num = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_d = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_num_q = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_shifted_rem = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_data_in = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_num = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_extend_msb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__post_r_shift_res_s4 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_d = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_abs_q = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_d = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__divisor_abs_q = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__no_iter_needed_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__dividend_too_small_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_sign_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sign_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__need_corr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__pre_cmp_res = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_1_q = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_neg_0_q = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_1_q = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__qds_para_pos_2_q = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__special_divisor_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_normal_init_value = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_d = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_sum_q = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_q = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__rem_carry_iter_end = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__csa_3_2_x3 = VL_RAND_RESET_Q(36);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__prev_quot_digit_q = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__quot_digit_iter_end = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_q = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_d = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__iter_quot_minus_1_q = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__inverter_res[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_neg_0_trunc_3_4 = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__para_m_pos_1_trunc_3_4 = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4 = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5 = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_qds__DOT__u_sign_coder__DOT__sign = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_index_diff = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_tag_diff = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__data_offset_diff = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(300, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__refetch = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(102, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_wb_stage__DOT__wb_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_euen = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ecfg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[__Vi0] = VL_RAND_RESET_Q(37);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wr_req = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_D);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_D);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__wirteBuffer_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__write_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_op = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_data);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__loadForward = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__hitData = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__replace_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__bank_dina = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_cacop_hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_D);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_D);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv_addra = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_ena = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_addr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__wirteBuffer_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__write_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__idle2lookup_able = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_op = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_dcacop_mode = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_data);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lookup2lookup_able = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__loadForward = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__hitData = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_way = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__replace_v = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_replaceWay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__bank_dina = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_requst_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__read_respond_state = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__rd_requst_can_receive = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__data_real_rd_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__inst_real_rd_size = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_num = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_buffer_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out = VL_RAND_RESET_I(11);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = VL_RAND_RESET_I(25);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = VL_RAND_RESET_Q(48);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__mem_to_if_bus_r_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__bd_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__br_cancel_r_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 = VL_RAND_RESET_I(19);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 = VL_RAND_RESET_I(20);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 = VL_RAND_RESET_I(20);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v1 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v2 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v3 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v4 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v5 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v6 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v7 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v8 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v9 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v10 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v11 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v12 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v13 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v14 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v15 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v16 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v17 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v18 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v19 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v20 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v21 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v22 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v23 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v24 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v25 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v26 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v27 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v28 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v29 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v30 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v31 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v32 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v33 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v34 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v35 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v36 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v37 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v38 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v39 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v40 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v41 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v42 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v43 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v44 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v45 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v46 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v47 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v48 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v49 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v49 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v50 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v51 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v52 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v53 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v54 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v55 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v56 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v56 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v57 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v58 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v59 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v60 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v61 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v62 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v63 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v63 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v64 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v65 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v66 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v67 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v68 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v69 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v70 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v71 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v72 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v73 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v74 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v75 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v76 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v77 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v78 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v79 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v80 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v81 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v82 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v83 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v84 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v85 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v86 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v87 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v88 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v89 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v90 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v91 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v92 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v93 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v94 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v95 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v96 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v97 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v98 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v99 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v100 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v101 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v102 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v103 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v104 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v105 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v106 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v107 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v108 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v109 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v110 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v111 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v112 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v113 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v114 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v115 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v116 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v117 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v118 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v119 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v120 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v121 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v122 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v123 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v124 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v125 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v126 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v127 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v128 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v129 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v130 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v131 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v132 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v133 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v133 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v134 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v135 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v136 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v137 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v138 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v139 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v140 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v140 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v141 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v142 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v143 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v144 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v145 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v146 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v147 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v147 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v148 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v149 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v150 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v151 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v152 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v153 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v154 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v154 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v155 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v156 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v157 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v158 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v159 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v160 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v161 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v161 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v162 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v163 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v164 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v165 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v166 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v167 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v168 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v168 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v169 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v170 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v171 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v172 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v173 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v174 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v175 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v175 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v176 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v177 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v178 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v179 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v180 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v181 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v182 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v182 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v183 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v184 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v185 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v186 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v187 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v188 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v189 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v189 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v190 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v191 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v192 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v193 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v194 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v195 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v196 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v196 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v197 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v198 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v199 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v200 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v201 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v202 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v203 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v203 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v204 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v205 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v206 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v207 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v208 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v209 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v210 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v210 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v211 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v212 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v213 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v214 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v215 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v216 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v217 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v217 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v218 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v219 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v220 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v221 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v222 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e__v223 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus);
    vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_dividend__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_int_div_radix_4_v1__DOT__u_lzc_divisor__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item0 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp0[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__res_temp1[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
