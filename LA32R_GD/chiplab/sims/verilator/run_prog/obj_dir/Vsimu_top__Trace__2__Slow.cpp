// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_2(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+4565,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+4566,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+4567,((1U & (~ (IData)((0x1fffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+4568,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0xbU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0xbU]))));
    bufp->fullBit(oldp+4569,((1U & (IData)((0xffffffffff000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+4570,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+4571,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+4572,((1U & (~ (IData)((0xffffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+4573,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0xcU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0xcU]))));
    bufp->fullBit(oldp+4574,((1U & (IData)((0x7fffffffff800ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+4575,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+4576,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+4577,((1U & (~ (IData)((0x7fffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+4578,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0xdU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0xdU]))));
    bufp->fullBit(oldp+4579,((1U & (IData)((0x3fffffffffc00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+4580,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+4581,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+4582,((1U & (~ (IData)((0x3fffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+4583,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0xeU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0xeU]))));
    bufp->fullBit(oldp+4584,((1U & (IData)((0x1fffffffffe00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+4585,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+4586,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+4587,((1U & (~ (IData)((0x1fffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+4588,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0xfU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0xfU]))));
    bufp->fullBit(oldp+4589,((1U & (IData)((0xffffffffff00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+4590,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+4591,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+4592,((1U & (~ (IData)((0xffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+4593,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x10U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x10U]))));
    bufp->fullBit(oldp+4594,((1U & (IData)((0x7fffffffff80ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+4595,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+4596,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+4597,((1U & (~ (IData)((0x7fffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+4598,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x11U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x11U]))));
    bufp->fullBit(oldp+4599,((1U & (IData)((0x3fffffffffc0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+4600,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+4601,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+4602,((1U & (~ (IData)((0x3fffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+4603,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x12U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x12U]))));
    bufp->fullBit(oldp+4604,((1U & (IData)((0x1fffffffffe0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+4605,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+4606,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+4607,((1U & (~ (IData)((0x1fffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+4608,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x13U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x13U]))));
    bufp->fullBit(oldp+4609,((1U & (IData)((0x7fffffffff800000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+4610,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+4611,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4612,((1U & (~ (IData)((0x7fffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+4613,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff800000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [1U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [1U]))));
    bufp->fullBit(oldp+4614,((1U & (IData)((0xffffffffff0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+4615,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+4616,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+4617,((1U & (~ (IData)((0xffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+4618,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x14U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x14U]))));
    bufp->fullBit(oldp+4619,((1U & (IData)((0x7fffffffff8ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+4620,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+4621,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+4622,((1U & (~ (IData)((0x7fffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+4623,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x15U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x15U]))));
    bufp->fullBit(oldp+4624,((1U & (IData)((0x3fffffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+4625,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+4626,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+4627,((1U & (~ (IData)((0x3fffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+4628,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x16U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x16U]))));
    bufp->fullBit(oldp+4629,((1U & (IData)((0x1fffffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+4630,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+4631,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+4632,((1U & (~ (IData)((0x1fffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+4633,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x17U]))));
    bufp->fullBit(oldp+4634,((1U & (IData)((0xffffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+4635,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+4636,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+4637,((1U & (~ (IData)((0xffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+4638,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x18U]))));
    bufp->fullBit(oldp+4639,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+4640,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+4641,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+4642,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+4643,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x19U]))));
    bufp->fullBit(oldp+4644,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+4645,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+4646,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+4647,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+4648,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU]))));
    bufp->fullBit(oldp+4649,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+4650,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+4651,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+4652,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+4653,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU]))));
    bufp->fullBit(oldp+4654,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+4655,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+4656,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+4657,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+4658,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU]))));
    bufp->fullBit(oldp+4659,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+4660,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+4661,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+4662,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+4663,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU]))));
    bufp->fullBit(oldp+4664,((1U & (IData)((0x3fffffffffc00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x16U))))));
    bufp->fullBit(oldp+4665,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+4666,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4667,((1U & (~ (IData)((0x3fffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))))));
    bufp->fullBit(oldp+4668,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffc00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [2U]))));
    bufp->fullBit(oldp+4669,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+4670,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+4671,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+4672,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+4673,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU]))));
    bufp->fullBit(oldp+4674,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+4675,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+4676,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+4677,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+4678,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU]))));
    bufp->fullBit(oldp+4679,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+4680,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+4681,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+4682,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+4683,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x20U]))));
    bufp->fullBit(oldp+4684,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+4685,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+4686,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+4687,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+4688,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x21U]))));
    bufp->fullBit(oldp+4689,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+4690,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+4691,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+4692,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+4693,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x22U]))));
    bufp->fullBit(oldp+4694,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+4695,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+4696,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+4697,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+4698,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x23U]))));
    bufp->fullBit(oldp+4699,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+4700,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+4701,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+4702,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+4703,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x24U]))));
    bufp->fullBit(oldp+4704,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+4705,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+4706,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+4707,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+4708,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x25U]))));
    bufp->fullBit(oldp+4709,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+4710,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+4711,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+4712,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+4713,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x26U]))));
    bufp->fullBit(oldp+4714,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+4715,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+4716,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+4717,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+4718,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x27U]))));
    bufp->fullBit(oldp+4719,((1U & (IData)((0x1fffffffffe00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x15U))))));
    bufp->fullBit(oldp+4720,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+4721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+4722,((1U & (~ (IData)((0x1fffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U)))))));
    bufp->fullBit(oldp+4723,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [3U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [3U]))));
    bufp->fullBit(oldp+4724,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+4725,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+4726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+4727,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+4728,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x28U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x28U]))));
    bufp->fullBit(oldp+4729,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+4730,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+4731,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+4732,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+4733,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x29U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x29U]))));
    bufp->fullBit(oldp+4734,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+4735,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+4736,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+4737,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+4738,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU]))));
    bufp->fullBit(oldp+4739,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+4740,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+4741,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+4742,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+4743,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU]))));
    bufp->fullBit(oldp+4744,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+4745,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+4746,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+4747,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+4748,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU]))));
    bufp->fullBit(oldp+4749,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+4750,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+4751,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+4752,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+4753,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU]))));
    bufp->fullBit(oldp+4754,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+4755,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+4756,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+4757,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+4758,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
    bufp->fullBit(oldp+4759,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+4760,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+4761,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+4762,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+4763,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
    bufp->fullBit(oldp+4764,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+4765,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+4766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+4767,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+4768,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x30U]))));
    bufp->fullBit(oldp+4769,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+4770,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+4771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+4772,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+4773,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x31U]))));
    bufp->fullBit(oldp+4774,((1U & (IData)((0xffffffffff00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+4775,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+4776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+4777,((1U & (~ (IData)((0xffffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+4778,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [4U]))));
    bufp->fullBit(oldp+4779,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+4780,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+4781,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+4782,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+4783,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x32U]))));
    bufp->fullBit(oldp+4784,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+4785,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+4786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+4787,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+4788,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x33U]))));
    bufp->fullBit(oldp+4789,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+4790,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+4791,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+4792,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+4793,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x34U]))));
    bufp->fullBit(oldp+4794,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+4795,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+4796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+4797,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+4798,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x35U]))));
    bufp->fullBit(oldp+4799,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+4800,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+4801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+4802,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+4803,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x36U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x36U]))));
    bufp->fullBit(oldp+4804,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+4805,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+4806,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+4807,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+4808,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x37U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x37U]))));
    bufp->fullBit(oldp+4809,((1U & (IData)((0xffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+4810,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+4811,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+4812,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+4813,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x38U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x38U]))));
    bufp->fullBit(oldp+4814,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+4815,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+4816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+4817,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+4818,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x39U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x39U]))));
    bufp->fullBit(oldp+4819,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+4820,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+4821,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+4822,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+4823,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x3aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU]))));
    bufp->fullBit(oldp+4824,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+4825,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+4826,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+4827,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+4828,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x3bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU]))));
    bufp->fullBit(oldp+4829,((1U & (IData)((0x7fffffffff80000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+4830,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+4831,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+4832,((1U & (~ (IData)((0x7fffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+4833,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [5U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [5U]))));
    bufp->fullBit(oldp+4834,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+4835,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+4836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+4837,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+4838,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU]))));
    bufp->fullBit(oldp+4839,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U))))));
    bufp->fullBit(oldp+4840,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+4841,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+4842,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+4843,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU]))));
    bufp->fullBit(oldp+4844,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x26U))))));
    bufp->fullBit(oldp+4845,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+4846,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+4847,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+4848,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU]))));
    bufp->fullBit(oldp+4849,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x27U))))));
    bufp->fullBit(oldp+4850,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+4851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+4852,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+4853,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x27U))) | 
                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU]))));
    bufp->fullBit(oldp+4854,((1U & (IData)((0x3fffffffffc0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+4855,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+4856,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+4857,((1U & (~ (IData)((0x3fffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+4858,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [6U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [6U]))));
    bufp->fullBit(oldp+4859,((1U & (IData)((0x1fffffffffe0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+4860,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+4861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+4862,((1U & (~ (IData)((0x1fffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+4863,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [7U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [7U]))));
    bufp->fullBit(oldp+4864,((1U & (IData)((0xffffffffff0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+4865,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+4866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+4867,((1U & (~ (IData)((0xffffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+4868,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [8U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [8U]))));
    bufp->fullBit(oldp+4869,((1U & (IData)((0x7fffffffff8000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+4870,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+4871,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+4872,((1U & (~ (IData)((0x7fffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+4873,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                     [9U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig
                                 [9U]))));
    bufp->fullBit(oldp+4874,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+4875,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x18U)))));
    bufp->fullCData(oldp+4876,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                              >> 0x19U)))),3);
    bufp->fullQData(oldp+4877,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                << 0x1aU)),64);
    bufp->fullQData(oldp+4879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX),64);
    bufp->fullBit(oldp+4881,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+4882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx));
    bufp->fullBit(oldp+4883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x));
    bufp->fullBit(oldp+4884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x));
    bufp->fullBit(oldp+4885,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x1aU)))));
    bufp->fullBit(oldp+4886,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+4887,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              << 0x1aU)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0x1aU)))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+4888,((1U & (IData)((0x3fffffffff0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+4889,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+4890,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+4891,((1U & (~ (IData)((0x3fffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+4892,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xaU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xaU]))));
    bufp->fullBit(oldp+4893,((1U & (IData)((0x1fffffffff8000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+4894,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+4895,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+4896,((1U & (~ (IData)((0x1fffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+4897,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xbU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xbU]))));
    bufp->fullBit(oldp+4898,((1U & (IData)((0xfffffffffc000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+4899,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+4900,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+4901,((1U & (~ (IData)((0xfffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+4902,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xcU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xcU]))));
    bufp->fullBit(oldp+4903,((1U & (IData)((0x7ffffffffe000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+4904,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+4905,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+4906,((1U & (~ (IData)((0x7ffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+4907,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xdU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xdU]))));
    bufp->fullBit(oldp+4908,((1U & (IData)((0x3fffffffff000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+4909,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+4910,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+4911,((1U & (~ (IData)((0x3fffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+4912,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xeU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xeU]))));
    bufp->fullBit(oldp+4913,((1U & (IData)((0x1fffffffff800ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+4914,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+4915,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+4916,((1U & (~ (IData)((0x1fffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+4917,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0xfU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0xfU]))));
    bufp->fullBit(oldp+4918,((1U & (IData)((0xfffffffffc00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+4919,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+4920,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+4921,((1U & (~ (IData)((0xfffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+4922,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x10U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x10U]))));
    bufp->fullBit(oldp+4923,((1U & (IData)((0x7ffffffffe00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+4924,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+4925,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+4926,((1U & (~ (IData)((0x7ffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+4927,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x11U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x11U]))));
    bufp->fullBit(oldp+4928,((1U & (IData)((0x3fffffffff00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+4929,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+4930,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+4931,((1U & (~ (IData)((0x3fffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+4932,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x12U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x12U]))));
    bufp->fullBit(oldp+4933,((1U & (IData)((0x1fffffffff80ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+4934,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+4935,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+4936,((1U & (~ (IData)((0x1fffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+4937,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x13U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x13U]))));
    bufp->fullBit(oldp+4938,((1U & (IData)((0x7ffffffffe000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x19U))))));
    bufp->fullBit(oldp+4939,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+4940,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4941,((1U & (~ (IData)((0x7ffffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U)))))));
    bufp->fullBit(oldp+4942,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [1U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [1U]))));
    bufp->fullBit(oldp+4943,((1U & (IData)((0xfffffffffc0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+4944,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+4945,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+4946,((1U & (~ (IData)((0xfffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+4947,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x14U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x14U]))));
    bufp->fullBit(oldp+4948,((1U & (IData)((0x7ffffffffe0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+4949,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+4950,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+4951,((1U & (~ (IData)((0x7ffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+4952,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x15U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x15U]))));
    bufp->fullBit(oldp+4953,((1U & (IData)((0x3fffffffff0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+4954,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+4955,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+4956,((1U & (~ (IData)((0x3fffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+4957,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x16U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x16U]))));
    bufp->fullBit(oldp+4958,((1U & (IData)((0x1fffffffff8ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+4959,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+4960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+4961,((1U & (~ (IData)((0x1fffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+4962,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x17U]))));
    bufp->fullBit(oldp+4963,((1U & (IData)((0xfffffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+4964,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+4965,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+4966,((1U & (~ (IData)((0xfffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+4967,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x18U]))));
    bufp->fullBit(oldp+4968,((1U & (IData)((0x7ffffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+4969,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+4970,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+4971,((1U & (~ (IData)((0x7ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+4972,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x19U]))));
    bufp->fullBit(oldp+4973,((1U & (IData)((0x3fffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+4974,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+4975,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+4976,((1U & (~ (IData)((0x3fffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+4977,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU]))));
    bufp->fullBit(oldp+4978,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+4979,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+4980,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+4981,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+4982,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU]))));
    bufp->fullBit(oldp+4983,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+4984,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+4985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+4986,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+4987,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU]))));
    bufp->fullBit(oldp+4988,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+4989,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+4990,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+4991,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+4992,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU]))));
    bufp->fullBit(oldp+4993,((1U & (IData)((0x3fffffffff000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x18U))))));
    bufp->fullBit(oldp+4994,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+4995,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4996,((1U & (~ (IData)((0x3fffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))))));
    bufp->fullBit(oldp+4997,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [2U]))));
    bufp->fullBit(oldp+4998,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+4999,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+5000,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+5001,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5002,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU]))));
    bufp->fullBit(oldp+5003,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+5004,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+5005,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+5006,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5007,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU]))));
    bufp->fullBit(oldp+5008,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+5009,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+5010,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+5011,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5012,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x20U]))));
    bufp->fullBit(oldp+5013,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+5014,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+5015,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+5016,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5017,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x21U]))));
    bufp->fullBit(oldp+5018,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+5019,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+5020,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+5021,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5022,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x22U]))));
    bufp->fullBit(oldp+5023,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+5024,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+5025,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+5026,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5027,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x23U]))));
    bufp->fullBit(oldp+5028,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+5029,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+5030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+5031,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5032,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x24U]))));
    bufp->fullBit(oldp+5033,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+5034,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+5035,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+5036,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5037,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x25U]))));
    bufp->fullBit(oldp+5038,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+5039,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+5040,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+5041,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5042,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x26U]))));
    bufp->fullBit(oldp+5043,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+5044,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+5045,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+5046,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5047,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x27U]))));
    bufp->fullBit(oldp+5048,((1U & (IData)((0x1fffffffff800000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+5049,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+5050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+5051,((1U & (~ (IData)((0x1fffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+5052,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff800000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [3U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [3U]))));
    bufp->fullBit(oldp+5053,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+5054,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+5055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+5056,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5057,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x28U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x28U]))));
    bufp->fullBit(oldp+5058,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+5059,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+5060,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+5061,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5062,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x29U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x29U]))));
    bufp->fullBit(oldp+5063,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+5064,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+5065,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+5066,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5067,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU]))));
    bufp->fullBit(oldp+5068,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+5069,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+5070,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+5071,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5072,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU]))));
    bufp->fullBit(oldp+5073,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+5074,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+5075,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+5076,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5077,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU]))));
    bufp->fullBit(oldp+5078,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+5079,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+5080,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+5081,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5082,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU]))));
    bufp->fullBit(oldp+5083,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+5084,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+5085,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+5086,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5087,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
    bufp->fullBit(oldp+5088,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+5089,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+5090,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+5091,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5092,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
    bufp->fullBit(oldp+5093,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+5094,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+5095,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+5096,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5097,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x30U]))));
    bufp->fullBit(oldp+5098,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+5099,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+5100,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+5101,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5102,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x31U]))));
    bufp->fullBit(oldp+5103,((1U & (IData)((0xfffffffffc00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x16U))))));
    bufp->fullBit(oldp+5104,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+5105,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+5106,((1U & (~ (IData)((0xfffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))))));
    bufp->fullBit(oldp+5107,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffc00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [4U]))));
    bufp->fullBit(oldp+5108,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+5109,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+5110,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+5111,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5112,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x32U]))));
    bufp->fullBit(oldp+5113,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+5114,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+5115,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+5116,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5117,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x33U]))));
    bufp->fullBit(oldp+5118,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+5119,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+5120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+5121,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5122,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x34U]))));
    bufp->fullBit(oldp+5123,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+5124,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+5125,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+5126,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5127,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x35U]))));
    bufp->fullBit(oldp+5128,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+5129,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+5130,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+5131,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5132,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x36U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x36U]))));
    bufp->fullBit(oldp+5133,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+5134,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+5135,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+5136,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5137,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x37U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x37U]))));
    bufp->fullBit(oldp+5138,((1U & (IData)((0xffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+5139,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+5140,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+5141,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5142,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x38U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x38U]))));
    bufp->fullBit(oldp+5143,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+5144,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+5145,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+5146,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5147,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x39U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x39U]))));
    bufp->fullBit(oldp+5148,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+5149,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+5150,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+5151,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5152,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x3aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU]))));
    bufp->fullBit(oldp+5153,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+5154,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+5155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+5156,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5157,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x3bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU]))));
    bufp->fullBit(oldp+5158,((1U & (IData)((0x7ffffffffe00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x15U))))));
    bufp->fullBit(oldp+5159,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+5160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+5161,((1U & (~ (IData)((0x7ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U)))))));
    bufp->fullBit(oldp+5162,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [5U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [5U]))));
    bufp->fullBit(oldp+5163,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+5164,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+5165,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+5166,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5167,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU]))));
    bufp->fullBit(oldp+5168,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U))))));
    bufp->fullBit(oldp+5169,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+5170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+5171,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5172,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU]))));
    bufp->fullBit(oldp+5173,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x24U))))));
    bufp->fullBit(oldp+5174,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+5175,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+5176,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5177,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU]))));
    bufp->fullBit(oldp+5178,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x25U))))));
    bufp->fullBit(oldp+5179,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+5180,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+5181,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5182,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x25U))) | 
                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU]))));
    bufp->fullBit(oldp+5183,((1U & (IData)((0x3fffffffff00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+5184,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+5185,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+5186,((1U & (~ (IData)((0x3fffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+5187,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [6U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [6U]))));
    bufp->fullBit(oldp+5188,((1U & (IData)((0x1fffffffff80000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+5189,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+5190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+5191,((1U & (~ (IData)((0x1fffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+5192,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [7U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [7U]))));
    bufp->fullBit(oldp+5193,((1U & (IData)((0xfffffffffc0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+5194,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+5195,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+5196,((1U & (~ (IData)((0xfffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+5197,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [8U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [8U]))));
    bufp->fullBit(oldp+5198,((1U & (IData)((0x7ffffffffe0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+5199,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+5200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+5201,((1U & (~ (IData)((0x7ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+5202,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                     [9U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig
                                 [9U]))));
    bufp->fullBit(oldp+5203,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+5204,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x1aU)))));
    bufp->fullCData(oldp+5205,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                              >> 0x1bU)))),3);
    bufp->fullQData(oldp+5206,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                << 0x1cU)),64);
    bufp->fullQData(oldp+5208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX),64);
    bufp->fullBit(oldp+5210,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx));
    bufp->fullBit(oldp+5212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x));
    bufp->fullBit(oldp+5213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x));
    bufp->fullBit(oldp+5214,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x1cU)))));
    bufp->fullBit(oldp+5215,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1cU))))));
    bufp->fullBit(oldp+5216,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              << 0x1cU)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0x1cU)))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5217,((1U & (IData)((0x3ffffffffc0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+5218,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+5219,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+5220,((1U & (~ (IData)((0x3ffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+5221,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xaU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xaU]))));
    bufp->fullBit(oldp+5222,((1U & (IData)((0x1ffffffffe0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+5223,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+5224,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+5225,((1U & (~ (IData)((0x1ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+5226,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xbU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xbU]))));
    bufp->fullBit(oldp+5227,((1U & (IData)((0xfffffffff0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+5228,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+5229,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+5230,((1U & (~ (IData)((0xfffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+5231,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xcU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xcU]))));
    bufp->fullBit(oldp+5232,((1U & (IData)((0x7ffffffff8000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+5233,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+5234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+5235,((1U & (~ (IData)((0x7ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+5236,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xdU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xdU]))));
    bufp->fullBit(oldp+5237,((1U & (IData)((0x3ffffffffc000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+5238,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+5239,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+5240,((1U & (~ (IData)((0x3ffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+5241,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xeU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xeU]))));
    bufp->fullBit(oldp+5242,((1U & (IData)((0x1ffffffffe000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+5243,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+5244,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+5245,((1U & (~ (IData)((0x1ffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+5246,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0xfU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0xfU]))));
    bufp->fullBit(oldp+5247,((1U & (IData)((0xfffffffff000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+5248,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+5249,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+5250,((1U & (~ (IData)((0xfffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+5251,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x10U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x10U]))));
    bufp->fullBit(oldp+5252,((1U & (IData)((0x7ffffffff800ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+5253,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+5254,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+5255,((1U & (~ (IData)((0x7ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+5256,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x11U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x11U]))));
    bufp->fullBit(oldp+5257,((1U & (IData)((0x3ffffffffc00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+5258,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+5259,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+5260,((1U & (~ (IData)((0x3ffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+5261,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x12U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x12U]))));
    bufp->fullBit(oldp+5262,((1U & (IData)((0x1ffffffffe00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+5263,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+5264,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+5265,((1U & (~ (IData)((0x1ffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+5266,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x13U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x13U]))));
    bufp->fullBit(oldp+5267,((1U & (IData)((0x7ffffffff8000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))))));
    bufp->fullBit(oldp+5268,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+5269,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+5270,((1U & (~ (IData)((0x7ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU)))))));
    bufp->fullBit(oldp+5271,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff8000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [1U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [1U]))));
    bufp->fullBit(oldp+5272,((1U & (IData)((0xfffffffff00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+5273,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+5274,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+5275,((1U & (~ (IData)((0xfffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+5276,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x14U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x14U]))));
    bufp->fullBit(oldp+5277,((1U & (IData)((0x7ffffffff80ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+5278,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+5279,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+5280,((1U & (~ (IData)((0x7ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+5281,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x15U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x15U]))));
    bufp->fullBit(oldp+5282,((1U & (IData)((0x3ffffffffc0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+5283,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+5284,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+5285,((1U & (~ (IData)((0x3ffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+5286,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x16U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x16U]))));
    bufp->fullBit(oldp+5287,((1U & (IData)((0x1ffffffffe0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+5288,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+5289,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+5290,((1U & (~ (IData)((0x1ffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+5291,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x17U]))));
    bufp->fullBit(oldp+5292,((1U & (IData)((0xfffffffff0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+5293,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+5294,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+5295,((1U & (~ (IData)((0xfffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+5296,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x18U]))));
    bufp->fullBit(oldp+5297,((1U & (IData)((0x7ffffffff8ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+5298,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+5299,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+5300,((1U & (~ (IData)((0x7ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+5301,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x19U]))));
    bufp->fullBit(oldp+5302,((1U & (IData)((0x3ffffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+5303,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+5304,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+5305,((1U & (~ (IData)((0x3ffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+5306,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU]))));
    bufp->fullBit(oldp+5307,((1U & (IData)((0x1ffffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+5308,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+5309,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+5310,((1U & (~ (IData)((0x1ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+5311,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU]))));
    bufp->fullBit(oldp+5312,((1U & (IData)((0xfffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+5313,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+5314,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+5315,((1U & (~ (IData)((0xfffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+5316,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU]))));
    bufp->fullBit(oldp+5317,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+5318,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+5319,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+5320,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5321,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU]))));
    bufp->fullBit(oldp+5322,((1U & (IData)((0x3ffffffffc000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+5323,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+5324,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+5325,((1U & (~ (IData)((0x3ffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))))));
    bufp->fullBit(oldp+5326,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [2U]))));
    bufp->fullBit(oldp+5327,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+5328,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+5329,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+5330,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5331,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU]))));
    bufp->fullBit(oldp+5332,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+5333,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+5334,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+5335,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5336,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU]))));
    bufp->fullBit(oldp+5337,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+5338,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+5339,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+5340,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5341,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x20U]))));
    bufp->fullBit(oldp+5342,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+5343,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+5344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+5345,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5346,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x21U]))));
    bufp->fullBit(oldp+5347,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+5348,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+5349,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+5350,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5351,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x22U]))));
    bufp->fullBit(oldp+5352,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+5353,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+5354,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+5355,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5356,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x23U]))));
    bufp->fullBit(oldp+5357,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+5358,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+5359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+5360,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5361,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x24U]))));
    bufp->fullBit(oldp+5362,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+5363,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+5364,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+5365,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5366,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x25U]))));
    bufp->fullBit(oldp+5367,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+5368,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+5369,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+5370,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5371,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x26U]))));
    bufp->fullBit(oldp+5372,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+5373,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+5374,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+5375,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5376,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x27U]))));
    bufp->fullBit(oldp+5377,((1U & (IData)((0x1ffffffffe000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x19U))))));
    bufp->fullBit(oldp+5378,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+5379,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+5380,((1U & (~ (IData)((0x1ffffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U)))))));
    bufp->fullBit(oldp+5381,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [3U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [3U]))));
    bufp->fullBit(oldp+5382,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+5383,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+5384,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+5385,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5386,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x28U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x28U]))));
    bufp->fullBit(oldp+5387,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+5388,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+5389,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+5390,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5391,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x29U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x29U]))));
    bufp->fullBit(oldp+5392,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+5393,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+5394,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+5395,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5396,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU]))));
    bufp->fullBit(oldp+5397,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+5398,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+5399,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+5400,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5401,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU]))));
    bufp->fullBit(oldp+5402,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+5403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+5404,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+5405,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5406,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU]))));
    bufp->fullBit(oldp+5407,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+5408,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+5409,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+5410,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5411,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU]))));
    bufp->fullBit(oldp+5412,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+5413,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+5414,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+5415,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5416,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
    bufp->fullBit(oldp+5417,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+5418,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+5419,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+5420,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5421,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
    bufp->fullBit(oldp+5422,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+5423,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+5424,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+5425,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5426,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x30U]))));
    bufp->fullBit(oldp+5427,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+5428,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+5429,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+5430,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5431,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x31U]))));
    bufp->fullBit(oldp+5432,((1U & (IData)((0xfffffffff000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x18U))))));
    bufp->fullBit(oldp+5433,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+5434,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+5435,((1U & (~ (IData)((0xfffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))))));
    bufp->fullBit(oldp+5436,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [4U]))));
    bufp->fullBit(oldp+5437,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+5438,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+5439,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+5440,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5441,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x32U]))));
    bufp->fullBit(oldp+5442,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+5443,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+5444,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+5445,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5446,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x33U]))));
    bufp->fullBit(oldp+5447,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+5448,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+5449,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+5450,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5451,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x34U]))));
    bufp->fullBit(oldp+5452,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+5453,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+5454,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+5455,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5456,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x35U]))));
    bufp->fullBit(oldp+5457,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+5458,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+5459,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+5460,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5461,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x36U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x36U]))));
    bufp->fullBit(oldp+5462,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+5463,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+5464,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+5465,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5466,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x37U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x37U]))));
    bufp->fullBit(oldp+5467,((1U & (IData)((0xffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+5468,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+5469,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+5470,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5471,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x38U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x38U]))));
    bufp->fullBit(oldp+5472,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+5473,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+5474,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+5475,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5476,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x39U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x39U]))));
    bufp->fullBit(oldp+5477,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+5478,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+5479,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+5480,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5481,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x3aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU]))));
    bufp->fullBit(oldp+5482,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+5483,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+5484,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+5485,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5486,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x3bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU]))));
    bufp->fullBit(oldp+5487,((1U & (IData)((0x7ffffffff800000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+5488,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+5489,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+5490,((1U & (~ (IData)((0x7ffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+5491,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff800000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff800000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [5U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [5U]))));
    bufp->fullBit(oldp+5492,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+5493,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+5494,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+5495,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5496,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU]))));
    bufp->fullBit(oldp+5497,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x21U))))));
    bufp->fullBit(oldp+5498,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+5499,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+5500,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5501,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU]))));
    bufp->fullBit(oldp+5502,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x22U))))));
    bufp->fullBit(oldp+5503,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+5504,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+5505,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5506,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU]))));
    bufp->fullBit(oldp+5507,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x23U))))));
    bufp->fullBit(oldp+5508,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+5509,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+5510,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5511,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x23U))) | 
                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU]))));
    bufp->fullBit(oldp+5512,((1U & (IData)((0x3ffffffffc00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x16U))))));
    bufp->fullBit(oldp+5513,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+5514,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+5515,((1U & (~ (IData)((0x3ffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))))));
    bufp->fullBit(oldp+5516,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffc00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffc00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [6U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [6U]))));
    bufp->fullBit(oldp+5517,((1U & (IData)((0x1ffffffffe00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x15U))))));
    bufp->fullBit(oldp+5518,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+5519,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+5520,((1U & (~ (IData)((0x1ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U)))))));
    bufp->fullBit(oldp+5521,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffe00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffe00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [7U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [7U]))));
    bufp->fullBit(oldp+5522,((1U & (IData)((0xfffffffff00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+5523,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+5524,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+5525,((1U & (~ (IData)((0xfffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+5526,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [8U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [8U]))));
    bufp->fullBit(oldp+5527,((1U & (IData)((0x7ffffffff80000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+5528,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+5529,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+5530,((1U & (~ (IData)((0x7ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+5531,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                     [9U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig
                                 [9U]))));
    bufp->fullBit(oldp+5532,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+5533,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 0x1cU)))));
    bufp->fullCData(oldp+5534,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                              >> 1U)))),3);
    bufp->fullQData(oldp+5535,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                << 2U)),64);
    bufp->fullQData(oldp+5537,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX),64);
    bufp->fullBit(oldp+5539,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5540,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx));
    bufp->fullBit(oldp+5541,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x));
    bufp->fullBit(oldp+5542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x));
    bufp->fullBit(oldp+5543,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 2U)))));
    bufp->fullBit(oldp+5544,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+5545,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              << 2U)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5546,((1U & (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+5547,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+5548,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+5549,((1U & (~ (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5550,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xaU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xaU]))));
    bufp->fullBit(oldp+5551,((1U & (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+5552,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+5553,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+5554,((1U & (~ (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5555,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xbU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xbU]))));
    bufp->fullBit(oldp+5556,((1U & (IData)((0xfffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+5557,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+5558,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+5559,((1U & (~ (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5560,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xcU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xcU]))));
    bufp->fullBit(oldp+5561,((1U & (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+5562,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+5563,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+5564,((1U & (~ (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5565,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xdU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xdU]))));
    bufp->fullBit(oldp+5566,((1U & (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+5567,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+5568,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+5569,((1U & (~ (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5570,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xeU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xeU]))));
    bufp->fullBit(oldp+5571,((1U & (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+5572,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+5573,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+5574,((1U & (~ (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5575,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0xfU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0xfU]))));
    bufp->fullBit(oldp+5576,((1U & (IData)((0xffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+5577,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+5578,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+5579,((1U & (~ (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5580,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x10U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x10U]))));
    bufp->fullBit(oldp+5581,((1U & (IData)((0x7fffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+5582,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+5583,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+5584,((1U & (~ (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5585,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x11U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x11U]))));
    bufp->fullBit(oldp+5586,((1U & (IData)((0x3fffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+5587,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+5588,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+5589,((1U & (~ (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5590,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x12U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x12U]))));
    bufp->fullBit(oldp+5591,((1U & (IData)((0x1fffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+5592,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+5593,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+5594,((1U & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5595,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x13U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x13U]))));
    bufp->fullBit(oldp+5596,((1U & (IData)((0x7ffffffffffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+5597,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+5598,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+5599,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+5600,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [1U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [1U]))));
    bufp->fullBit(oldp+5601,((1U & (IData)((0xfffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+5602,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+5603,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+5604,((1U & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5605,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x14U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x14U]))));
    bufp->fullBit(oldp+5606,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+5607,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+5608,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+5609,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5610,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x15U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x15U]))));
    bufp->fullBit(oldp+5611,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+5612,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+5613,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+5614,((1U & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5615,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x16U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x16U]))));
    bufp->fullBit(oldp+5616,((1U & (IData)((0x1ffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+5617,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+5618,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+5619,((1U & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5620,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x17U]))));
    bufp->fullBit(oldp+5621,((1U & (IData)((0xffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+5622,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+5623,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+5624,((1U & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5625,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x18U]))));
    bufp->fullBit(oldp+5626,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+5627,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+5628,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+5629,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5630,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x19U]))));
    bufp->fullBit(oldp+5631,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+5632,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+5633,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+5634,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5635,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU]))));
    bufp->fullBit(oldp+5636,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+5637,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+5638,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+5639,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5640,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU]))));
    bufp->fullBit(oldp+5641,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+5642,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+5643,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+5644,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5645,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU]))));
    bufp->fullBit(oldp+5646,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+5647,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+5648,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+5649,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5650,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU]))));
    bufp->fullBit(oldp+5651,((1U & (IData)((0x3fffffffffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+5652,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+5653,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+5654,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+5655,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [2U]))));
    bufp->fullBit(oldp+5656,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+5657,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+5658,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+5659,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5660,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU]))));
    bufp->fullBit(oldp+5661,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+5662,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+5663,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+5664,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5665,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU]))));
    bufp->fullBit(oldp+5666,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+5667,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+5668,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+5669,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5670,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x20U]))));
    bufp->fullBit(oldp+5671,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+5672,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+5673,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+5674,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5675,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x21U]))));
    bufp->fullBit(oldp+5676,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+5677,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+5678,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+5679,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5680,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x22U]))));
    bufp->fullBit(oldp+5681,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+5682,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+5683,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+5684,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5685,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x23U]))));
    bufp->fullBit(oldp+5686,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+5687,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+5688,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+5689,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5690,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x24U]))));
    bufp->fullBit(oldp+5691,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+5692,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+5693,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+5694,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5695,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x25U]))));
    bufp->fullBit(oldp+5696,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+5697,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+5698,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+5699,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5700,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x26U]))));
    bufp->fullBit(oldp+5701,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+5702,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+5703,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+5704,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5705,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x27U]))));
    bufp->fullBit(oldp+5706,((1U & (IData)((0x1fffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+5707,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+5708,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+5709,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5710,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [3U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [3U]))));
    bufp->fullBit(oldp+5711,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+5712,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+5713,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+5714,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5715,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x28U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x28U]))));
    bufp->fullBit(oldp+5716,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+5717,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+5718,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+5719,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5720,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x29U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x29U]))));
    bufp->fullBit(oldp+5721,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+5722,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+5723,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+5724,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5725,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU]))));
    bufp->fullBit(oldp+5726,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+5727,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+5728,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+5729,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5730,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU]))));
    bufp->fullBit(oldp+5731,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+5732,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+5733,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+5734,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5735,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU]))));
    bufp->fullBit(oldp+5736,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+5737,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+5738,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+5739,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5740,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU]))));
    bufp->fullBit(oldp+5741,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+5742,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+5743,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+5744,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5745,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
    bufp->fullBit(oldp+5746,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+5747,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+5748,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+5749,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5750,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
    bufp->fullBit(oldp+5751,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+5752,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+5753,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+5754,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5755,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x30U]))));
    bufp->fullBit(oldp+5756,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+5757,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+5758,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+5759,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5760,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x31U]))));
    bufp->fullBit(oldp+5761,((1U & (IData)((0xfffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+5762,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+5763,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+5764,((1U & (~ (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5765,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [4U]))));
    bufp->fullBit(oldp+5766,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+5767,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+5768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+5769,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5770,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x32U]))));
    bufp->fullBit(oldp+5771,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+5772,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+5773,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+5774,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5775,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x33U]))));
    bufp->fullBit(oldp+5776,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+5777,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+5778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+5779,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5780,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x34U]))));
    bufp->fullBit(oldp+5781,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+5782,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+5783,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+5784,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5785,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x35U]))));
    bufp->fullBit(oldp+5786,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+5787,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+5788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+5789,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5790,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x36U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x36U]))));
    bufp->fullBit(oldp+5791,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+5792,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+5793,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+5794,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5795,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x37U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x37U]))));
    bufp->fullBit(oldp+5796,((1U & (IData)((0xffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+5797,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+5798,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+5799,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5800,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x38U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x38U]))));
    bufp->fullBit(oldp+5801,((1U & (IData)((0x7fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+5802,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+5803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+5804,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5805,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x39U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x39U]))));
    bufp->fullBit(oldp+5806,((1U & (IData)((0x3fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+5807,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+5808,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+5809,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5810,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x3aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3aU]))));
    bufp->fullBit(oldp+5811,((1U & (IData)((0x1fULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+5812,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+5813,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+5814,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5815,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x3bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3bU]))));
    bufp->fullBit(oldp+5816,((1U & (IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+5817,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+5818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+5819,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5820,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [5U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [5U]))));
    bufp->fullBit(oldp+5821,((1U & (IData)((0xfULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+5822,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+5823,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+5824,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5825,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x3cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3cU]))));
    bufp->fullBit(oldp+5826,((1U & (IData)((7ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))))));
    bufp->fullBit(oldp+5827,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+5828,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+5829,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5830,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((7ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((7ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x3dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3dU]))));
    bufp->fullBit(oldp+5831,((1U & (IData)((3ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU))))));
    bufp->fullBit(oldp+5832,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+5833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+5834,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5835,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((3ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((3ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [0x3eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3eU]))));
    bufp->fullBit(oldp+5836,((1U & (IData)((1ULL & 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU))))));
    bufp->fullBit(oldp+5837,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+5838,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+5839,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5840,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((1ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                      >> 0x3dU))) | 
                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                   [0x3fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [0x3fU]))));
    bufp->fullBit(oldp+5841,((1U & (IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+5842,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+5843,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+5844,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5845,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [6U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [6U]))));
    bufp->fullBit(oldp+5846,((1U & (IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+5847,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+5848,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+5849,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5850,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [7U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [7U]))));
    bufp->fullBit(oldp+5851,((1U & (IData)((0xffffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+5852,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+5853,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+5854,((1U & (~ (IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5855,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [8U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [8U]))));
    bufp->fullBit(oldp+5856,((1U & (IData)((0x7fffffffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+5857,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+5858,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+5859,((1U & (~ (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5860,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                     [9U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                 [9U]))));
    bufp->fullBit(oldp+5861,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 3U)))));
    bufp->fullBit(oldp+5862,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 2U)))));
    bufp->fullBit(oldp+5863,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                            >> 1U)))));
    bufp->fullCData(oldp+5864,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalY 
                                              >> 0x1dU)))),3);
    bufp->fullQData(oldp+5865,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                << 0x1eU)),64);
    bufp->fullQData(oldp+5867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX),64);
    bufp->fullBit(oldp+5869,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5870,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx));
    bufp->fullBit(oldp+5871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x));
    bufp->fullBit(oldp+5872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x));
    bufp->fullBit(oldp+5873,((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                            << 0x1eU)))));
    bufp->fullBit(oldp+5874,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1eU))))));
    bufp->fullBit(oldp+5875,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                              << 0x1eU)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                  & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                             << 0x1eU)))) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x))));
    bufp->fullBit(oldp+5876,((1U & (IData)((0x3ffffffff00000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+5877,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+5878,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+5879,((1U & (~ (IData)((0x3ffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+5880,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff00000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff00000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xaU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xaU]))));
    bufp->fullBit(oldp+5881,((1U & (IData)((0x1ffffffff80000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+5882,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+5883,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+5884,((1U & (~ (IData)((0x1ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+5885,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff80000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff80000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xbU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xbU]))));
    bufp->fullBit(oldp+5886,((1U & (IData)((0xffffffffc0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+5887,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+5888,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+5889,((1U & (~ (IData)((0xffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+5890,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffc0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffc0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xcU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xcU]))));
    bufp->fullBit(oldp+5891,((1U & (IData)((0x7fffffffe0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+5892,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+5893,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+5894,((1U & (~ (IData)((0x7fffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+5895,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffe0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffe0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xdU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xdU]))));
    bufp->fullBit(oldp+5896,((1U & (IData)((0x3ffffffff0000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+5897,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+5898,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+5899,((1U & (~ (IData)((0x3ffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+5900,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff0000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff0000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xeU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xeU]))));
    bufp->fullBit(oldp+5901,((1U & (IData)((0x1ffffffff8000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+5902,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+5903,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+5904,((1U & (~ (IData)((0x1ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+5905,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff8000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff8000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0xfU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0xfU]))));
    bufp->fullBit(oldp+5906,((1U & (IData)((0xffffffffc000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+5907,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+5908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+5909,((1U & (~ (IData)((0xffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+5910,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffc000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffc000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x10U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x10U]))));
    bufp->fullBit(oldp+5911,((1U & (IData)((0x7fffffffe000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+5912,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+5913,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+5914,((1U & (~ (IData)((0x7fffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+5915,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffe000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffe000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x11U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x11U]))));
    bufp->fullBit(oldp+5916,((1U & (IData)((0x3ffffffff000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+5917,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+5918,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+5919,((1U & (~ (IData)((0x3ffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+5920,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x12U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x12U]))));
    bufp->fullBit(oldp+5921,((1U & (IData)((0x1ffffffff800ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+5922,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+5923,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+5924,((1U & (~ (IData)((0x1ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+5925,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff800ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff800ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x13U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x13U]))));
    bufp->fullBit(oldp+5926,((1U & (IData)((0x7fffffffe0000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1dU))))));
    bufp->fullBit(oldp+5927,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+5928,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+5929,((1U & (~ (IData)((0x7fffffffe0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU)))))));
    bufp->fullBit(oldp+5930,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffe0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffe0000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [1U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [1U]))));
    bufp->fullBit(oldp+5931,((1U & (IData)((0xffffffffc00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+5932,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+5933,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+5934,((1U & (~ (IData)((0xffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+5935,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffc00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffc00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x14U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x14U]))));
    bufp->fullBit(oldp+5936,((1U & (IData)((0x7fffffffe00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+5937,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+5938,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+5939,((1U & (~ (IData)((0x7fffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+5940,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffe00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffe00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x15U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x15U]))));
    bufp->fullBit(oldp+5941,((1U & (IData)((0x3ffffffff00ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+5942,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+5943,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+5944,((1U & (~ (IData)((0x3ffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+5945,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff00ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff00ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x16U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x16U]))));
    bufp->fullBit(oldp+5946,((1U & (IData)((0x1ffffffff80ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+5947,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+5948,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+5949,((1U & (~ (IData)((0x1ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+5950,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff80ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff80ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x17U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x17U]))));
    bufp->fullBit(oldp+5951,((1U & (IData)((0xffffffffc0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+5952,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+5953,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+5954,((1U & (~ (IData)((0xffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+5955,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffc0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffc0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x18U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x18U]))));
    bufp->fullBit(oldp+5956,((1U & (IData)((0x7fffffffe0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+5957,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+5958,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+5959,((1U & (~ (IData)((0x7fffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+5960,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffe0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffe0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x19U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x19U]))));
    bufp->fullBit(oldp+5961,((1U & (IData)((0x3ffffffff0ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+5962,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+5963,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+5964,((1U & (~ (IData)((0x3ffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+5965,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff0ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff0ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1aU]))));
    bufp->fullBit(oldp+5966,((1U & (IData)((0x1ffffffff8ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+5967,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+5968,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+5969,((1U & (~ (IData)((0x1ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+5970,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff8ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff8ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1bU]))));
    bufp->fullBit(oldp+5971,((1U & (IData)((0xffffffffcULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+5972,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+5973,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+5974,((1U & (~ (IData)((0xffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+5975,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffcULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffcULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1cU]))));
    bufp->fullBit(oldp+5976,((1U & (IData)((0x7fffffffeULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+5977,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+5978,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+5979,((1U & (~ (IData)((0x7fffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+5980,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffeULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffeULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1dU]))));
    bufp->fullBit(oldp+5981,((1U & (IData)((0x3ffffffff0000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1cU))))));
    bufp->fullBit(oldp+5982,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+5983,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+5984,((1U & (~ (IData)((0x3ffffffff0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU)))))));
    bufp->fullBit(oldp+5985,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffff0000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffff0000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [2U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [2U]))));
    bufp->fullBit(oldp+5986,((1U & (IData)((0x3ffffffffULL 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+5987,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+5988,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+5989,((1U & (~ (IData)((0x3ffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+5990,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffffULL 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffffULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX)))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1eU]))));
    bufp->fullBit(oldp+5991,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+5992,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+5993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+5994,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5995,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x1fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x1fU]))));
    bufp->fullBit(oldp+5996,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+5997,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+5998,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+5999,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+6000,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x20U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x20U]))));
    bufp->fullBit(oldp+6001,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+6002,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+6003,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+6004,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+6005,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x21U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x21U]))));
    bufp->fullBit(oldp+6006,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+6007,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+6008,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+6009,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+6010,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x22U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x22U]))));
    bufp->fullBit(oldp+6011,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+6012,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+6013,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+6014,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+6015,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x23U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x23U]))));
    bufp->fullBit(oldp+6016,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+6017,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+6018,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+6019,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+6020,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x24U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x24U]))));
    bufp->fullBit(oldp+6021,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+6022,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+6023,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+6024,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+6025,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x25U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x25U]))));
    bufp->fullBit(oldp+6026,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+6027,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+6028,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+6029,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+6030,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x26U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x26U]))));
    bufp->fullBit(oldp+6031,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+6032,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+6033,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+6034,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+6035,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x27U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x27U]))));
    bufp->fullBit(oldp+6036,((1U & (IData)((0x1ffffffff8000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))))));
    bufp->fullBit(oldp+6037,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+6038,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+6039,((1U & (~ (IData)((0x1ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU)))))));
    bufp->fullBit(oldp+6040,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffffff8000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffffff8000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [3U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [3U]))));
    bufp->fullBit(oldp+6041,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+6042,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+6043,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+6044,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+6045,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x28U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x28U]))));
    bufp->fullBit(oldp+6046,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+6047,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+6048,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+6049,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+6050,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x29U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x29U]))));
    bufp->fullBit(oldp+6051,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+6052,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+6053,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+6054,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+6055,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2aU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2aU]))));
    bufp->fullBit(oldp+6056,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+6057,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+6058,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+6059,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+6060,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2bU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2bU]))));
    bufp->fullBit(oldp+6061,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+6062,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+6063,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+6064,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+6065,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2cU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2cU]))));
    bufp->fullBit(oldp+6066,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+6067,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+6068,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+6069,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+6070,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2dU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2dU]))));
    bufp->fullBit(oldp+6071,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+6072,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+6073,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+6074,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+6075,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2eU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2eU]))));
    bufp->fullBit(oldp+6076,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+6077,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+6078,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+6079,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+6080,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1ffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x2fU] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x2fU]))));
    bufp->fullBit(oldp+6081,((1U & (IData)((0xffffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+6082,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+6083,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+6084,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+6085,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x30U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x30U]))));
    bufp->fullBit(oldp+6086,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+6087,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+6088,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+6089,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+6090,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x31U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x31U]))));
    bufp->fullBit(oldp+6091,((1U & (IData)((0xffffffffc000000ULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+6092,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+6093,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+6094,((1U & (~ (IData)((0xffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))))));
    bufp->fullBit(oldp+6095,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xffffffffc000000ULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xffffffffc000000ULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [4U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [4U]))));
    bufp->fullBit(oldp+6096,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+6097,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+6098,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+6099,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+6100,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x3fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x3fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x32U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x32U]))));
    bufp->fullBit(oldp+6101,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+6102,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+6103,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+6104,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+6105,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x1fffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x1fffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x33U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x33U]))));
    bufp->fullBit(oldp+6106,((1U & (IData)((0xfffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+6107,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+6108,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+6109,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+6110,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0xfffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0xfffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x34U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x34U]))));
    bufp->fullBit(oldp+6111,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+6112,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+6113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+6114,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+6115,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx) 
                                 & (~ (IData)((0x7ffULL 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x) 
                                   & (IData)((0x7ffULL 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                     [0x35U] >> 1U))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x) 
                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig
                                 [0x35U]))));
    bufp->fullBit(oldp+6116,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_exe_stage__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
}