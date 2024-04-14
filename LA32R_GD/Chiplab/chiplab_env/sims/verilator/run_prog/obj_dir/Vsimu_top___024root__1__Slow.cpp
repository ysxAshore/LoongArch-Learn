// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

void Vsimu_top___024root___settle__TOP__3(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp19;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0xcU))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffffffeULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffffffeULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0xeU))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffe0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffe0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffffff0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffffff0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffffffeULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffffffeULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x10U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffff8000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xfU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffff8000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffc000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xeU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffc000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffff80ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffff80ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffc0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffc0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffe0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffe0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffffff0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffffff0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x12U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffe0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x11U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffe0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffff0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x10U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffff0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffff8000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xfU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffff8000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffc000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xeU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffc000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffffe00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffffe00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffff00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffff00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffff80ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffff80ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffc0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffc0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffe0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffe0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffffff0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffffff0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xfffffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xfffffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7ffffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7ffffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x14U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffff80000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x13U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffff80000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffc0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x12U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffc0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffe0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x11U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffe0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffff0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x10U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffff0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffff8000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xfU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffff8000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffc000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xeU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffc000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffff800ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffff800ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffffc00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffffc00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffffe00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffffe00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffff00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffff00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffff80ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffff80ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffc0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffc0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xfffffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xfffffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7ffffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7ffffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3ffffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3ffffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1ffffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1ffffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x16U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffe00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x15U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffe00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffff00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x14U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffff00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffff80000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x13U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffff80000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffc0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x12U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffc0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffe0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x11U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffe0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffff0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x10U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffff0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffff8000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xfU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffff8000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffc000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0xeU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffc000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffe000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xdU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffe000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffff000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffff000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffff800ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffff800ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffffc00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffffc00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffffe00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffffe00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffff00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffff00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3ffffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3ffffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1ffffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1ffffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x18U))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffff800000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x17U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffff800000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffc00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x16U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffc00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffe00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x15U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffe00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffff00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x14U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffff00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffff80000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x13U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffff80000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffc0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x12U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffc0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffe0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x11U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffe0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffff0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x10U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffff0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffff8000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xfU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffff8000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffc000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xeU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffc000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffe000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xdU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffe000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffff000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffff000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffff800ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffff800ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffffc00ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffffc00ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x1aU))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffff800000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x17U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffff800000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffc00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x16U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffc00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffe00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x15U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffe00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffff00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x14U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffff00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffff80000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x13U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffff80000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffc0000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x12U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffc0000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffe0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x11U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffe0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffff0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x10U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffff0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffff8000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xfU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffff8000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffc000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xeU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffc000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffe000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xdU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffe000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffff000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffff000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xfffffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xfffffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7ffffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7ffffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xfffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xfffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7ffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7ffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x1cU))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffff8000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffff8000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffc000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffc000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffff800000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x17U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffff800000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffc00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x16U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffc00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffe00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x15U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffe00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffff00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x14U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffff00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffff80000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffff80000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffc0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffc0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffe0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x11U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffe0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffff0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x10U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffff0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffff8000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xfU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffff8000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffc000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0xeU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffc000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffe000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffe000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xfffffffff000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xfffffffff000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7ffffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7ffffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3ffffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3ffffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1ffffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1ffffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xfffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xfffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7ffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7ffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3ffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3ffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1ffffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1ffffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       << 0x1eU))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [1U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                   << 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffe0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1dU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffe0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffff0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1cU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffff0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffff8000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffff8000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffc000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffc000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffff800000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x17U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffff800000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffc00000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                          << 0x16U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffc00000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffe00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x15U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffe00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffff00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffff00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffff80000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffff80000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffc0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffc0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffe0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x11U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffe0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffff0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x10U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffff0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                        << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffff8000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffff8000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffc000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffc000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffe000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffe000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3ffffffff000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3ffffffff000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1ffffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1ffffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3ffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3ffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1ffffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1ffffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xffffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xffffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7fffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7fffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                       >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                           >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mul 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x18U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulh 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x19U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mulhu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x1aU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_div 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_mod 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_divu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_modu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_idle 
        = (1U & ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_orn 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xcU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andn 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xdU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sra 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x10U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sub 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slt 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_nor 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_and 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_or 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xaU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xor 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xbU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sll 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xeU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srl 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_invtlb 
        = (1U & ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                    >> 0x13U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_add 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 1U)) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srai 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slli 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                    >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_srli 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                    >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_slti 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                    >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sltui 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                    >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ori 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                    >> 0xeU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_andi 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                     >> 0xdU)) | ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                                             >> 0xeU)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                                                  >> 3U)) 
                                  & (0U != (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_xori 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                    >> 0xfU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_addi 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                    >> 0xaU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_cacop 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                     >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ll 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 0x1dU))) 
                 & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                       >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_b 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_h 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_w 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_bu 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 8U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ld_hu 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__regAddrA 
        = ((1U & ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                             >> 0xeU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                          >> 1U)) & 
                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                    >> 3U)) & (0U != (0x30U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d))))
            ? 0U : (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                             >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrrd 
        = (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                     >> 1U)) & (0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                             >> 0x1cU)))) 
           & (0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                              >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntid 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
            & (0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0xeU)))) & (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvl 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
            & (0x18U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0xeU)))) & (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_rdcntvh 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d) 
            & (0x19U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                  >> 0xeU)))) & (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                     >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbsrch 
        = ((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                        >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                   >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                >> 0x10U)) & (0xaU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0xeU)))) 
           & (0U == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbrd 
        = ((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                        >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                   >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                >> 0x10U)) & (0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0xeU)))) 
           & (0U == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbwr 
        = ((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                        >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                   >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                >> 0x10U)) & (0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0xeU)))) 
           & (0U == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_tlbfill 
        = ((((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                        >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                   >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                >> 0x10U)) & (0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                >> 0xeU)))) 
           & (0U == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_ertn 
        = (((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                       >> 1U)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                  >> 9U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d)) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
               >> 0x10U)) & (0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                               >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_break 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x14U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_syscall 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_19_15_d 
                                >> 0x16U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_lu12i 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 5U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_pcaddu12i 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 7U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                        >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrxchg 
        = ((((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                      >> 1U)) & (0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                              >> 0x1cU)))) 
            & (0U != (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                               >> 9U)))) & (1U != (0x1fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                                      >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_sc 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                         >> 0x1dU))) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                    >> 0x1cU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_b 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_h 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_st_w 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_25_22_d) 
                                       >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__inst_csrwr 
        = (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__op_31_26_d 
                     >> 1U)) & (0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                                             >> 0x1cU)))) 
           & (1U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_id_stage__DOT__id_data[0U] 
                              >> 9U))));
    __Vtemp19[0U] = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid 
                      << 0x16U) | ((0x200000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                 << 0x12U)) 
                                   | ((0x100000U & 
                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                        << 0x10U)) 
                                      | ((0xe0000U 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                             >> 0xcU)) 
                                         | ((0x1c000U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                >> 0xfU)) 
                                            | ((0x3800U 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                   >> 0xeU)) 
                                               | ((0x700U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                      >> 0x11U)) 
                                                  | ((0x80U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                         << 7U)) 
                                                     | ((0x40U 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                            << 6U)) 
                                                        | ((0x20U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                               << 2U)) 
                                                           | ((0x10U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                                  << 1U)) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv) 
                                                                  << 2U) 
                                                                 | (((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                                          >> 4U))) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                                           >> 4U))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[0U] 
        = ((__Vtemp19[0U] << 1U) | (1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                 >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[1U] 
        = ((__Vtemp19[0U] >> 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry 
                                       << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[2U] 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry 
            >> 0x1fU) | ((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)))) 
                         << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[3U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                      << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))) 
                                  >> 0x20U)) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_if_bus[4U] 
        = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)) 
                      << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))) 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
        = (((QData)((IData)((0x3ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                         >> 0xdU)))) 
            << 0x22U) | (((QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid 
                                            << 0x16U) 
                                           | ((0x200000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                  << 0x12U)) 
                                              | ((0x100000U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                     << 0x10U)) 
                                                 | ((0xe0000U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                        >> 0xcU)) 
                                                    | ((0x1c000U 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                           >> 0xfU)) 
                                                       | ((0x3800U 
                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                              >> 0xeU)) 
                                                          | ((0x700U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                                 >> 0x11U)) 
                                                             | ((0x80U 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                                          << 2U)) 
                                                                      | ((0x10U 
                                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                                             << 1U)) 
                                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cur_plv) 
                                                                             << 2U) 
                                                                            | (((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                                                                >> 7U))) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                                                                                >> 4U)))))))))))))))))) 
                          << 2U) | (QData)((IData)(
                                                   (((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                                                          >> 4U))) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))));
}
