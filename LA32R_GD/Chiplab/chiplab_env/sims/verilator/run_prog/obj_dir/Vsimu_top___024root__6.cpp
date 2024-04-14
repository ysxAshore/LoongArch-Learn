// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024root.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_17131e0c_0;

VL_INLINE_OPT void Vsimu_top___024root___combo__TOP__19(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___combo__TOP__19\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx4;
    VlWide<3>/*95:0*/ __Vtemp379;
    VlWide<3>/*95:0*/ __Vtemp382;
    VlWide<3>/*95:0*/ __Vtemp383;
    VlWide<3>/*95:0*/ __Vtemp385;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<5>/*159:0*/ __Vtemp390;
    CData/*31:0*/ __Vtemp401;
    CData/*31:0*/ __Vtemp402;
    CData/*31:0*/ __Vtemp403;
    CData/*31:0*/ __Vtemp404;
    CData/*31:0*/ __Vtemp405;
    CData/*31:0*/ __Vtemp406;
    CData/*31:0*/ __Vtemp407;
    CData/*31:0*/ __Vtemp408;
    CData/*31:0*/ __Vtemp409;
    CData/*31:0*/ __Vtemp410;
    CData/*31:0*/ __Vtemp411;
    CData/*31:0*/ __Vtemp412;
    CData/*31:0*/ __Vtemp413;
    CData/*31:0*/ __Vtemp414;
    CData/*31:0*/ __Vtemp415;
    CData/*31:0*/ __Vtemp416;
    CData/*31:0*/ __Vtemp417;
    CData/*31:0*/ __Vtemp418;
    CData/*31:0*/ __Vtemp419;
    CData/*31:0*/ __Vtemp420;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 6U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 6U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 7U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 7U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 8U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 8U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 9U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 9U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xaU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xbU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xbU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xcU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xcU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xdU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xdU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xeU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xeU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0xfU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0xfU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x10U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x10U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x11U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x11U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x12U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x12U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x13U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x13U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x14U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x14U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x15U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x15U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x16U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x16U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x17U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x17U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x18U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x18U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x19U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x19U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x1fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x1fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x20U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x20U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x21U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x21U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x22U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x22U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x23U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x23U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x24U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x24U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x25U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x25U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x26U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x26U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x27U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x27U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x28U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x28U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x29U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x29U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x2fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x2fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x30U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x30U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x31U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x31U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x32U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x32U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x33U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x33U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x34U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x34U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x35U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x35U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x36U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x36U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x37U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x37U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x38U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x38U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x39U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x39U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xcU] 
                                               >> 0x3fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0xdU] 
                                                 >> 0x3fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                [0xeU] 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                  >> 3U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                     >> 2U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                >> 2U)));
    __Vtableidx4 = ((0xfffffe00U & (((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                      << 9U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                << 7U)) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                        << 9U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                  << 7U)))) 
                    | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                  << 8U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                              << 7U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                       << 3U)) 
                                                   | ((0x10U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_17131e0c_0[__Vtableidx4];
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                  >> 3U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__byteReadData 
        = (0xffU & (((((- (IData)((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                >> 4U))))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata) 
                      | ((- (IData)((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                  >> 4U))))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata 
                            >> 8U))) | ((- (IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                        >> 4U))))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata 
                                           >> 0x10U))) 
                    | ((- (IData)((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                >> 4U))))) 
                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata 
                          >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__halfReadData 
        = (0xffffU & (((- (IData)((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                >> 4U))))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata) 
                      | ((- (IData)((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                  >> 4U))))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata 
                            >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                  >> 0xdU) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                               >> 0x12U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)) 
           | (((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                              >> 0x13U))) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                              >> 0x1dU)) 
              & ((0xb0ULL == (0xb0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)) 
                 | (0x200ULL == (0x230ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select 
        = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__dmw_select)) 
           | ((((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                               >> 0x10U))) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                               >> 0x1dU)) 
               & ((0x70ULL == (0x70ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)) 
                  | (0x100ULL == (0x130ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus)))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->ram_ren = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0)) 
                                  & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0)) 
                                  & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0)) 
                                  & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way0_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way0_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way0)) 
                                  & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1)) 
                                  & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1)) 
                                  & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1)) 
                                  & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__way1_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__match_way1_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__refill_write_way1)) 
                                  & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__i_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go 
        = (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_sram_data_ok) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__inst_sram_rdata_r_valid)) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__excp_reg))) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ADEF_EXCP)) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_tlbr)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_pif)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ppi));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0)) 
                                  & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0)) 
                                  & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0)) 
                                  & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way0_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way0_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way0)) 
                                  & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1)) 
                                  & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1)) 
                                  & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1)) 
                                  & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__way1_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__match_way1_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__writeBuffer_wstrb)) 
                   | (- (IData)(((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__cache_state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__refill_write_way1)) 
                                  & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__missBuffer_retNum))) 
                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__d_cache__DOT__requestBuffer_uncache)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid));
    __Vtemp379[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                               [(0x1fU 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                     << 1U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                       >> 0x1fU)))])) 
                               << 0x35U) | (((QData)((IData)(
                                                             vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                                             [
                                                             (0x1fU 
                                                              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                  << 1U) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                    >> 0x1fU)))])) 
                                             << 0x34U) 
                                            | (((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                                [
                                                                (0x1fU 
                                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                       >> 0x1fU)))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                   [
                                                                   (0x1fU 
                                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                        << 1U) 
                                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                          >> 0x1fU)))] 
                                                                   << 0x1eU) 
                                                                  | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                      [
                                                                      (0x1fU 
                                                                       & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                           << 1U) 
                                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                             >> 0x1fU)))] 
                                                                      << 0x1cU) 
                                                                     | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                              << 1U) 
                                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                         << 0x1bU) 
                                                                        | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                            [
                                                                            (0x1fU 
                                                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                            << 0x1aU) 
                                                                           | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                                               [
                                                                               (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                               << 6U) 
                                                                              | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 4U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 2U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 1U) 
                                                                                | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))]))))))))))))));
    __Vtemp379[1U] = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                   << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                             >> 0x1fU)))] 
                       << 0x1fU) | (IData)(((((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                                              [
                                                              (0x1fU 
                                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                   << 1U) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                     >> 0x1fU)))])) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                                                 [
                                                                 (0x1fU 
                                                                  & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                      << 1U) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                        >> 0x1fU)))])) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn0
                                                                    [
                                                                    (0x1fU 
                                                                     & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                           >> 0x1fU)))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv0
                                                                       [
                                                                       (0x1fU 
                                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                            << 1U) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                              >> 0x1fU)))] 
                                                                       << 0x1eU) 
                                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat0
                                                                          [
                                                                          (0x1fU 
                                                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                               << 1U) 
                                                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                          << 0x1cU) 
                                                                         | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d0
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                             << 0x1bU) 
                                                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v0
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 0x1aU) 
                                                                               | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__ppn1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 6U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__plv1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 4U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__mat1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 2U) 
                                                                                | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__d1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))] 
                                                                                << 1U) 
                                                                                | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__v1
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                                                                                << 1U) 
                                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                                                                >> 0x1fU)))]))))))))))))) 
                                            >> 0x20U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
        = __Vtemp379[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
        = __Vtemp379[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
            [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                        << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                  >> 0x1fU)))] << 0x18U) 
           | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
               [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                           << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                     >> 0x1fU)))] << 5U) 
              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                 [(0x1fU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[3U] 
                             << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_tlb_bus[2U] 
                                       >> 0x1fU)))] 
                 >> 1U)));
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firC[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__Carry;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir1__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir2__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir3__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir4__S;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__fir5__S;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData 
        = ((1U == (3U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                          << 1U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                    >> 0x1fU)))) ? 
           ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
             << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                       >> 0x1eU)) : ((2U == (3U & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                      >> 0x1fU))))
                                      ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                          << 2U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[2U] 
                                          >> 0x1eU))
                                      : ((3U == (3U 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                     << 1U) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                       >> 0x1fU))))
                                          ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[4U] 
                                              << 2U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[3U] 
                                                >> 0x1eU))
                                          : ((0x10U 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U])
                                              ? (((
                                                   (- (IData)(
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
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_sram_rdata))
                                              : ((0x80000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U])
                                                  ? 
                                                 (1U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[1U] 
                                                     >> 1U))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                       >> 0x11U)))
                                                   ? 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                                    << 0x1cU) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                    << 2U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                      >> 0x1eU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
        = (((QData)((IData)((0x7ffffU & ((((- (IData)(
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
                                               >> 0xdU)))))) 
            << 0x11U) | (QData)((IData)(((0x1ff80U 
                                          & (((((- (IData)(
                                                           (1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                >> 0x1aU))))) 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                           >> 0x18U))) 
                                               << 7U) 
                                              | (((- (IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                                  >> 0x1aU))))) 
                                                  << 7U) 
                                                 & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                     << 0x1fU) 
                                                    | (0x7fffff80U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[5U] 
                                                          >> 1U))))) 
                                             | (((- (IData)(
                                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid) 
                                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_memW) 
                                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[7U] 
                                                                    >> 0xfU)) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__cacop_load))))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_exe_bus 
                                                            >> 0x18U))) 
                                                << 7U))) 
                                         | ((0x40U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_aluResult 
                                                >> 6U)) 
                                            | (((((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                       >> 0x1aU))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_valid)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__flush_excp_ertn))) 
                                                << 5U) 
                                               | (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__exe_data[2U] 
                                                     >> 0x15U))))))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_to_id_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_if_stage__DOT__if_ready_go));
    __Vtemp382[1U] = ((((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                      >> 0x11U))) ? 
                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                          << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                       >> 1U)) : ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                       >> 0x11U)))
                                                   ? 
                                                  ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
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
                                                   : 0U)) 
                       << 0x11U) | (IData)(((((QData)((IData)(
                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                >> 0x10U) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                   >> 0xfU) 
                                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                                                 << 0x2fU) 
                                                | (((QData)((IData)(
                                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                      << 0xdU) 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                                        >> 0x13U)))) 
                                                    << 0xfU) 
                                                   | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code))))) 
                                            >> 0x20U)));
    __Vtemp383[2U] = ((0x7ffe0000U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                       << 0x1eU) | 
                                      (0x3ffe0000U 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          >> 2U)))) 
                      | (((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                        >> 0x11U)))
                           ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                               << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                            >> 1U))
                           : ((3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                            >> 0x11U)))
                               ? ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                     << 0x1fU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                                                  >> 1U)) 
                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                       << 0x1fU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                       >> 1U))) | (
                                                   (~ 
                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[7U] 
                                                        >> 1U))) 
                                                   & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[6U] 
                                                       << 2U) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_to_mem_bus[5U] 
                                                         >> 0x1eU))))
                               : 0U)) >> 0xfU));
    __Vtemp385[0U] = (((IData)((((QData)((IData)(((0x1000000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                   ? 
                                                  ((0xfffff00U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                       << 8U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                          >> 0xeU)) 
                                                      | ((0x30U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                             >> 0x18U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                >> 0x1cU)) 
                                                            | (3U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                  >> 0x1aU))))))
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x1000000U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                               ? 
                                                              (0x80U 
                                                               | ((0xfffff00U 
                                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                      << 2U)) 
                                                                  | ((0x40U 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                         >> 0xeU)) 
                                                                     | ((0x30U 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                            << 2U)) 
                                                                        | ((0xcU 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                               >> 2U)) 
                                                                           | (3U 
                                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U]))))))
                                                               : 0U))))) 
                       << 0xdU) | ((0x1f00U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               >> 0xdU)) 
                                   | ((((0x1000000U 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                         ? (0x3fU & 
                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                              << 1U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                >> 0x1fU)))
                                         : 0U) << 2U) 
                                      | ((2U & (((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                      >> 0x1cU)))
                                                  ? 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  >> 0x1aU)
                                                  : 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                  >> 0x18U)) 
                                                << 1U)) 
                                         | ((1U == 
                                             (7U & 
                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                               >> 0x1cU))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid))))));
    __Vtemp385[1U] = (((IData)((((QData)((IData)(((0x1000000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                   ? 
                                                  ((0xfffff00U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                       << 8U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                          >> 0xeU)) 
                                                      | ((0x30U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                             >> 0x18U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                >> 0x1cU)) 
                                                            | (3U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                  >> 0x1aU))))))
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x1000000U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                               ? 
                                                              (0x80U 
                                                               | ((0xfffff00U 
                                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                      << 2U)) 
                                                                  | ((0x40U 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                         >> 0xeU)) 
                                                                     | ((0x30U 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                            << 2U)) 
                                                                        | ((0xcU 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                               >> 2U)) 
                                                                           | (3U 
                                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U]))))))
                                                               : 0U))))) 
                       >> 0x13U) | ((IData)(((((QData)((IData)(
                                                               ((0x1000000U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                                 ? 
                                                                ((0xfffff00U 
                                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                     << 8U)) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                        >> 0xeU)) 
                                                                    | ((0x30U 
                                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                           >> 0x18U)) 
                                                                       | ((0xcU 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                              >> 0x1cU)) 
                                                                          | (3U 
                                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                                >> 0x1aU))))))
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x1000000U 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                                  ? 
                                                                 (0x80U 
                                                                  | ((0xfffff00U 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                         << 2U)) 
                                                                     | ((0x40U 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                            >> 0xeU)) 
                                                                        | ((0x30U 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                               << 2U)) 
                                                                           | ((0xcU 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                                >> 2U)) 
                                                                              | (3U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U]))))))
                                                                  : 0U)))) 
                                             >> 0x20U)) 
                                    << 0xdU));
    __Vtemp385[2U] = ((IData)(((((QData)((IData)(((0x1000000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                   ? 
                                                  ((0xfffff00U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                       << 8U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                          >> 0xeU)) 
                                                      | ((0x30U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                             >> 0x18U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                >> 0x1cU)) 
                                                            | (3U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                  >> 0x1aU))))))
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x1000000U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                                               ? 
                                                              (0x80U 
                                                               | ((0xfffff00U 
                                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                      << 2U)) 
                                                                  | ((0x40U 
                                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                                                                         >> 0xeU)) 
                                                                     | ((0x30U 
                                                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                            << 2U)) 
                                                                        | ((0xcU 
                                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U] 
                                                                               >> 2U)) 
                                                                           | (3U 
                                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[0U]))))))
                                                               : 0U)))) 
                               >> 0x20U)) >> 0x13U);
    __Vtemp387[0U] = ((__Vtemp385[0U] << 5U) | ((((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                       >> 0x1cU))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                                                 << 4U) 
                                                | ((8U 
                                                    & ((((((((0x3ffff8U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                 >> 0xaU)) 
                                                             | (0x7ffff8U 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                   >> 9U))) 
                                                            | (0xfffff8U 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                  >> 8U))) 
                                                           | (0x1ffffff8U 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                 >> 3U))) 
                                                          | (0x3ffffff8U 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                                >> 2U))) 
                                                         | (0x7ffffff8U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                               >> 1U))) 
                                                        | (0xfffffff8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U])) 
                                                       | (0xfffffff8U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                             << 1U)))) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__tlbr_wen) 
                                                       << 2U) 
                                                      | (((((0x1ffeU 
                                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                >> 0x13U)) 
                                                            | (0x3ffeU 
                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                  >> 0x12U))) 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid) 
                                                              << 1U)) 
                                                          & ((~ 
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                               >> 0x10U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                               >> 0x14U)))))));
    __Vtemp390[4U] = ((0xffff8000U & (((((((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                << 1U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  << 2U)) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                 << 3U)) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                << 4U)) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                               << 8U)) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                              << 9U)) 
                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             << 0xaU)) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                            << 0xbU)) 
                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                           << 0xcU)) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                          << 0xdU)) 
                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid) 
                                         << 0xfU))) 
                      | (((1U & ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                    >> 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0xdU)) 
                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                     >> 0xcU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                  >> 0xbU)))
                           ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                               << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                           >> 0x13U))
                           : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                               << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                                            >> 4U))) 
                         >> 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[0U] 
        = __Vtemp387[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[1U] 
        = ((__Vtemp385[0U] >> 0x1bU) | (__Vtemp385[1U] 
                                        << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[2U] 
        = ((__Vtemp385[1U] >> 0x1bU) | ((((0x1000000U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                                           ? (0x7ffffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                                 >> 5U))
                                           : 0U) << 0x12U) 
                                        | (__Vtemp385[2U] 
                                           << 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[3U] 
        = ((((1U & ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                       >> 0xeU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                   >> 0xdU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                >> 0xcU)) 
                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                       >> 0xbU))) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                      << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                  >> 0x13U))
              : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                  << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[8U] 
                               >> 4U))) << 0xfU) | 
           ((((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
               ? (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[1U] 
                            >> 0x15U)) : 0U) << 5U) 
            | ((0x1fU & (((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U])
                           ? (0x7ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlb_to_mem_bus[2U] 
                                          >> 5U)) : 0U) 
                         >> 0xeU)) | (__Vtemp385[2U] 
                                      >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[4U] 
        = (((IData)((((QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                        >> 0x10U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                      << 0x30U) | (((QData)((IData)(
                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                      >> 0xfU) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                    << 0xdU) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                                      >> 0x13U)))) 
                                                  << 0xfU) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code)))))) 
            << 0x10U) | __Vtemp390[4U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[5U] 
        = (((IData)((((QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                        >> 0x10U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                      << 0x30U) | (((QData)((IData)(
                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                                      >> 0xfU) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)))) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                                    << 0xdU) 
                                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                                      >> 0x13U)))) 
                                                  << 0xfU) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__code)))))) 
            >> 0x10U) | (__Vtemp382[1U] << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[6U] 
        = ((__Vtemp382[1U] >> 0x10U) | (__Vtemp383[2U] 
                                        << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_csr_bus[7U] 
        = ((0x3fff0000U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[6U] 
                            << 0x1dU) | (0x1fff0000U 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                            >> 3U)))) 
           | ((0x8000U & (((((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                           >> 0x11U))) 
                             | (3U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                             >> 0x11U)))) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)) 
                           & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[5U] 
                                 >> 0x10U))) << 0xfU)) 
              | (__Vtemp383[2U] >> 0x10U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | (IData)((IData)((1U & ((((1U & (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xfU])) 
                                      + (1U & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0x10U]))) 
                                     + (1U & (IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                     [0U]))) 
                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffffeULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | (IData)((IData)((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xfU]) 
                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0x10U])) 
                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                              [0U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 1U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 1U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 1U)))) 
                                     >> 1U)))) << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffffdULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 1U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 1U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 2U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 2U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 2U)))) 
                                     >> 1U)))) << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffffbULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 2U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 2U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 3U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 3U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 3U)))) 
                                     >> 1U)))) << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffff7ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 3U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 3U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 4U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 4U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 4U)))) 
                                     >> 1U)))) << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffffefULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 4U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 4U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 5U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 5U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 5U)))) 
                                     >> 1U)))) << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffffdfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 5U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 5U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 6U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 6U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 6U)))) 
                                     >> 1U)))) << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffffbfULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 6U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 6U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 7U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 7U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 7U)))) 
                                     >> 1U)))) << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffff7fULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 7U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 7U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 8U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 8U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 8U)))) 
                                     >> 1U)))) << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffeffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 8U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 8U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 9U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 9U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 9U)))) 
                                     >> 1U)))) << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffdffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 9U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 9U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xaU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xaU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xaU)))) 
                                     >> 1U)))) << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffffbffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xaU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xaU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xbU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xbU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xbU)))) 
                                     >> 1U)))) << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffff7ffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xbU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xbU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xcU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xcU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xcU)))) 
                                     >> 1U)))) << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffefffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xcU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xcU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xdU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xdU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xdU)))) 
                                     >> 1U)))) << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffdfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xdU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xdU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xeU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xeU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xeU)))) 
                                     >> 1U)))) << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffffbfffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xeU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xeU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0xfU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0xfU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0xfU)))) 
                                     >> 1U)))) << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffff7fffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0xfU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0xfU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x10U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x10U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x10U)))) 
                                     >> 1U)))) << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffeffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x10U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x10U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x11U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x11U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x11U)))) 
                                     >> 1U)))) << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffdffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x11U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x11U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x12U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x12U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x12U)))) 
                                     >> 1U)))) << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffffbffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x12U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x12U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x13U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x13U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x13U)))) 
                                     >> 1U)))) << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffff7ffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x13U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x13U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x14U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x14U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x14U)))) 
                                     >> 1U)))) << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffefffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x14U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x14U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x15U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x15U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x15U)))) 
                                     >> 1U)))) << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffdfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x15U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x15U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x16U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x16U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x16U)))) 
                                     >> 1U)))) << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffffbfffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x16U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x16U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x17U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x17U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x17U)))) 
                                     >> 1U)))) << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffff7fffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x17U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x17U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x18U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x18U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x18U)))) 
                                     >> 1U)))) << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffeffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x18U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x18U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x19U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x19U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x19U)))) 
                                     >> 1U)))) << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffdffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x19U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x19U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1aU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1aU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1aU)))) 
                                     >> 1U)))) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffffbffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1bU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1bU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1bU)))) 
                                     >> 1U)))) << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffff7ffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1cU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1cU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1cU)))) 
                                     >> 1U)))) << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffefffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1dU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1dU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1dU)))) 
                                     >> 1U)))) << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffdfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1eU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1eU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1eU)))) 
                                     >> 1U)))) << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffffbfffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x1fU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x1fU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x1fU)))) 
                                     >> 1U)))) << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffff7fffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x1fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x1fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x20U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x20U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x20U)))) 
                                     >> 1U)))) << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffeffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x20U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x20U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x21U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x21U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x21U)))) 
                                     >> 1U)))) << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffdffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x21U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x21U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x22U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x22U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x22U)))) 
                                     >> 1U)))) << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffffbffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x22U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x22U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x23U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x23U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x23U)))) 
                                     >> 1U)))) << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffff7ffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x23U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x23U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x24U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x24U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x24U)))) 
                                     >> 1U)))) << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffefffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x24U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x24U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x25U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x25U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x25U)))) 
                                     >> 1U)))) << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffdfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x25U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x25U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x26U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x26U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x26U)))) 
                                     >> 1U)))) << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffffbfffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x26U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x26U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x27U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x27U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x27U)))) 
                                     >> 1U)))) << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffff7fffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x27U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x27U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x28U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x28U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x28U)))) 
                                     >> 1U)))) << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffeffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x28U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x28U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x29U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x29U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x29U)))) 
                                     >> 1U)))) << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffdffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x29U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x29U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2aU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2aU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2aU)))) 
                                     >> 1U)))) << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffffbffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2bU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2bU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2bU)))) 
                                     >> 1U)))) << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffff7ffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2cU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2cU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2cU)))) 
                                     >> 1U)))) << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffefffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2dU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2dU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2dU)))) 
                                     >> 1U)))) << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffdfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2eU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2eU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2eU)))) 
                                     >> 1U)))) << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffffbfffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x2fU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x2fU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x2fU)))) 
                                     >> 1U)))) << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffff7fffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x2fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x2fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x30U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x30U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x30U)))) 
                                     >> 1U)))) << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffeffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x30U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x30U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x31U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x31U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x31U)))) 
                                     >> 1U)))) << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffdffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x31U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x31U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x32U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x32U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x32U)))) 
                                     >> 1U)))) << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfffbffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x32U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x32U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x33U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x33U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x33U)))) 
                                     >> 1U)))) << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfff7ffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x33U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x33U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x34U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x34U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x34U)))) 
                                     >> 1U)))) << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffefffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x34U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x34U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x35U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x35U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x35U)))) 
                                     >> 1U)))) << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffdfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x35U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x35U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x36U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x36U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x36U)))) 
                                     >> 1U)))) << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xffbfffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x36U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x36U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x37U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x37U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x37U)))) 
                                     >> 1U)))) << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xff7fffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x37U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x37U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x38U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x38U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x38U)))) 
                                     >> 1U)))) << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfeffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x38U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x38U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x39U))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x39U)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x39U)))) 
                                     >> 1U)))) << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfdffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x39U)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x39U))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3aU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3aU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3aU)))) 
                                     >> 1U)))) << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xfbffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3aU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3aU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3bU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3bU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3bU)))) 
                                     >> 1U)))) << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xf7ffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3bU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3bU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3cU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3cU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3cU)))) 
                                     >> 1U)))) << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xefffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3cU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3cU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3dU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3dU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3dU)))) 
                                     >> 1U)))) << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xdfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3dU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3dU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3eU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3eU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3eU)))) 
                                     >> 1U)))) << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0xbfffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3eU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3eU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__Carry) 
           | ((QData)((IData)((1U & ((((1U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xfU] 
                                                      >> 0x3fU))) 
                                       + (1U & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0x10U] 
                                                        >> 0x3fU)))) 
                                      + (1U & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                       [0U] 
                                                       >> 0x3fU)))) 
                                     >> 1U)))) << 0x3fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S 
        = ((0x7fffffffffffffffULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__sec1__S) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xfU] 
                                               >> 0x3fU)) 
                                      + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__SecStageBoothRes
                                                 [0x10U] 
                                                 >> 0x3fU))) 
                                     + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__firSig
                                                [0U] 
                                                >> 0x3fU)))))) 
              << 0x3fU));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[0U] 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
            << 0xdU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[2U] 
                        >> 0x13U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[1U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData)) 
                    << 0x20U) | (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  << 0xdU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                    >> 0x13U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[2U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData)) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   << 0xdU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                     >> 0x13U))))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_bus[3U] 
        = ((0x20U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                     >> 5U)) | (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                         >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData)) 
                    << 0x20U) | (QData)((IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                  << 0xdU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                    >> 0x13U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_regWData)) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[4U] 
                                                   << 0xdU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[3U] 
                                                     >> 0x13U))))) 
                   >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_id_bus[2U] 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_ready_go) 
            << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_to_wb_valid) 
                       << 6U) | ((0x20U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                           >> 5U)) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_valid)
                                     ? (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mem_stage__DOT__mem_data[9U] 
                                                 >> 5U))
                                     : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                [0U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                        [0U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                [0U] == (0x3ffU & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 7U)))))) 
               & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                             [0U] >> 9U)) == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 0x1aU))))) 
              & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                  [0U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                            [0U]) == (0x1ffU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                        >> 0x11U)))))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                  [1U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                          [1U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                  [1U] == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 7U)))))) 
                 & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                               [1U] >> 9U)) == (0x3ffU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                           >> 0x1aU))))) 
                & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                    [1U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                              [1U]) == (0x1ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
               & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1)) 
              << 1U));
    __Vtemp401 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [2U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [2U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [2U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [2U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [2U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [2U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp401 << 2U));
    __Vtemp402 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [3U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [3U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [3U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [3U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [3U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [3U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp402 << 3U));
    __Vtemp403 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [4U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [4U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [4U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [4U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [4U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [4U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp403 << 4U));
    __Vtemp404 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [5U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [5U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [5U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [5U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [5U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [5U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp404 << 5U));
    __Vtemp405 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [6U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [6U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [6U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [6U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [6U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [6U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp405 << 6U));
    __Vtemp406 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [7U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [7U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [7U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [7U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [7U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [7U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0x7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp406 << 7U));
    __Vtemp407 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [8U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [8U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [8U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [8U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [8U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [8U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp407 << 8U));
    __Vtemp408 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [9U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                             [9U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                     [9U] == (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                         >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [9U] >> 9U)) == (0x3ffU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                              >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [9U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                 [9U]) == (0x1ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                             >> 0x11U)))))) 
                  & (~ (0U != (0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp408 << 9U));
    __Vtemp409 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xaU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xaU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xaU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xaU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xaU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xaU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp409 << 0xaU));
    __Vtemp410 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xbU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xbU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xbU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xbU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xbU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xbU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp410 << 0xbU));
    __Vtemp411 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xcU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xcU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xcU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xcU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xcU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xcU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp411 << 0xcU));
    __Vtemp412 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xdU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xdU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xdU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xdU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xdU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xdU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0x1fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp412 << 0xdU));
    __Vtemp413 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xeU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xeU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xeU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xeU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xeU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xeU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0x3fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp413 << 0xeU));
    __Vtemp414 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0xfU] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                               [0xfU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                         [0xfU] == 
                                         (0x3ffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0xfU] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0xfU]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                   [0xfU]) == (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 0x11U)))))) 
                  & (~ (0U != (0x7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp414 << 0xfU));
    __Vtemp415 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x10U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x10U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x10U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x10U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x10U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x10U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0xffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp415 << 0x10U));
    __Vtemp416 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x11U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x11U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x11U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x11U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x11U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x11U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x1ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp416 << 0x11U));
    __Vtemp417 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x12U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x12U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x12U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x12U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x12U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x12U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x3ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp417 << 0x12U));
    __Vtemp418 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x13U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x13U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x13U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x13U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x13U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x13U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp418 << 0x13U));
    __Vtemp419 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x14U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x14U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x14U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x14U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x14U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x14U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp419 << 0x14U));
    __Vtemp420 = ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_e
                     [0x15U] & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_g
                                [0x15U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_asid
                                           [0x15U] 
                                           == (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                          >> 7U)))))) 
                    & ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                  [0x15U] >> 9U)) == 
                       (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                          >> 0x1aU))))) 
                   & ((0x15U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_ps
                       [0x15U]) | ((0x1ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__tlb_vppn
                                    [0x15U]) == (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_to_tlb_bus 
                                                            >> 0x11U)))))) 
                  & (~ (0U != (0x1fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1 
        = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_tlb__DOT__match_item1) 
           | (__Vtemp420 << 0x15U));
}
