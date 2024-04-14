// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

void Vsimu_top___024root___settle__TOP__8(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__8\n"); );
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                     [0U] 
                                                     << 1U))) 
                                      + (1U & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [1U]))) 
                                     + (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                      [1U] 
                                                      << 1U)))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | (IData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                              [0U] 
                                              << 1U)) 
                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [1U])) 
                                    + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                               [1U] 
                                               << 1U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                      [0U]))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 1U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                       [1U])))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                               [0U])) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 1U))) 
                                     + (IData)((0x7fffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                [1U])))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 1U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 2U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 1U))))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 1U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 2U))) 
                                     + (IData)((0x3fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 1U))))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 2U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 3U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 2U))))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 2U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 3U))) 
                                     + (IData)((0x1fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 2U))))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 3U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 4U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 3U))))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 3U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 4U))) 
                                     + (IData)((0xfffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 3U))))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 4U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 5U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 4U))))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 4U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 5U))) 
                                     + (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 4U))))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 5U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 6U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 5U))))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 5U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 6U))) 
                                     + (IData)((0x3ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 5U))))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 6U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 7U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 6U))))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 6U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 7U))) 
                                     + (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 6U))))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 7U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 8U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 7U))))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 7U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 8U))) 
                                     + (IData)((0xffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 7U))))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 8U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 9U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 8U))))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 8U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 9U))) 
                                     + (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 8U))))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 9U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xaU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 9U))))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 9U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xaU))) 
                                     + (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 9U))))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xaU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xbU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xaU))))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xaU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xbU))) 
                                     + (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xaU))))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xbU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xcU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xbU))))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xbU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xcU))) 
                                     + (IData)((0xfffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xbU))))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xcU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xdU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xcU))))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xcU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xdU))) 
                                     + (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xcU))))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xdU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xeU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xdU))))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xdU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xeU))) 
                                     + (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xdU))))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xeU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0xfU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xeU))))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xeU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0xfU))) 
                                     + (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xeU))))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0xfU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x10U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0xfU))))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0xfU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x10U))) 
                                     + (IData)((0xffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0xfU))))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x10U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x11U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x10U))))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x10U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x11U))) 
                                     + (IData)((0x7fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x10U))))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x11U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x12U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x11U))))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x11U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x12U))) 
                                     + (IData)((0x3fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x11U))))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x12U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x13U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x12U))))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x12U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x13U))) 
                                     + (IData)((0x1fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x12U))))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x13U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x14U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x13U))))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x13U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x14U))) 
                                     + (IData)((0xfffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x13U))))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x14U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x15U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x14U))))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x14U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x15U))) 
                                     + (IData)((0x7ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x14U))))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x15U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x16U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x15U))))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x15U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x16U))) 
                                     + (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x15U))))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x16U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x17U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x16U))))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x16U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x17U))) 
                                     + (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x16U))))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x17U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x18U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x17U))))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x17U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x18U))) 
                                     + (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x17U))))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x18U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x19U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x18U))))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x18U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x19U))) 
                                     + (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x18U))))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x19U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x19U))))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x19U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1aU))) 
                                     + (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x19U))))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1aU))))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1bU))) 
                                     + (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1aU))))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1bU))))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1cU))) 
                                     + (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1bU))))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1cU))))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1dU))) 
                                     + (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1cU))))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1dU))))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1eU))) 
                                     + (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1dU))))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x1fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1eU))))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x1fU))) 
                                     + (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1eU))))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x1fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x20U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x1fU))))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x1fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x20U))) 
                                     + (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x1fU))))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x20U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x21U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x20U))))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x20U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x21U))) 
                                     + (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x20U))))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x21U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x22U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x21U))))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x21U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x22U))) 
                                     + (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x21U))))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x22U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x23U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x22U))))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x22U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x23U))) 
                                     + (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x22U))))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x23U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x24U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x23U))))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x23U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x24U))) 
                                     + (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x23U))))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x24U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x25U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x24U))))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x24U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x25U))) 
                                     + (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x24U))))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x25U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x26U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x25U))))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x25U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x26U))) 
                                     + (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x25U))))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x26U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x27U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x26U))))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x26U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x27U))) 
                                     + (IData)((0x1ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x26U))))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x27U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x28U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x27U))))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x27U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x28U))) 
                                     + (IData)((0xffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x27U))))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x28U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x29U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x28U))))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x28U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x29U))) 
                                     + (IData)((0x7fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x28U))))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x29U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x29U))))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x29U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2aU))) 
                                     + (IData)((0x3fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x29U))))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2aU))))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2bU))) 
                                     + (IData)((0x1fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2aU))))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2bU))))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2cU))) 
                                     + (IData)((0xfffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2bU))))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2cU))))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2dU))) 
                                     + (IData)((0x7ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2cU))))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2dU))))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2eU))) 
                                     + (IData)((0x3ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2dU))))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x2fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2eU))))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x2fU))) 
                                     + (IData)((0x1ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2eU))))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x2fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x30U)))) 
                                      + (1U & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x2fU))))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x2fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x30U))) 
                                     + (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x2fU))))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x30U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x31U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x30U))))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x30U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x31U))) 
                                     + (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x30U))))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x31U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x32U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x31U))))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x31U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x32U))) 
                                     + (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x31U))))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x32U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x33U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x32U))))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x32U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x33U))) 
                                     + (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x32U))))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x33U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x34U)))) 
                                      + (1U & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x33U))))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x33U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x34U))) 
                                     + (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x33U))))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x34U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x35U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x34U))))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x34U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x35U))) 
                                     + (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x34U))))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x35U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x36U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x35U))))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x35U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x36U))) 
                                     + (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x35U))))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x36U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x37U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x36U))))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x36U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x37U))) 
                                     + (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x36U))))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x37U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x38U)))) 
                                      + (1U & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x37U))))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x37U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x38U))) 
                                     + (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x37U))))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x38U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x39U)))) 
                                      + (1U & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x38U))))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x38U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x39U))) 
                                     + (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x38U))))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x39U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x39U))))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x39U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3aU))) 
                                     + (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x39U))))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x3aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x3aU))))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x3aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3bU))) 
                                     + (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x3aU))))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x3bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3cU)))) 
                                      + (1U & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x3bU))))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x3bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3cU))) 
                                     + (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x3bU))))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (7ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x3cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3dU)))) 
                                      + (1U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x3cU))))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x3cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3dU))) 
                                     + (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x3cU))))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (3ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x3dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3eU)))) 
                                      + (1U & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x3dU))))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x3dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3eU))) 
                                     + (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x3dU))))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (1ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [0U] 
                                                         >> 0x3eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [1U] 
                                                        >> 0x3fU)))) 
                                      + (1U & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [1U] 
                                                          >> 0x3eU))))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S) 
           | ((QData)((IData)((1U & (((IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [0U] 
                                                  >> 0x3eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [1U] 
                                                 >> 0x3fU))) 
                                     + (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [1U] 
                                                   >> 0x3eU))))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                    [2U])) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                       [2U] 
                                                       << 1U)))) 
                                     + (1U & (IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                     [3U]))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | (IData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                             [2U]) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                [2U] 
                                                << 1U))) 
                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                              [3U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 1U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffffULL 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                        [2U])))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 1U)))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 1U)) 
                                      + (IData)((0x7fffffffffffffffULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                 [2U]))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 2U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 1U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 2U)))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 2U)) 
                                      + (IData)((0x3fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 1U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 3U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 2U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 3U)))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 3U)) 
                                      + (IData)((0x1fffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 2U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 4U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 3U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 4U)))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 4U)) 
                                      + (IData)((0xfffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 3U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 5U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 4U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 5U)))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 5U)) 
                                      + (IData)((0x7ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 4U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 6U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 5U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 6U)))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 6U)) 
                                      + (IData)((0x3ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 5U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 7U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 6U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 7U)))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 7U)) 
                                      + (IData)((0x1ffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 6U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 8U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 7U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 8U)))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 8U)) 
                                      + (IData)((0xffffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 7U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 9U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 8U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 9U)))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 9U)) 
                                      + (IData)((0x7fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 8U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xaU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 9U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xaU)))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xaU)) 
                                      + (IData)((0x3fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 9U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xbU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xaU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xbU)))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xbU)) 
                                      + (IData)((0x1fffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xaU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xcU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xbU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xcU)))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xcU)) 
                                      + (IData)((0xfffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xbU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xdU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xcU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xdU)))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xdU)) 
                                      + (IData)((0x7ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xcU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xeU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xdU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xeU)))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xeU)) 
                                      + (IData)((0x3ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xdU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0xfU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xeU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0xfU)))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0xfU)) 
                                      + (IData)((0x1ffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xeU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x10U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0xfU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x10U)))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x10U)) 
                                      + (IData)((0xffffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0xfU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x11U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x10U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x11U)))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x11U)) 
                                      + (IData)((0x7fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x10U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x12U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x11U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x12U)))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x12U)) 
                                      + (IData)((0x3fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x11U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x13U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x12U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x13U)))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x13U)) 
                                      + (IData)((0x1fffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x12U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x14U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x13U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x14U)))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x14U)) 
                                      + (IData)((0xfffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x13U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x15U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x14U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x15U)))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x15U)) 
                                      + (IData)((0x7ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x14U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x16U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x15U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x16U)))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x16U)) 
                                      + (IData)((0x3ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x15U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x17U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x16U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x17U)))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x17U)) 
                                      + (IData)((0x1ffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x16U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x18U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x17U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x18U)))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x18U)) 
                                      + (IData)((0xffffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x17U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x19U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x18U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x19U)))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x19U)) 
                                      + (IData)((0x7fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x18U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x19U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1aU)))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1aU)) 
                                      + (IData)((0x3fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x19U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1bU)))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1bU)) 
                                      + (IData)((0x1fffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1cU)))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1cU)) 
                                      + (IData)((0xfffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1dU)))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1dU)) 
                                      + (IData)((0x7ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1eU)))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1eU)) 
                                      + (IData)((0x3ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x1fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x1fU)))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x1fU)) 
                                      + (IData)((0x1ffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x20U))) 
                                       + (1U & (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x1fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x20U)))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x20U)) 
                                      + (IData)((0xffffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x1fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x21U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x20U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x21U)))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x21U)) 
                                      + (IData)((0x7fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x20U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x22U))) 
                                       + (1U & (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x21U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x22U)))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x22U)) 
                                      + (IData)((0x3fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x21U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x23U))) 
                                       + (1U & (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x22U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x23U)))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x23U)) 
                                      + (IData)((0x1fffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x22U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x24U))) 
                                       + (1U & (IData)(
                                                       (0xfffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x23U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x24U)))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x24U)) 
                                      + (IData)((0xfffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x23U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x25U))) 
                                       + (1U & (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x24U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x25U)))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x25U)) 
                                      + (IData)((0x7ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x24U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x26U))) 
                                       + (1U & (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x25U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x26U)))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x26U)) 
                                      + (IData)((0x3ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x25U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x27U))) 
                                       + (1U & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x26U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x27U)))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x27U)) 
                                      + (IData)((0x1ffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x26U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x28U))) 
                                       + (1U & (IData)(
                                                       (0xffffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x27U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x28U)))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x28U)) 
                                      + (IData)((0xffffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x27U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x29U))) 
                                       + (1U & (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x28U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x29U)))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x29U)) 
                                      + (IData)((0x7fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x28U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2aU))) 
                                       + (1U & (IData)(
                                                       (0x3fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x29U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2aU)))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2aU)) 
                                      + (IData)((0x3fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x29U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2bU))) 
                                       + (1U & (IData)(
                                                       (0x1fffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2bU)))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2bU)) 
                                      + (IData)((0x1fffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2cU))) 
                                       + (1U & (IData)(
                                                       (0xfffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2cU)))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2cU)) 
                                      + (IData)((0xfffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2dU))) 
                                       + (1U & (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2dU)))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2dU)) 
                                      + (IData)((0x7ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2eU))) 
                                       + (1U & (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2eU)))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2eU)) 
                                      + (IData)((0x3ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x2fU))) 
                                       + (1U & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x2fU)))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x2fU)) 
                                      + (IData)((0x1ffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x30U))) 
                                       + (1U & (IData)(
                                                       (0xffffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x2fU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x30U)))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x30U)) 
                                      + (IData)((0xffffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x2fU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x31U))) 
                                       + (1U & (IData)(
                                                       (0x7fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x30U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x31U)))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x31U)) 
                                      + (IData)((0x7fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x30U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x32U))) 
                                       + (1U & (IData)(
                                                       (0x3fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x31U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x32U)))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x32U)) 
                                      + (IData)((0x3fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x31U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x33U))) 
                                       + (1U & (IData)(
                                                       (0x1fffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x32U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x33U)))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x33U)) 
                                      + (IData)((0x1fffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x32U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x34U))) 
                                       + (1U & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x33U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x34U)))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x34U)) 
                                      + (IData)((0xfffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x33U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x35U))) 
                                       + (1U & (IData)(
                                                       (0x7ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x34U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x35U)))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x35U)) 
                                      + (IData)((0x7ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x34U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x36U))) 
                                       + (1U & (IData)(
                                                       (0x3ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x35U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x36U)))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x36U)) 
                                      + (IData)((0x3ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x35U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x37U))) 
                                       + (1U & (IData)(
                                                       (0x1ffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x36U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x37U)))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x37U)) 
                                      + (IData)((0x1ffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x36U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x38U))) 
                                       + (1U & (IData)(
                                                       (0xffULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x37U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x38U)))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x38U)) 
                                      + (IData)((0xffULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x37U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x39U))) 
                                       + (1U & (IData)(
                                                       (0x7fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x38U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x39U)))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x39U)) 
                                      + (IData)((0x7fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x38U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3aU))) 
                                       + (1U & (IData)(
                                                       (0x3fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x39U))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3aU)))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3aU)) 
                                      + (IData)((0x3fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x39U)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3bU))) 
                                       + (1U & (IData)(
                                                       (0x1fULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x3aU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3bU)))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3bU)) 
                                      + (IData)((0x1fULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x3aU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3cU))) 
                                       + (1U & (IData)(
                                                       (0xfULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x3bU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3cU)))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3cU)) 
                                      + (IData)((0xfULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x3bU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3dU))) 
                                       + (1U & (IData)(
                                                       (7ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x3cU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3dU)))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3dU)) 
                                      + (IData)((7ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x3cU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3eU))) 
                                       + (1U & (IData)(
                                                       (3ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x3dU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3eU)))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3eU)) 
                                      + (IData)((3ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x3dU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [2U] 
                                                      >> 0x3fU))) 
                                       + (1U & (IData)(
                                                       (1ULL 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                           [2U] 
                                                           >> 0x3eU))))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [3U] 
                                                       >> 0x3fU)))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [2U] 
                                               >> 0x3fU)) 
                                      + (IData)((1ULL 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                    [2U] 
                                                    >> 0x3eU)))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [3U] 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                     [3U] 
                                                     << 1U))) 
                                      + (1U & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                      [4U]))) 
                                     + (1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                      [4U] 
                                                      << 1U)))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | (IData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                              [3U] 
                                              << 1U)) 
                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                               [4U])) 
                                    + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                               [4U] 
                                               << 1U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                      [3U]))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 1U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                       [4U])))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                               [3U])) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 1U))) 
                                     + (IData)((0x7fffffffffffffffULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                [4U])))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 1U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 2U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 1U))))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 1U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 2U))) 
                                     + (IData)((0x3fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 1U))))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 2U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 3U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 2U))))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 2U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 3U))) 
                                     + (IData)((0x1fffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 2U))))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 3U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 4U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 3U))))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 3U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 4U))) 
                                     + (IData)((0xfffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 3U))))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 4U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 5U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 4U))))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 4U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 5U))) 
                                     + (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 4U))))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 5U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 6U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 5U))))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 5U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 6U))) 
                                     + (IData)((0x3ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 5U))))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 6U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 7U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 6U))))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 6U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 7U))) 
                                     + (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 6U))))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 7U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 8U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 7U))))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 7U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 8U))) 
                                     + (IData)((0xffffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 7U))))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 8U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 9U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 8U))))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 8U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 9U))) 
                                     + (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 8U))))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 9U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xaU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 9U))))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 9U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xaU))) 
                                     + (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 9U))))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xaU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xbU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xaU))))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xaU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xbU))) 
                                     + (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xaU))))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xbU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xcU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xbU))))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xbU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xcU))) 
                                     + (IData)((0xfffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xbU))))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xcU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xdU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xcU))))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xcU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xdU))) 
                                     + (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xcU))))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xdU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xeU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xdU))))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xdU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xeU))) 
                                     + (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xdU))))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xeU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0xfU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xeU))))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xeU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0xfU))) 
                                     + (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xeU))))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0xfU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x10U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0xfU))))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0xfU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x10U))) 
                                     + (IData)((0xffffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0xfU))))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x10U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x11U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x10U))))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x10U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x11U))) 
                                     + (IData)((0x7fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x10U))))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x11U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x12U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x11U))))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x11U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x12U))) 
                                     + (IData)((0x3fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x11U))))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x12U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x13U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x12U))))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x12U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x13U))) 
                                     + (IData)((0x1fffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x12U))))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x13U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x14U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x13U))))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x13U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x14U))) 
                                     + (IData)((0xfffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x13U))))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x14U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x15U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x14U))))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x14U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x15U))) 
                                     + (IData)((0x7ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x14U))))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x15U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x16U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x15U))))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x15U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x16U))) 
                                     + (IData)((0x3ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x15U))))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x16U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x17U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x16U))))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x16U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x17U))) 
                                     + (IData)((0x1ffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x16U))))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x17U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x18U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x17U))))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x17U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x18U))) 
                                     + (IData)((0xffffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x17U))))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x18U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x19U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x18U))))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x18U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x19U))) 
                                     + (IData)((0x7fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x18U))))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x19U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x19U))))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x19U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1aU))) 
                                     + (IData)((0x3fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x19U))))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1aU))))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1bU))) 
                                     + (IData)((0x1fffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1aU))))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1bU))))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1cU))) 
                                     + (IData)((0xfffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1bU))))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1cU))))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1dU))) 
                                     + (IData)((0x7ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1cU))))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1dU))))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1eU))) 
                                     + (IData)((0x3ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1dU))))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x1fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1eU))))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x1fU))) 
                                     + (IData)((0x1ffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1eU))))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x1fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x20U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x1fU))))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x1fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x20U))) 
                                     + (IData)((0xffffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x1fU))))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x20U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x21U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x20U))))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x20U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x21U))) 
                                     + (IData)((0x7fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x20U))))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x21U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x22U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x21U))))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x21U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x22U))) 
                                     + (IData)((0x3fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x21U))))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x22U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x23U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x22U))))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x22U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x23U))) 
                                     + (IData)((0x1fffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x22U))))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x23U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x24U)))) 
                                      + (1U & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x23U))))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x23U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x24U))) 
                                     + (IData)((0xfffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x23U))))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x24U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x25U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x24U))))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x24U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x25U))) 
                                     + (IData)((0x7ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x24U))))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x25U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x26U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x25U))))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x25U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x26U))) 
                                     + (IData)((0x3ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x25U))))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x26U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x27U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x26U))))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x26U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x27U))) 
                                     + (IData)((0x1ffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x26U))))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x27U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x28U)))) 
                                      + (1U & (IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x27U))))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x27U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x28U))) 
                                     + (IData)((0xffffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x27U))))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x28U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x29U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x28U))))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x28U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x29U))) 
                                     + (IData)((0x7fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x28U))))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x29U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x29U))))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x29U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2aU))) 
                                     + (IData)((0x3fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x29U))))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2aU))))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2bU))) 
                                     + (IData)((0x1fffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2aU))))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2cU)))) 
                                      + (1U & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2bU))))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2cU))) 
                                     + (IData)((0xfffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2bU))))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2dU)))) 
                                      + (1U & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2cU))))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2dU))) 
                                     + (IData)((0x7ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2cU))))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2eU)))) 
                                      + (1U & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2dU))))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2eU))) 
                                     + (IData)((0x3ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2dU))))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x2fU)))) 
                                      + (1U & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2eU))))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x2fU))) 
                                     + (IData)((0x1ffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2eU))))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x2fU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x30U)))) 
                                      + (1U & (IData)(
                                                      (0xffffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x2fU))))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x2fU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x30U))) 
                                     + (IData)((0xffffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x2fU))))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x30U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x31U)))) 
                                      + (1U & (IData)(
                                                      (0x7fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x30U))))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x30U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x31U))) 
                                     + (IData)((0x7fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x30U))))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x31U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x32U)))) 
                                      + (1U & (IData)(
                                                      (0x3fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x31U))))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x31U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x32U))) 
                                     + (IData)((0x3fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x31U))))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x32U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x33U)))) 
                                      + (1U & (IData)(
                                                      (0x1fffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x32U))))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x32U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x33U))) 
                                     + (IData)((0x1fffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x32U))))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x33U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x34U)))) 
                                      + (1U & (IData)(
                                                      (0xfffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x33U))))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x33U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x34U))) 
                                     + (IData)((0xfffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x33U))))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x34U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x35U)))) 
                                      + (1U & (IData)(
                                                      (0x7ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x34U))))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x34U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x35U))) 
                                     + (IData)((0x7ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x34U))))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x35U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x36U)))) 
                                      + (1U & (IData)(
                                                      (0x3ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x35U))))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x35U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x36U))) 
                                     + (IData)((0x3ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x35U))))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1ffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x36U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x37U)))) 
                                      + (1U & (IData)(
                                                      (0x1ffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x36U))))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x36U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x37U))) 
                                     + (IData)((0x1ffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x36U))))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xffULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x37U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x38U)))) 
                                      + (1U & (IData)(
                                                      (0xffULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x37U))))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x37U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x38U))) 
                                     + (IData)((0xffULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x37U))))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x7fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x38U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x39U)))) 
                                      + (1U & (IData)(
                                                      (0x7fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x38U))))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x38U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x39U))) 
                                     + (IData)((0x7fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x38U))))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x3fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x39U)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3aU)))) 
                                      + (1U & (IData)(
                                                      (0x3fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x39U))))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x39U))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3aU))) 
                                     + (IData)((0x3fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x39U))))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0x1fULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x3aU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3bU)))) 
                                      + (1U & (IData)(
                                                      (0x1fULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x3aU))))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x3aU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3bU))) 
                                     + (IData)((0x1fULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x3aU))))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (0xfULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x3bU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3cU)))) 
                                      + (1U & (IData)(
                                                      (0xfULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x3bU))))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x3bU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3cU))) 
                                     + (IData)((0xfULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x3bU))))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (7ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x3cU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3dU)))) 
                                      + (1U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x3cU))))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x3cU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3dU))) 
                                     + (IData)((7ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x3cU))))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (3ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x3dU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3eU)))) 
                                      + (1U & (IData)(
                                                      (3ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x3dU))))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x3dU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3eU))) 
                                     + (IData)((3ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x3dU))))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (1ULL 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                         [3U] 
                                                         >> 0x3eU)))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                        [4U] 
                                                        >> 0x3fU)))) 
                                      + (1U & (IData)(
                                                      (1ULL 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                          [4U] 
                                                          >> 0x3eU))))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S) 
           | ((QData)((IData)((1U & (((IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                  [3U] 
                                                  >> 0x3eU))) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                 [4U] 
                                                 >> 0x3fU))) 
                                     + (IData)((1ULL 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC
                                                   [4U] 
                                                   >> 0x3eU))))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_tagv_wea 
        = ((((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) 
              & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))) 
            | (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
               & ((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                >> 0x18U))) | ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                    >> 0x18U))) 
                                               & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr))))) 
           | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_cacop_hit)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_tagv_wea 
        = ((((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_replaceWay)) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache))) 
            | (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_en)) 
               & ((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                >> 0x18U))) | ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                    >> 0x18U))) 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_addr)))) 
           | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_icacop_mode)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_cacop_hit)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp 
        = (1U & (((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[3U] 
                       >> 0xdU) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP)) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR)) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS)) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_regW 
        = (1U & ((((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                        >> 0xeU) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__ALE_EXCP))) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__TLBR))) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIL))) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PIS))) 
                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PPI))) 
                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__PME))) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec2__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec3__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secC[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__secSig[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec4__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wstrb 
        = (((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid))) 
              & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW)))) 
             & (- (IData)((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp)))))) 
            & (- (IData)((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn)))))) 
           & ((1U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
               ? ((((1U & (- (IData)((0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))) 
                    | (2U & (- (IData)((1U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult)))))) 
                   | (4U & (- (IData)((2U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult)))))) 
                  | (8U & (- (IData)((3U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))))
               : ((2U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                   ? ((3U & (- (IData)((0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))) 
                      | (0xcU & (- (IData)((2U == (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult))))))
                   : ((3U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[4U]))
                       ? 0xfU : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_wr 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp))) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_req 
        = (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                    >> 0xfU))) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_excp))) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin));
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
}
